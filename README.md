<b>GENERAL</b>

What is a binary tree

What is the difference between a binary tree and a Binary Search Tree

What is the possible gain in terms of time complexity compared to linked lists

What are the depth, the height, the size of a binary tree

What are the different traversal methods to go through a binary tree

What is a complete, a full, a perfect, a balanced binary tree

1. Binary Tree: A binary tree is a hierarchical data structure composed of nodes where each node has at most two children, referred to as the left child and the right child. The topmost node is called the root. Nodes without any children are called leaf nodes.

2. Binary Tree vs. Binary Search Tree (BST): A Binary Search Tree is a specific type of binary tree where the key values of the nodes in the left subtree are less than the key value of the root node, and the key values of the nodes in the right subtree are greater than the key value of the root node. This property facilitates efficient searching algorithms compared to a general binary tree.

3. Time Complexity Gain Compared to Linked Lists: In terms of time complexity, a binary search tree provides faster search, insert, and delete operations compared to linked lists. In a balanced binary search tree, operations can be performed in O(log n) time, whereas in a linked list, these operations are O(n) as it requires linear traversal.

4. Depth, Height, and Size of a Binary Tree: The depth of a node is the number of edges in the path from the root to that node. The height of a binary tree is the maximum depth of any node in the tree. The size of a binary tree is the total number of nodes in the tree.

5. Traversing a Binary Tree:
There are several traversal methods to navigate through a binary tree:
     - Inorder Traversal: Visit left subtree, current node, right subtree.
     - Preorder Traversal: Visit current node, left subtree, right subtree.
     - Postorder Traversal: Visit left subtree, right subtree, current node.
     - Level Order Traversal: Visit nodes level by level, left to right.

6. Special Types of Binary Trees:
   - Complete Binary Tree: A binary tree in which every level, except possibly the last, is fully filled, and all nodes are as left as possible.
   - Full Binary Tree: A binary tree where each node has either 0 or 2 children.
   - Perfect Binary Tree: A binary tree where all internal nodes have exactly two children, and all leaves are at the same level.
   - Balanced Binary Tree: A binary tree in which the heights of the two subtrees of any node never differ by more than one.
