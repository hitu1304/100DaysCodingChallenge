/*plateform-> GeeksforGeeks

    Topic->Tree (Basic)
    
    language used->cpp.
    
    Problem Statement->
    
Given a binary tree, find its preorder traversal.

Example 1:

Input:
        1      
      /          
    4    
  /    \   
4       2
Output: 1 4 4 2 
Example 2:

Input:
       6
     /   \
    3     2
     \   / 
      1 2
Output: 6 3 1 2 2 

Your Task:
You just have to complete the function preorder() which takes the root node of the tree as input and returns an array containing the preorder traversal of the tree.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= Number of nodes <= 104
1 <= Data of a node <= 105

Approach-> Preorder traversal*/

vector <int> preorder(Node* root)
{
  // Your code here
  vector<int>v={};
  stack<Node*>s;
  while(root || !s.empty())
  {
      if(root)
      {
          v.push_back(root->data);
          s.push( root);
          root=root->left;
      }else
      {
          root=s.top();
          s.pop();
          root=root->right;
      }
  }
  return v;
}

//Time Complexity-> O(n).
