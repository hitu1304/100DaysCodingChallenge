/*plateform-> GeeksForGeeks (practice Basic)

Topic -> Binary Search Tree.

language used->cpp.
    
Problem Statement->

Given a Binary Search Tree. The task is to find the minimum element in this given BST.

Example 1:

Input:
           5
         /    \
        4      6
       /        \
      3          7
     /
    1
Output: 1
Example 2:

Input:
             9
              \
               10
                \
                 11
Output: 9
Your Task:
The task is to complete the function minValue() which takes root as the argument and returns the minimum element of BST. If the tree is empty, there is no minimum elemnt, so retutn -1 in that case.

Expected Time Complexity: O(Height of the BST)
Expected Auxiliary Space: O(Height of the BST).

Constraints:
1 <= N <= 104

Approach-> Keep going to the left child of tree untill it become NULL.*/

int minValue(Node* root)
{
    // Code here
    Node *p=root;
    int min=p->data;
    while(p)
    {
        if(p->data<min)
        {
            min=p->data;
        }p=p->left;
    }return min;
}

//Time Complexity: O(log N).
