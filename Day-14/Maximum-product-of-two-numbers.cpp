/*plateform-> GeeksForGeeks (practice Basic)

    language used->cpp.
    
    Problem Statement->
    
    Given an array Arr of size N with all elements greater than or equal to zero. Return the maximum product of two numbers possible.

Example 1:

Input: 
N = 6
Arr[] = {1, 4, 3, 6, 7, 0}  
Output: 42
Example 2:

Input: 
N = 5
Arr = {1, 100, 42, 4, 23}
Output: 4200
Your Task:  
You don't need to read input or print anything. Your task is to complete the function maxProduct() which takes the array of integers arr[] and n as parameters and returns an integer denoting the answer.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
2 ≤ N ≤ 107
0 ≤ Arr[i] ≤ 104

Approach-> Sort the array and return the multipication of last two element*/


class Solution{
public:

	int maxProduct(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	    return arr[n-2]*arr[n-1];
	}
};

//Time Complexity-> O(N)