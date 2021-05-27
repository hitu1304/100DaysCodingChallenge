//Use level order traversal.

vector<vector<int>> levelOrder(Node* node)
{
    vector<vector<int>>v1;
  vector<int>v={};
  queue<Node*>q;
  Node *p=node;
  q.push(p);
        while(!q.empty())
        {
            int s=q.size();
            while(s--)
            {
                p=q.front();
                q.pop();
                v.push_back(p->data);
                if(p->left)q.push(p->left);
                if(p->right)q.push(p->right);
            }v1.push_back(v);
            v.clear();
        }return v1;
}

//Time Complexity: O(N).