//Us cncept of height of tree

class Solution
{
    public:
    //Function to return the diameter of a Binary Tree.
   int ma=INT_MIN;
    int dia(Node*p)
    {
        if(!p)return 0;
        int x=dia(p->left);
        int y=dia(p->right);
        ma=max(ma,(x+y+1));
        return max(x,y)+1;
        
    }
    int diameter(Node* root)
    {
    dia(root);
    return ma;
    }

};

//Time Complexity: O(N).
