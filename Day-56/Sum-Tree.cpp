/* Approach -> Recursively call for left and right subtrees and change the value of current node as sum of the values returned by the recursive calls.*/


class Solution
{
    public:
    
   int sum(Node *p)
    {
       if(!p)return 0;
       
       int x=sum(p->left);
       int y=sum(p->right);
      int z=p->data; 
       
       return x+y+z;
     }
    bool isSumTree(Node* root)
    {
         stack<Node*>s;
  while(root || !s.empty())
  {
      if(root)
      {
          if(root->left || root->right){
          int t1=sum(root->left);
          int t2=sum(root->right);
         if(root->data!=(t1+t2))return 0;}
          s.push( root);
          root=root->left;
      }else
      {
          root=s.top();
          s.pop();
          
          root=root->right;
      }
  }
         
         return 1;
         
    }
};

//Time Complexity: O(N).
