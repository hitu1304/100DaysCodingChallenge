/*The idea is to traverse the tree, starting from root. For every node, check if its right subtree is a leaf. If it is, then add it to the result.*/

class Solution{
    public:
    void right(Node *p,long long int &s)
{
    if(!p)return;
    
   if(p->right){ if(!((p->right)->left) and !((p->right)->right))s+=p->right->data;}
    right(p->left,s);
    right(p->right,s);
}
    int rightLeafSum(Node* root)
    {
         long long int s=0;
    right(root,s);
       return s;
    }
};

//Time Complexity: O(N).
