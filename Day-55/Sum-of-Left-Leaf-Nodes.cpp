/*The idea is to traverse the tree, starting from root. For every node, check if its left subtree is a leaf. If it is, then add it to the result.*/

void left (Node *p,long long int &s)
{
    if(!p)return;
    
   if(p->left){ if(!((p->left)->left) and !((p->left)->right))s+=p->left->data;}
    left(p->left,s);
    left(p->right,s);
}

int leftLeavesSum(Node *root)
{
    long long int s=0;
    left(root,s);
       return s;
       
}

//Time Complexity: O(N).