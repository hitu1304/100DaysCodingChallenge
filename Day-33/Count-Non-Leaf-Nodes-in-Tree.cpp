/*plateform-> GeeksforGeeks

    Topic->Tree (Basic)
    
    language used->cpp.
    
    Problem Statement->
    

Given a Binary Tree of size N, your task is to complete the function countNonLeafNodes(), that should return the count of all the non-leaf nodes of the given binary tree.
Example:

Approach-> Traverse through the list and keep counting the nodes whose left and right both is Not NULL.*/

int countNonLeafNodes(Node* root)
{
    // Code here
    int x,y;
  if(root)
  
  {
      x=countNonLeafNodes( root->left);
      y=countNonLeafNodes( root->right);
      if(!root->left && !root->right)
      return x+y;
      else
      return x+y+1;
      
  }return 0;
}

//Time Complexity: O(N).