/*plateform-> GeeksForGeeks (practice Hard)

Topic ->  BST

language used->cpp.
    
Problem Statement->

Given two BSTs, return elements of both BSTs in sorted form.

Example 1:

Input:
BST1:
       5
     /   \
    3     6
   / \
  2   4  
BST2:
        2
      /   \
     1     3
            \
             7
            /
           6
Output: 1 2 2 3 3 4 5 6 6 7
Explanation: 
After merging and sorting the
two BST we get 1 2 2 3 3 4 5 6 6 7.
Example 2:

Input:
BST1:
       12
     /   
    9
   / \    
  6   11
    
BST2:
      8
    /  \
   5    10
  /
 2
Output: 2 5 6 8 9 10 11 12
Explanation: 
After merging and sorting the
two BST we get 2 5 6 8 9 10 11 12.
Your Task:
You don't need to read input or print anything. Your task is to complete the function merge() which takes roots of both the BSTs as its input and returns an array of integers denoting the node values of both the BSTs in a sorted order.

Expected Time Complexity: O(M+N) where M and N are the sizes if the two BSTs.
Expected Auxiliary Space: O(Height of BST1 + Height of BST2).

Constraints:
1 <= Number of Nodes <= 100000

Approach-> Store the elements of both tree in vector in inorder fashion .Now merge both the array.*/

void pre(Node *p,vector<int> &v)
    {
      if(p)
        {
            pre(p->left,v);
             v.push_back(p->data);
            pre(p->right,v);
        }
    }
   vector<int> merge(Node *root1, Node *root2)
    {
       vector<int>v1={};
       vector<int>v2={};
       vector<int>v3={};
       pre(root1,v1);
       pre(root2,v2);
      int i=0,j=0,k=0;
       
       while(i<v1.size() && j<v2.size())
       {
           if(v1[i]<v2[j])
           {
               v3.push_back(v1[i++]);
           }else if(v1[i]>v2[j])
           {
              v3.push_back(v2[j++]);
           }
           else
           {
               v3.push_back(v1[i++]);
              v3.push_back(v2[j++]);
           }
        }
       for(;i<v1.size();i++)
       {
           v3.push_back(v1[i]);
       }
       for(;j<v2.size();j++)
       {
           v3.push_back(v2[j]);
       }
         
         return v3;
   }

//Time Complexity: O(M+N) where M and N are the sizes if the two BSTs.