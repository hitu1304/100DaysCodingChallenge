/*plateform-> GeeksForGeeks (practice Easy)

Topic -> Binary Search Tree.

language used->cpp.
    
Problem Statement->

Given a Binary search tree. Your task is to complete the function which will return the Kth largest element without doing any modification in Binary Search Tree.


Example 1:

Input:
      4
    /   \
   2     9
k = 2 
Output: 4

Example 2:

Input:
       9
        \ 
          10
K = 1
Output: 10

Your Task:
You don't need to read input or print anything. Your task is to complete the function kthLargest() which takes the root of the BST and an integer K as inputs and returns the Kth largest element in the given BST.


Expected Time Complexity: O(H + K).
Expected Auxiliary Space: O(H)


Constraints:
1 <= N <= 1000
1 <= K <= N

Approach-> The idea is to do reverse inorder traversal of BST. The reverse inorder traversal traverses all nodes in decreasing order. While doing the traversal, we keep track of count of nodes visited so far. When the count becomes equal to k, we stop the traversal and print the key.*/

void kl(Node *root,int &c ,int &K,int &ans)
    {
        Node *p=root;
        if(!root || c>=K)
        return;
        kl(p->right,c,K,ans);
        c++;
        if(c==K)
        {
            ans=p->data;
        }
        kl(p->left,c,K,ans);
        
    }
    int kthLargest(Node *root, int K)
    {
        //Your code  
        int c=0,ans;
        kl(root,c,K,ans);
        return ans;
    }

//Time Complexity: O(H + K).