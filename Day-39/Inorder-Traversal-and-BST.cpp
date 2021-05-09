/*plateform-> GeeksForGeeks (practice Easy)

Topic ->  BST

language used->cpp.
    
Problem Statement->

Given an array arr of size N, write a program that returns 1 if array represents Inorder traversal of a BST, else returns 0.
Note: All keys in BST must be unique.


Example 1:

Input:
N = 3
arr = {2, 4, 5}
Output: 1
Explaination: Given arr representing
inorder traversal of a BST.

Example 2:

Input:
N = 3
arr = {2, 4, 1}
Output: 0
Explaination: Given arr is not representing
inorder traversal of a BST.

Your Task:
You don't need to read input or print anything. Your task is to complete the function isRepresentingBST() which takes the array arr[] and its size N as input parameters and returns 1 if array represents Inorder traversal of a BST, else returns 0.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 103
1 ≤ arr[i] ≤ 103

Approach-> check if aaray is sorted and contains distint element or not.*/

int isRepresentingBST(int arr[], int N)
    {
        set<int>s(arr,arr+N);
        if(is_sorted(arr,arr+N) && s.size()==N)
        return 1;
        return 0;
   }

// Time Complexity: O(N).