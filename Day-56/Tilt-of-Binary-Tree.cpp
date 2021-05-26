/* Approach -> Recursively call for left and right subtrees and change the value of current node as sum of the values returned by the recursive calls.*/

class Solution
{
public:
    // Your are required to complete this function
    // function should return the tilt of the tree
    int sum(Node *p)
    {
       if(!p)return 0;
       int x=sum(p->left);
       int y=sum(p->right);
       int z=p->data;
     
       return x+y+z;
     }
    int tiltTree(Node *root)
    {
       int s=0;
       stack<Node*>st;
       while(!st.empty() || root)
       {
           if(root)
           {
               int t1=sum(root->left);
               int t2=sum(root->right);
               s+=abs(t1-t2);
               st.push(root);
               root=root->left;
           }else
           {
           root=st.top();
           st.pop();
           root=root->right;
          }
       }return s;
    }
};

//Time Complexity: O(N).