/*plateform-> GeeksforGeeks

    Topic->Sorting (Easy)
    
    language used->cpp.
    
    Problem Statement->
    
Union of two arrays can be defined as the common and distinct elements in the two arrays.
Given two sorted arrays of size n and m respectively, find their union.


Example 1:

Input: 
n = 5, arr1[] = {1, 2, 3, 4, 5}  
m = 3, arr2 [] = {1, 2, 3}
Output: 1 2 3 4 5
Explanation: Distinct elements including 
both the arrays are: 1 2 3 4 5.
 

Example 2:

Input: 
n = 5, arr1[] = {2, 2, 3, 4, 5}  
m = 5, arr2[] = {1, 1, 2, 3, 4}
Output: 1 2 3 4 5
Explanation: Distinct elements including 
both the arrays are: 1 2 3 4 5.
 

Example 3:

Input:
n = 5, arr1[] = {1, 1, 1, 1, 1}
m = 5, arr2[] = {2, 2, 2, 2, 2}
Output: 1 2
Explanation: Distinct elements including 
both the arrays are: 1 2.

Your Task: 
You do not need to read input or print anything. Complete the function findUnion() that takes two arrays arr1[], arr2[], and their size n and m as input parameters and returns a list containing the union of the two arrays. 
 

Expected Time Complexity: O(n+m).
Expected Auxiliary Space: O(n+m).
 

Constraints:
1 <= n, m <= 105
1 <= arr[i], brr[i] <= 106


Approach-> Firstly merge both the list and now delete the duplicate elements of the resultant lists.*/

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        int i=0,j=0,k=0;
        
        int c[m+n];
        merge(arr1,(arr1+n),arr2,(arr2+m),c);
       set<int >s;
       for(int i=0;i<m+n;i++)
       {
           s.insert(c[i]);
       }vector<int>v(s.begin(),s.end());
       return v;
    }

//Time Complexity: O(n+m).
    
    