# morris
A C++ implementation of __Morris Inorder Traversal__ of a binary tree. Morris traversal visits the nodes of the tree with `O(1)` space overhead. In other words, the only space used is the space required to store the tree + constant additive space. The traversal takes `O(n)` time where `n` is the nubmer of nodes in the tree. This algorithm can replace classical methods for traversal when stack size is limited for example.

Advantages:
* Takes time linear in number of nodes.
* `O(1)` extra space.
* Non-destructive: tree remains intact after traversal terminates.
