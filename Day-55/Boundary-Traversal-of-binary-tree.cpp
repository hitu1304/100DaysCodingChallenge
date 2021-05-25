/* 1. Print the left boundary in a top-down manner.
2. Print all leaf nodes from left to right, which can again be sub-divided into two sub-parts:
…..2.1 Print all leaf nodes of left sub-tree from left to right.
…..2.2 Print all leaf nodes of a right subtree from left to right.
3. Print the right boundary in a bottom-up manner.*/

class Solution {
public:
vector<int>v;
void left(Node *p)
{
    if(!p)return ;
    if(p->left)
    {
        v.push_back(p->data);
        left(p->left);
    }else if(p->right)
    {
        v.push_back(p->data);
        left(p->right);
    }
}
void leaf(Node *p)
{
    if (p)
    { 
        leaf(p->left);
        if(!p->right and !p->left)v.push_back(p->data);
        leaf(p->right);
    }
}

void right(Node *p)
{
    if(!p)return ;
    if(p->right)
    {
       right(p->right);
         v.push_back(p->data);
    }else if(p->left)
    {
       right(p->left);
        v.push_back(p->data);
    }
    
}

    vector <int> printBoundary(Node *root)
    {
        v.push_back(root->data);
        left(root->left);
        leaf(root);
        right(root->right);
        return v;
    }
};

//Time Complexity: O(N). 