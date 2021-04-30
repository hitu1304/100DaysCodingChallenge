/*plateform-> GeeksforGeeks

    Topic->Array (Easy)
    
    language used->cpp.
    
    Problem Statement->
    
Given a sorted array of size N. Count the number of distinct absolute values present in the array.
 

Example 1:

Input:
N = 6
Arr[] = {-3, -2, 0, 3, 4, 5}
Output: 5
Explanation: There are 5 distinct absolute 
values i.e. 0, 2, 3, 4 and 5.

Example 2:

Input:
N = 9
Arr[] = {-1, -1, -1, -1, 0, 1, 1, 1, 1}
Output: 2
Explanation: There are 2 distinct absolute values 
among the elements of this array, i.e. 0 and 1.

Your Task:
You don't need to read input or print anything. Your task is to complete the function distinctCount() which takes the array of integers arr[] and its size n as input parameters and returns an integer denoting the answer.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 <= N <= 105
-108 <= Arr[i] <= 108
The array may contain duplicates

Approach-> Take the modulus of the given array take it into the set it will give you all distinct element.*/

class Solution{   
public:
    int distinctCount(int arr[], int n) {
        // code here
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            arr[i]=-arr[i];
            
        }set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(arr[i]);
        }return s.size();
        }
};

//Time Complexity: O(N).
