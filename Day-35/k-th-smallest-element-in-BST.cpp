/*plateform-> GeeksForGeeks (practice Medium)

Topic -> Binary Search Tree.

language used->cpp.
    
Problem Statement->

Given a BST and an integer K. Find the Kth Smallest element in the BST. 

Example 1:

Input:
      2
    /   \
   1     3
K = 2
Output: 2
Example 2:

Input:
        2
      /  \
     1    3
K = 5
Output: -1
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function KthSmallestElement() which takes the root of the BST and integer K as inputs and return the Kth smallest element in the BST, if no such element exists return -1.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1<=Number of nodes<=100000

Approach-> Collect all the element in a vector sort it and print the desired value.*/

int KthSmallestElement(Node *root, int K)
    {
        //add code here.
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
  }sort(v.begin(),v.end());
  if(K<=v.size())
  return v[K-1];
  return -1;
    }

//Time Complexity: O(N).
