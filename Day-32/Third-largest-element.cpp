/*plateform-> GeeksforGeeks

  language used->cpp.
    
    Problem Statement->
    
Given an array of distinct elements. Find the third largest element in it. 

Example 1:

Input:
N = 5
A[] = {2,4,1,3,5}
Output: 3
Example 2:

Input:
N = 2
A[] = {10,2}
Output: -1
Your Task:
Complete the function thirdLargest() which takes the array a[] and the size of the array, n, as input parameters and returns the third largest element in the array. It return -1 if there are less than 3 elements in the given array.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 105
1 ≤ A[i] ≤ 105

Approach-> Sort the array and print the third last element.*/

int thirdLargest(int a[], int n)
    {
         //Your code here
         sort(a,a+n);
         if(n>2)
         return a[n-3];
         return -1;
    }

//Time Complexity-> O(n).