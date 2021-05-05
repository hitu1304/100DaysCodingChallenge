/*plateform-> GeeksForGeeks (practice Easy)

Topic -> Binary Search Tree.

language used->cpp.
    
Problem Statement->

Given a Binary Search Tree, find the sum of all leaf nodes. BST has the following property (duplicate nodes are possible):

The left subtree of a node contains only nodes with keys less than the node’s key.
The right subtree of a node contains only nodes with keys greater than or equal to the node’s key.
Input:
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case consists of integer N, denoting the number of elements in the BST. The second line of each test case consists of N space-separated integers denoting the elements in the BST.

Output:
For each testcase, in a new line, print the sum of leaf nodes.

Your Task:
This is a function problem. You don't have to take any input. You are required to complete the function sumOfLeafNodes that takes root as parameter and returns the sum of leaf nodes. 

Constraints:
1 <= T <= 103     
1 <= N <= 105

Example:
Input:
2
6
67 34 82 12 45 78
1
45
Output:
135
45

Explanation:
In first test case, the BST for the given input will be-

               67

          /             \

   34                  82

  /    \                /

12   45         78

Hence, the required sum= 12 + 45 + 78 = 135

Approach-> Keep adding the data of Nodes whoose left and right child both are NULL.*/

int sumOfLeafNodes(Node *r ){
     /*Your code here */
     int x,y;
     if(r)
     {
         x=sumOfLeafNodes(r->left );
         y=sumOfLeafNodes(r->right);
         if(!r->left && !r->right)
         return x+y+r->data;
         else
         return x+y;
     }
}

//Time Complexity: O(log N).
