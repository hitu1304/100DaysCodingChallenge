/*Approach-> use two stack for reverse printing the alternative level.*/

void s(Node *root,vector<int>&v)
{
    if(!root)return;
   stack<Node*>s1;
   stack<Node*>s2;
   
   s1.push(root);
   while(!s1.empty() || !s2.empty())
   {
       
       while(!s1.empty())
       {
           Node*p=s1.top();
           v.push_back(p->data);
           s1.pop();
           
           if(p->left)
           s2.push(p->left);
           if(p->right)
           s2.push(p->right);
        }
        while(!s2.empty())
       {
           Node*p=s2.top();
           v.push_back(p->data);
           s2.pop();
           
           if(p->right)
           s1.push(p->right);
           if(p->left)
           s1.push(p->left);
        }
   } 
   
}
vector <int> zigZagTraversal(Node* root)
{
	vector<int>v={};
	s(root,v);
	return v;
}

// Time Complexity: O(N).