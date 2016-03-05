#include <cstdio>
#include <iostream>

using namespace std;

struct TreeNode {
  int value;
  TreeNode *left, *right;

  TreeNode(int val): value(val), left(NULL), right(NULL) {}
};

void inorder(TreeNode *A) {
    TreeNode *current = A;
    while(current != NULL) {
        if(current->left != NULL) {
            TreeNode *pred = current->left;
            while(pred->right != NULL && pred->right != current)
                pred = pred->right;

            if(pred->right == NULL) { /* Have to process left subtree */
                pred->right = current;
                current = current->left;
            }
            else {
                cout << current->value << " "; /* Next smallest */
                current = current->right;
                pred->right = NULL; /* Recover tree structure */
            }
        }
        else {
            cout << current->value << " "; /* Next smallest */
            current = current->right;
        }
    }
}

int main( void ) {
    TreeNode *a, *b, *c, *d, *e;

    a = new TreeNode(1);
    b = new TreeNode(2);
    c = new TreeNode(3);
    d = new TreeNode(4);
    e = new TreeNode(5);

    d->left = a;
    d->right = b;
    a->left = c;
    c->left = e;

    /*
       4
      1  2
     3
    5
    */

    inorder(d); // 5 3 1 4 2

    return 0;
}
