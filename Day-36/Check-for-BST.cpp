/*plateform-> GeeksForGeeks (practice Easy)

Topic -> Binary Search Tree.

language used->cpp.
    
Problem Statement->

Given a binary tree. Check whether it is a BST or not.
Note: We are considering that BSTs can not contain duplicate Nodes.

Example 1:

Input:
    2
 /    \
1      3
Output: 1 
Explanation: 
The left subtree of root node contains node 
with key lesser than the root node’s key and 
the right subtree of root node contains node 
with key greater than the root node’s key.
Hence, the tree is a BST.
Example 2:

Input:
  2
   \
    7
     \
      6
       \
        5
         \
          9
           \
            2
             \
              6
Output: 0 
Explanation: 
Since the node with value 7 has right subtree 
nodes with keys less than 7, this is not a BST.
Your Task:
You don't need to read input or print anything. Your task is to complete the function isBST() which takes the root of the tree as a parameter and returns true if the given binary tree is BST, else returns false. 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the BST).

Constraints:
0 <= Number of edges <= 100000

Approach-> The idea is to traverse through the tree in Inorder fashion and store the element in a vector and check if it is sorted and contain all distict element or not.*/

void InOrder(Node *root,vector<int>&v)
    {
        if(root)
        {
            InOrder(root->left,v);
            v.push_back(root->data);
           InOrder(root->right,v);
       }
    }
    bool isBST(Node* root) 
    {
       vector<int>v={};
        InOrder(root,v);
        set<int>s(v.begin(),v.end());
        if(is_sorted(v.begin(),v.end()) && s.size()==v.size())
        {
            return 1;
        }else
        {
            return 0;
        }
   }

//Time Complexity: O(N).