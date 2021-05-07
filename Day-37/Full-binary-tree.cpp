/*plateform-> GeeksForGeeks (practice Easy)

Topic ->  Tree.

language used->cpp.
    
Problem Statement->

Given a Binary Tree. Check whether the Binary tree is a full binary tree or not.

Example 1:

Input:
          1
       /    \
      2      3
    /   \
   4     5
Output: 1
Explanation: Every node except leaf node
has two children so it is a full tree.
Example 2:

Input:
          1
       /    \
      2      3
    /   
   4     
Output: 0
Explanation: Node 2 has only one child
so this is not a full tree.
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function isFullTree() which takes the root node of the tree as input and returns True if the given Binary Tree is full. Else, it returns False. (The driver code will print 1 if the returned value is true, otherwise 0).

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Approach-> Brute Force.*/

bool isFullTree (struct Node* root)
{
        vector<int>v={};
  stack<Node*>s;
  while(root || !s.empty())
  {
      if(root)
      {
          s.push( root);
          root=root->left;
      }else
      {
          root=s.top();
          s.pop();
          if(!root->left ^ !root->right)
          {
              break;
          }
          root=root->right;
      }
  }if(!root && s.empty())
  return 1;
  return 0;
}

//Time Complexity: O(N).