/*Approach-> use queue for traversaal*/

vector<int> diagonal(Node *root)
{
   Node*p=root,*r;
   vector<int>v={};
   queue<Node*>q;
   q.push(p);
   while(!q.empty())
   {
       r=q.front();
       q.pop();
       while(r)
       {
           if(r->left)q.push(r->left);
           v.push_back(r->data);
           r=r->right;
       }
   }return v;
}

//Time Complexity: O(N).