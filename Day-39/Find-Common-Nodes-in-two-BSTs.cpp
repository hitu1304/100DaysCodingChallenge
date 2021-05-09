/*plateform-> GeeksForGeeks (practice Easy)

Topic ->  BST

language used->cpp.
    
Problem Statement->

Given two Binary Search Trees. Find the nodes that are common in both of them, ie- find the intersection of the two BSTs.

Example 1:

Input:
BST1:
                  5
               /     \
             1        10
           /   \      /
          0     4    7
                      \
                       9
BST2:
                10 
              /    \
             7     20
           /   \ 
          4     9
Output: 4 7 9 10

Example 2:

Input:
BST1:
     10
    /  \
   2   11
  /  \
 1   3
BST2:
       2
     /  \
    1    3
Output: 1 2 3
Your Task:
You don't need to read input or print anything. Your task is to complete the function findCommon() that takes roots of the two BSTs as input parameters and returns a list of integers containing the common nodes in sorted order. 

Expected Time Complexity: O(N1 + N2) where N1 and N2 are the sizes of the 2 BSTs.
Expected Auxiliary Space: O(H1 + H2) where H1 and H2 are the heights of the 2 BSTs.

Constraints:
1 <= Number of Nodes <= 105

Approach-> Store the inorder traversal of both the tree in vector Now find the common element of both the vector.*/

void pre(Node *p,vector<int> &v)
    {
      if(p)
        {
            pre(p->left,v);
             v.push_back(p->data);
            pre(p->right,v);
        }
    }
    vector <int> findCommon(Node *root1, Node *root2)
    {
     vector<int>v1={};
       vector<int>v2={};
       vector<int>v4={};
       
       
       pre(root1,v1);
       pre(root2,v2);
       int x=*max_element(v1.begin(),v1.end());
       int y=*max_element(v2.begin(),v2.end());
        int m=max(x,y);
     vector<int>v3(m+1);
     
     int i;
     for(i=0;i<v1.size();i++)
     {
         v3[v1[i]]++;
     }
     for(i=0;i<v2.size();i++)
     {
         v3[v2[i]]++;
     }
     for(i=0;i<=m;i++)
     {
         if(v3[i]>1)
         {
             v4.push_back(i);
         }
         
     }
     
     return v4;
     
    }

//Time Complexity: O(N1 + N2) where N1 and N2 are the sizes of the 2 BSTs.

