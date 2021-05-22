/*Approach-> Store inorder traversal of tree and create a CDLL.*/

class Solution
{
  public:
    //Function to convert binary tree into circular doubly linked list.
    void in(Node *p,vector<int>&v)
    {
        if(p)
        {
            in(p->left,v);
            v.push_back(p->data);
            in(p->right,v);
        }
    }
    Node *bTreeToCList(Node *root)
    {
            vector<int>v={};
            in(root,v);
            int i=0;
            Node *t=newNode(v[0]);
            Node *head=t,*p,*q;
            for(i=1;i<v.size();i++)
            {
                q=newNode(v[i]);
                q->left=t;
                t->right=q;
                t=q;
            }t->right=head;
            head->left=t;
            return head;
            
    }
};

// Time complexity: O(N).