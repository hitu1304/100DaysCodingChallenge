/*Approach-> print the first node every level*/

 void leftViewUtil( Node *root, 
                int level, int &max_level,vector<int>&v)
   {
    if (root == NULL) return;
    if (max_level < level)
    {
       v.push_back(root->data); 
        max_level = level;
    }
    leftViewUtil(root->left, level + 1, max_level,v);
    leftViewUtil(root->right, level + 1, max_level,v);
}
  
  vector<int> leftView( Node *root)
{
    vector<int>v={};
    int max_level = 0;
    leftViewUtil(root, 1, max_level,v);
    return v;
}

//Time Complexity: O(N).