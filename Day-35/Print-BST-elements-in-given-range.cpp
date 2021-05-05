/*plateform-> GeeksForGeeks (practice Easy)

Topic -> Binary Search Tree.

language used->cpp.
    
Problem Statement->


Given a Binary Search Tree and a range. Find all the numbers in the BST that lie in the given range.
Note: Element greater than or equal to root go to the right side.

 

Example 1:

Input:
       17
     /    \
    4     18
  /   \
 2     9 
l = 4, h = 24
Output: 4 9 17 18 
Example 2:

Input:
       16
     /    \
    7     20
  /   \
 1    10
l = 13, h = 23
Output: 16 20 
Your Task:
You don't need to read input or print anything. Your task is to complete the function printNearNodes() which takes the root Node of the BST and the range elements low and high as inputs and returns an array that contains the BST elements in the given range low to high (inclusive) in non-decreasing order.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the BST).

Constraints:
1 <= Number of nodes <= 104
1 <= l < h < 105

Approach-> Apply any of the traversal and only store the elements lies in the given range.*/

void p(Node *root,vector<int>&v,int low,int high)

{
    stack<Node* >s;
    while(root || !s.empty()){
    if(root)
    {
       if( root->data>=low &&root->data<=high ){
        v.push_back(root->data);}
        s.push(root);
        root=root->left;
   }else
   {
       root=s.top();
       s.pop();
       root=root->right;
   }
    }
    
}
vector<int> printNearNodes(Node *root, int low, int high)
{
  // your code goes here 
  vector<int> v={};
  p(root,v,low,high);
  sort(v.begin(),v.end());
  return v;
}

//Time Complexity: O(N).