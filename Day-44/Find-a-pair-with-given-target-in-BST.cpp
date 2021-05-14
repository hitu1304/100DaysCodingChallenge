/*Approach-> The inorder traversal of a BST gives us the keys in sorted order.*/

class Solution{
  public:
    void InOrder(Node *root,vector<int>&v)
    {
        if(root)
        {
            InOrder(root->left,v);
            v.push_back(root->data);
           InOrder(root->right,v);
       }
    }
    int isPairPresent(struct Node *root, int target)
    {
    vector<int>v={};
    InOrder(root,v);
    int i=0,j=v.size()-1,c=0;
    while(i<j)
       {
           if(v[i]+v[j]==target)
           {
              return 1;
           }else if(v[i]+v[j]>target)
           {
               j--;
           }else
           {
               i++;
           }
       }return 0;
    }
};

//Time Complexity: O(N).