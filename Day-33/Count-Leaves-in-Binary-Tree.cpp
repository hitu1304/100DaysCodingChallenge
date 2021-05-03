/*plateform-> GeeksforGeeks

    Topic->Tree (Basic)
    
    language used->cpp.
    
    Problem Statement->
    
Given a Binary Tree of size N , You have to count leaves in it. For example, there are two leaves in following tree

        1
     /      \
   10      39
  /
5

 

Example 1:


Input:
Given Tree is 
               4
             /   \
            8     10
           /     /   \
          7     5     1
         /
        3 
Output:
3
Explanation: 
Three leaves are 3 , 5 and 1.
 

Your Task:
You don't have to take input. Complete the function countLeaves() that takes root node of given tree as parameter and returns the count of leaves in tree . The printing is done by the driver code.
 

Constraints:
1<= N <= 104

Approach-> Traverse through the list and keep counting the nodes whose left and right both is NULL.*/

int countLeaves(Node* root)
{
  // Your code here
  int x,y;
  if(root)
  
  {
      x=countLeaves( root->left);
      y=countLeaves( root->right);
      if(!root->left && !root->right)
      return x+y+1;
      else
      return x+y;
      
  }return 0;
}

//Time Complexity: O(N).