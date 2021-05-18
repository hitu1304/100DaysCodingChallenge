/*Approach-> store the inorder traversal of both the tree and find the pair.*/

void in(Node * p,vector<int> &v)
{
    if(p)
    {
        in(p->left,v);
        v.push_back(p->data);
        in(p->right,v);
    }
}

int countPairs(Node* root1, Node* root2, int x)
{
    vector<int>v1={};
     vector<int>v2={};
     in(root1,v1);
     in(root2,v2);
     int i=0,j=v2.size()-1,c=0;
     
     while(i<v1.size()&&j>=0)
     {
         
         if(v1[i]+v2[j]==x)
         {
             c++;
             i++;j--;
         }else if(v1[i]+v2[j]>x)
         {
             j--;
         }else
         {
             i++;
         }
      }
     
     return c;
  }

//Time Complexity: O(N).