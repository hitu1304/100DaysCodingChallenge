/*Recursively call for left and right subtrees and change the value of current node as sum of the values returned by the recursive calls.*/

class Solution {
  public:
  
    int sum(Node *p)
    {
       if(!p)return 0;
       int x=sum(p->left);
       int y=sum(p->right);
       int z=p->data;
       p->data=x+y;
       return x+y+z;
     }
    void toSumTree(Node *node)
    {
       sum(node);
    }
};

//Time Complexity: O(N).
