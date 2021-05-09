/*plateform-> GeeksForGeeks (practice Easy)

Topic ->  BST

language used->cpp.
    
Problem Statement->

Given a Binary Tree, convert it to Binary Search Tree in such a way that keeps the original structure of Binary Tree intact.
 

Example 1:

Input:
      1
    /   \
   2     3
Output: 1 2 3

Example 2:

Input:
          1
       /    \
     2       3
   /        
 4       
Output: 1 2 3 4
Explanation:
The converted BST will be

        3
      /   \
    2     4
  /
 1
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function binaryTreeToBST() which takes the root of the Binary tree as input and returns the root of the BST. The driver code will print inorder traversal of the converted BST.


Expected Time Complexity: O(NLogN).
Expected Auxiliary Space: O(N).


Constraints:
1 <= Number of nodes <= 1000

Approach-> Store all the elements of binary tree sort it in decending order now create a tree in way that its inorder traversal in going to be in sorted order(ascending).*/

void pre(Node *p,vector<int> &v)
    {
        
         if(p)
        {
            v.push_back(p->data);
            pre(p->left,v);
            pre(p->right,v);
        }
    }
    Node *binaryTreeToBST (Node *root)
    {
        vector<int>v={};
        pre(root,v);
        int i=0;
        sort(v.begin(),v.end(),greater<>());
        Node * t=new Node(v[i++]);
        Node *r=t;
        while(i<v.size())
        {
           if(t->data>v[i])
           {
                Node * q=new Node(v[i++]);
                t->left=q;
                t=q;
           }
       }
       return r;
 }

//Time Complexity: O(NLogN).
