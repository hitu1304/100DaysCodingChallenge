//First collect all leaf node in vector annd create a DLL anddelete all the leaf nodes.

void in(Node *p,vector<int>&v)
    {
        if(p)
        {
            in(p->left,v);
           if(!p->left&& !p->right) v.push_back(p->data);
            in(p->right,v);
        }
    }
    
Node* del(Node *p)
    {
        if(!p)
        return NULL;
        if(!p->left&& !p->right){
        free(p);
        return NULL;
        }
        p->left=del(p->left);
         p->right=del(p->right);
         return p;
    }
Node * convertToDLL(Node *root){
    
    Node *q=NULL;
    vector<int>v={};
    in(root,v);
    del(root);
    int i=0;
            Node *t=new Node(v[i]);
           
            Node *head=t,*p;
            for(i=1;i<v.size();i++)
            {
                q=new Node(v[i]);
                
                q->left=t;
                t->right=q;
                t=q;
            }
            return head;
}

//Time Complexity: O(N).