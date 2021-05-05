/*plateform-> GeeksForGeeks (practice Basic)

Topic -> Binary Search Tree.

language used->cpp.
    
Problem Statement->

Given a Binary Search Tree and a node value X, find if node with value X is present in the BST or not. 


Example 1:

Input:
         2
          \
          81
        /    \
      42      87
    /   \       \
   45   66      90
x = 87
Output: 1
Explanation: As 87 is present in the
given nodes , so the output will be
1.
Example 2:

Input:
      6
       \
        7
       / \
      8   9
x = 11
Output: 0
Explanation: As 11 is not present in 
he given nodes , so the output will
be 0.

Your Task:
You don't need to read input or print anything. Complete the function search() which returns true if the node with value x is present in the BST else returns false. 


Expected Time Complexity: O(Height of the BST)
Expected Auxiliary Space: O(1).


Constraints:
1 <= Number of nodes <= 105

Approach-> Use the arrangement of BST i.e if node data value is less than the search value than go to left child otherwise right child when found stop.*/

while(root)
    {
        if(root->data==x)
        return 1;
        else if(root->data>x)
        {
            root=root->left;
        }else
        {
            root=root->right;
        }
    }return 0;

//Time Complexity: O(log N).
