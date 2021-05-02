/*plateform-> GeeksforGeeks

  language used->cpp.
    
    Problem Statement->
    
Given an array arr[] of size N of positive integers which may have duplicates. The task is to find the maximum and second maximum from the array, and both of them should be distinct, so If no second max exists, then the second max will be -1.

Example 1:

Input:
N = 3
arr[] = {2,1,2}
Output: 2 1
Explanation: From the given array 
elements, 2 is the largest and 1 
is the second largest.
Example 2:

Input:
N = 5
arr[] = {1,2,3,4,5}
Output: 5 4
Explanation: From the given array 
elements, 5 is the largest and 4 
is the second largest.
Your Task:
The task is to complete the function largestAndSecondLargest(), which should return maximum and second maximum element from the array with first element as maximum element and second element as second maximum(if there is no second maximum the  second element should be -1)

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 106
1 <= arr[i] <= 106

Approach-> Take the array in set it gives all distinct element in sorted order.Now print the desired element accordingly.*/

vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
       int i;
         set<int>s;
         for(i=0;i< sizeOfArray;i++)
         {
             s.insert(arr[i]);
         }
         vector<int>v(s.begin(),s.end());
          vector<int>v1={};
         
          v1.push_back(v[v.size()-1]);
           if(v.size()<2){
               v1.push_back(-1);
           }
           else{
          v1.push_back(v[v.size()-2]);}
          return v1;
    }

//Time Complexity: O(N).