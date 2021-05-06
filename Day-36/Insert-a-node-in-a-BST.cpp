/*plateform-> GeeksForGeeks (practice Easy)

Topic -> Binary Search Tree.

language used->cpp.
    
Problem Statement->

Given a BST and a key K. If K is not present in the BST, Insert a new Node with a value equal to K into the BST. 
Note: If K is already present in the BST, don't modify the BST.


Example 1:

Input:
     2
   /   \
  1     3
K = 4
Output: 1 2 3 4
Explanation: After inserting the node 4
Inorder traversal will be 1 2 3 4.
Example 2:

Input:
        2
      /   \
     1     3
             \
              6
K = 4
Output: 1 2 3 4 6
Explanation: After inserting the node 4
Inorder traversal of the above tree
will be 1 2 3 4 6.

Your Task:
You don't need to read input or print anything. Your task is to complete the function insert() which takes the root of the BST and Key K as input parameters and returns the root of the modified BST after inserting K. 
Note: The generated output contains the inorder traversal of the modified tree.


Expected Time Complexity: O(Height of the BST).
Expected Auxiliary Space: O(1).


Constraints:
1 <= Number of nodes <= 105
1 <= K <= 106

Approach->If given data is less than data at the current node, call the function recursively to insert new node in left subtree.
Else if given data is more than data at the current node, call the function recursively to insert new node in right subtree.
If it's equal you simply need to ignore the insertion.*/

Node* insert(Node* root, int Key)
{
    // Your code here
    Node *node=root;
   if (node == NULL) 
        return new Node(Key);
   
    if (Key < node->data)
        node->left  = insert(node->left, Key);
  
    else if (Key > node->data)
        node->right = insert(node->right, Key);
        
    return root;
}

//Time Complexity: O(Height of the BST).

