//Do level order traversal but first call right child then left child after that reverse the whole traversal.*/

vector<int> reverseLevelOrder(Node *root)
{
   Node *p=root;
      vector<int>v={};
      queue<Node*>q;
      q.push(p);
      while(!q.empty())
      {
          p=q.front();
          q.pop();
          v.push_back(p->data);
          if(p->right)
          q.push(p->right);
            if(p->left)
           q.push(p->left);
      }reverse(v.begin(),v.end());
    return v;
}

//Time Complexity: O(N).