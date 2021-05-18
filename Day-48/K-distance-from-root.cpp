//Approach-> recursion.

void K(Node *root,int k,vector<int>&v)
{
    if(!root)
    return ;
   
    if(k==0)
  
      v.push_back(root->data);
      K(root->left,k-1,v);
        K(root->right,k-1,v);
  
}
vector<int> Kdistance(struct Node *root, int k)
{
    vector<int>v={};
  
  K(root,k,v);
  
     return v; 
      
  
}

//Time Complexity: O(N).

