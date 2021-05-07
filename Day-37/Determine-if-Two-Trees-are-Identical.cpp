/*plateform-> GeeksForGeeks (practice Easy)

Topic ->  Tree.

language used->cpp.
    
Problem Statement->

Given two binary trees, the task is to find if both of them are identical or not. 


Example 2:

Input:
     1          1
   /   \      /   \
  2     3    2     3
Output: Yes
Explanation: There are two trees both
having 3 nodes and 2 edges, both trees
are identical having the root as 1,
left child of 1 is 2 and right child
of 1 is 3.
Example 2:

Input:
    1       1
  /  \     /  \
 2    3   3    2
Output: No
Explanation: There are two trees both
having 3 nodes and 2 edges, but both
trees are not identical.

Your task:
Since this is a functional problem you don't have to worry about input, you just have to complete the function isIdentical() that takes two roots as parameters and returns true or false. The printing is done by the driver code.


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).


Constraints:
1 <= Number of nodes <= 105
1 <=Data of a node <= 105

Approach-> Trees are identiccal when they have equal no of nodes and same structure and the nodes must contain same data.*/

bool isIdentical(Node *r1, Node *r2)
    {
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

//Time Complexity: O(N).