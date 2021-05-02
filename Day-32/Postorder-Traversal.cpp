/*plateform-> GeeksforGeeks

    Topic->Tree (Basic)
    
    language used->cpp.
    
    Problem Statement->

Given a binary tree, find the Postorder Traversal of it.
For Example, the postorder traversal of the following tree is:
5 10 39 1

        1
     /     \
   10     39
  /
5


Example 1:

Input:
        19
     /     \
    10      8
  /    \
 11    13
Output: 11 13 10 8 19
Example 2:

Input:
          11
         /
       15
      /
     7
Output: 7 15 11

Your Task:
You don't need to read input or print anything. Your task is to complete the function postOrder() that takes root node as input and returns an array containing the postorder traversal of the given Binary Tree.


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).


Constraints:
1 <= Number of nodes <= 105
1 <= Data of a node <= 106

Approach-> Recursive traversal.*/

void p(Node* root, vector<int>&v)
{
    if(root)
    {
        p(root->left,v);
        p(root->right,v);
        v.push_back(root->data);
    }
}
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int>v={};
  p(root,v);
    return v;
  
}

//Time Complexity: O(N).