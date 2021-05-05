/*plateform-> GeeksForGeeks (practice Easy)

Topic -> Binary Search Tree.

language used->cpp.
    
Problem Statement->

Given a Binary Search Tree of size N, find the Median of its Node values.

Example 1:

Input:
       6
     /   \
   3      8   
 /  \    /  \
1    4  7    9
Output: 6
Explanation: Inorder of Given BST will be:
1, 3, 4, 6, 7, 8, 9. So, here median will 6.

Example 2:

Input:
       6
     /   \
   3      8   
 /   \    /   
1    4   7   
Output: 5
Explanation:Inorder of Given BST will be:
1, 3, 4, 6, 7, 8. So, here median will
(4 + 6)/2 = 10/2 = 5.
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function findMedian() which takes the root of the Binary Search Tree as input and returns the Median of Node values in the given BST.
Median of the BST is:

If number of nodes are even: then median = (N/2 th node + (N/2)+1 th node)/2
If number of nodes are odd : then median = (N+1)/2th node.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).


Constraints:
1<=N<=1000

Approach-> Brute Force.*/

float findMedian(struct Node *root)
{
      //Code here
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
           v.push_back(root->data);
          root=root->right;
      }
  }int i;
  float ans;
  if(v.size()%2!=0)
  {
       i=(v.size()+1)/2;
       ans=v[i-1];
  }else
  {
      i=v.size()/2;
      ans=((float)v[i-1]+(float)v[i])/2;
  }
  return ans;
}

//Time Complexity: O(N).