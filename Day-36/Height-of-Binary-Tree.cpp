/*plateform-> GeeksForGeeks (practice Medium)

Topic ->  Tree.

language used->cpp.
    
Problem Statement->

Given a binary tree, find its height.


Example 1:

Input:
     1
    /  \
   2    3
Output: 2
Example 2:

Input:
  2
   \
    1
   /
 3
Output: 3   

Your Task:
You don't need to read input or print anything. Your task is to complete the function height() which takes root node of the tree as input parameter and returns an integer denoting the height of the tree. If the tree is empty, return 0. 


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)


Constraints:
1 <= Number of nodes <= 105
1 <= Data of a node <= 105

Approach-> If node is null then return 0.
Else we call the recursive function, height for left and right subtree and choose their maximum.
We also add 1 to the result which indicates height of root of the tree.*/

int height(struct Node* node)
    {
      if (node==NULL)
            return 0;
        else
        return 1 + max(height(node->left), height(node->right));
    }    

//Time Complexity: O(N)