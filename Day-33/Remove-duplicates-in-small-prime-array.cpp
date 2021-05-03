/*plateform-> GeeksforGeeks

  language used->cpp.
    
    Problem Statement->
    
Given an array consisting of only prime numbers, remove all duplicate numbers from it. 
Note: Retain the first occurrence of the duplicate element.

Example 1:

Input:
N = 6
A[] = {2,2,3,3,7,5}
Output: 2 3 7 5
Explanation: After removing the duplicate
2 and 3 we get 2 3 7 5.
Your Task:
Complete the function removeDuplicate() that takes given array and N as input parameters and returns modified array which has no duplicates.

Note: In case of cpp the return type is vector

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1<=N=1000
2<=A[i]<100

Approach-> Use hash table to store the occurence of element and print the first occurence of every element.*/

 vector<int> removeDuplicate(vector<int>& arr, int n)
    {
        // code here
        int i;
        vector<int>v={};
       vector<int>h(100);
        
        for(i=0;i<arr.size();i++)
        {
            h[arr[i]]++;
            if(h[arr[i]]==1)
            {
                v.push_back(arr[i]);
            }
        }
        return v;
    }

 //Time Complexity: O(N).