/*The 1st node of the preorder is always the root node of the tree and we can divide the tree into left-subtree and right-subtree part using the root node in the inorder array.*/

class Solution{
    public:
    int idx=0;
    unordered_map<int ,int>m;
    
    Node * tree(int in[],int pre[],int l,int h)
    {
        
        if(l>h)return NULL;
        Node * ans=new Node(pre[idx++]);
        if(l==h)return ans;
        int mid=m[ans->data];
        ans->left=tree(in,pre,l,mid-1);
        ans->right=tree(in,pre,mid+1,h);
        return ans;
        
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        
       for(int i=0;i<n;i++)
       m[in[i]]=i;
       Node *root=tree(in,pre,0,n-1);
       return root;
    }
};

//Time Complexity: O(N).