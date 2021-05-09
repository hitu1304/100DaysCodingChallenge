/*plateform-> GeeksForGeeks (practice Easy)

Topic ->  Tree.

language used->cpp.
    
Problem Statement->

Given a Two Binary Trees, write a function that returns true if one is mirror of other, else returns false.
MirrorTree1            

Example 1:

Input:
T1:     1     T2:     1
      /   \         /   \
     2     3       3     2
Output: 1
Example 2:

Input:
T1:     10      T2:   10
       /  \          /  \
      20  30        20  30
     /  \          /  \
    40   60       40  60
Output: 0

Your Task:
You don't need to take input. Just complete the function areMirror() that takes root node of two tree as parameter and returns true, if one is the mirror of other else returns false. (The driver's code print 1 if the returned value is true, otherwise 0)
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
1 <= Number of nodes<= 10000
-1000 <= Data of a node<= 1000

Approach-> First invert one of the tree then travarse both the tree at same time and check for every node their data is equal or not*/

class Solution
{
    public:
    
    void m(Node *p)
    {
       if(p){ 
        m(p->left);
        m(p->right);
        swap((p->left),(p->right));
        
       }   
    }
    int areMirror(Node* a, Node* b) {
  
    Node *p=b;
    m(p);
    Node *r1=a;
    Node *r2=b;
    stack<Node*>s ;
         stack<Node*>s1;
  while(r1 || !s.empty() && r2 || !s1.empty() )
  {
      if(r1 && r2)
      {
          s.push( r1);
           s1.push( r2);
          r1=r1->left;
          r2=r2->left;
      }else
      {
          r1=s.top();
           r2=s1.top();
          s.pop();
           s1.pop();
           if(r1->data!=r2->data)
           {
              break;
           }
           r2=r2->right;
          r1=r1->right;
      }
  }if(!r1 && !r2)
  return 1;
  return 0;
   }
};

//Time Complexity: O(N).