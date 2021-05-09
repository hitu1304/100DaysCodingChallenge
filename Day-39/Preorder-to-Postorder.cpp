/*plateform-> GeeksForGeeks (practice Medium)

Topic ->  BST

language used->cpp.
    
Problem Statement->

Given an array arr[] of N nodes representing preorder traversal of BST. The task is to print its postorder traversal.

Example 1:

Input:
N = 5
arr[]  = {40,30,35,80,100}
Output: 35 30 100 80 40
Explanation: PreOrder: 40 30 35 80 100
InOrder: 30 35 40 80 100
Therefore, the BST will be:
              40
           /      \
         30       80
           \        \   
           35      100
Hence, the postOrder traversal will
be: 35 30 100 80 40
Example 2:

Input:
N = 8
arr[]  = {40,30,32,35,80,90,100,120}
Output: 35 32 30 120 100 90 80 40
Your Task:
You need to complete the given function and return the root of the tree. The driver code will then use this root to print the post order traversal.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Approach-> First create a tree using preorder traversal and return the root of the function.*/

Node* constructTree(int pre[], int size)
{
    int i=0;
    stack<Node*>s;
    Node *p,*t,*root;
    root=newNode(pre[i++]);
    p=root;
    while(i<size)
    {
        if(pre[i]<p->data)
        {
           
            t=newNode(pre[i++]);
            s.push(p);
            p->left=t;
            p=t;
        }
        else
        {
            if(pre[i]>p->data && pre[i]<(s.empty() ? 32767 : s.top()->data))
            {
                t=newNode(pre[i++]);
                p->right=t;
                p=t;
            }
           else
            {
                p=s.top();
                s.pop();
            }
         }
   } 
   return root;
 }

//Time Complexity: O(N).