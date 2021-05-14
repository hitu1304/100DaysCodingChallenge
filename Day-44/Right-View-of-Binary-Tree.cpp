/*Approach-> print the last node every level*/

class Solution
{
    public:
    vector<int>v;
    //Function to return list containing elements of right view of binary tree.
   void rightViewUtil(struct Node *root, 
                   int level, int &max_level)
   {
    
    if (root == NULL) return;
    if (max_level < level)
    {
       v.push_back(root->data); 
        max_level = level;
    }
  
    
    rightViewUtil(root->right, level + 1, max_level);
    rightViewUtil(root->left, level + 1, max_level);
}
  
  vector<int> rightView(struct Node *root)
{
    int max_level = 0;
    rightViewUtil(root, 1, max_level);
    return v;
}
};

//Time Complexity: O(N).