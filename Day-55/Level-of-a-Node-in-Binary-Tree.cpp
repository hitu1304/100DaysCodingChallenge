/*do level order traversal where target are match print thr level.*/

int getLevel(struct Node *node, int target)
    {
    Node * p;
    int c=1;
    queue<Node *>q;
    q.push(node);
    while(!q.empty())
    {
        int s=q.size();
        while(s--)
        {
        p=q.front();
        q.pop();
       if(p->data==target)
        return c;
        
            if(p->left)q.push(p->left);
            if(p->right)q.push(p->right);
        }c++;
     }return 0;
    }

//Time Complexity: O(N).