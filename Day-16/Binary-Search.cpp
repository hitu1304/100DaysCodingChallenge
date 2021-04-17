/*plateform-> GeeksForGeeks (practice Basic)

    language used->cpp.
    
    Problem Statement->


Given a sorted array of size N and an integer K, find the position at which K is present in the array using binary search.


Example 1:

Input:
N = 5
arr[] = {1 2 3 4 5} 
K = 4
Output: 3
Explanation: 4 appears at index 3.

Example 2:

Input:
N = 5
arr[] = {11 22 33 44 55} 
K = 445
Output: -1
Explanation: 445 is not present.

Your Task:  
You dont need to read input or print anything. Complete the function binarysearch() which takes arr[], N and K as input parameters and returns the index of K in the array. If K is not present in the array, return -1.


Expected Time Complexity: O(LogN)
Expected Auxiliary Space: O(LogN) if solving recursively and O(1) otherwise.


Constraints:
1 <= N <= 104
1 <= arr[i] <= 104

Approach-> Binary search algo*/


class Solution{
public:
    int binarysearch(int arr[], int n, int k){
        // code here
        
        long long int i=0,j=n-1,mid,c=0;
        while(i<=j)
        {
            mid=(i+j)/2;
            if(arr[mid]==k){
            return mid;
            }
            else if(arr[mid]>k)
            {
                j=mid-1;
            }else
            {
                i=mid+1;
            }
            
        }
        return-1;
    }
};


//Time Complexity-> O(LogN)

