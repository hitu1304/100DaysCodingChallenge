/*Approach-> Store inorder traversal of tree and create a CDLL.*/

class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    void in(Node *p,vector<int>&v)
    {
        if(p)
        {
            in(p->left,v);
            v.push_back(p->data);
            in(p->right,v);
        }
    }
    Node * bToDLL(Node *root)
    {
        vector<int>v={};
            in(root,v);
            int i=0;
            Node *t=new Node;
            t->data=v[i];
            t->left=t->right=NULL;
            Node *head=t,*p,*q;
            for(i=1;i<v.size();i++)
            {
                q=new Node;
                q->data=v[i];
                q->left=q->right=NULL;
                q->left=t;
                t->right=q;
                t=q;
            }
            return head;
    }
};

///Time Complexity: O(N).