class Solution
{
    public:
    queue<pair<Node*,int>>q;
        map<int ,int>m;
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    void top(Node *p)
    {
        
        if(!p)return;
        q.push({p,0});
        while(!q.empty())
        {
            Node *t=q.front().first;
            int h=q.front().second;
            q.pop();
            if(!m[h])m[h]=t->data;
            if(t->left)q.push({t->left,h-1});
            if(t->right)q.push({t->right,h+1});
        }
        
        
    }
    vector<int> topView(Node *root)
    {
        
       top(root);
       vector<int>v={};
       for(auto x:m)
       v.push_back(x.second);
       
       return v;
        
        
    }

};

// Time Complexity: O(N).