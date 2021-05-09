/*plateform-> GeeksForGeeks (practice Easy)

Topic ->  BST

language used->cpp.
    
Problem Statement->

Given a Binary Search Tree (with all values unique) and two node values. Find the Lowest Common Ancestors of the two nodes in the BST.

Example 1:

Input:
              5
           /    \
         4       6
        /         \
       3           7
                    \
                     8
n1 = 7, n2 = 8
Output: 7
Example 2:

Input:
     2
   /   \
  1     3
n1 = 1, n2 = 3
Output: 2
Your Task:
You don't need to read input or print anything. Your task is to complete the function LCA() which takes the root Node of the BST and two integer values n1 and n2 as inputs and returns the Lowest Common Ancestor of the Nodes with values n1 and n2 in the given BST. 

Expected Time Complexity: O(Height of the BST).
Expected Auxiliary Space: O(Height of the BST).

Constraints:
1 <= N <= 104

Approach-> traverse through the BST If both n1 and n2 are smaller than data at current node then go to  left subtree and If both n1 and n2 are greater than data at current node then go to  right subtree else return the current node.*/

Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   Node *p=root;
   Node *q=NULL;
   while(p)
   {
       if(p->data>n2 && p->data>n1)
       {
          
           p=p->left;
       }else if(p->data<n2 && p->data<n1)
       {
           
           p=p->right;
       }else
       {
           break;
       }
  }return p;
}

//Time Complexity: O(Height of the BST).