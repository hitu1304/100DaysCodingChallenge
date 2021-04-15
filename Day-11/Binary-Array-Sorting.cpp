/*plateform-> GeeksForGeeks (practice basic)

    language used->cpp.
    
    Problem Statement->
    
    Given a binary array A[] of size N. The task is to arrange the array in increasing order.

Note: The binary array contains only 0  and 1.

Example 1:

Input:
N = 5
A[] = {1,0,1,1,0}
Output: 0 0 1 1 1
Example 2:

Input:
N = 10
A[] = {1,0,1,1,1,1,1,0,0,0}
Output: 0 0 0 0 1 1 1 1 1 1
Your Task:
Complete the function SortBinaryArray() which takes given array as input and returns the sorted array. 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Challenge: Try doing it in one pass.

Constraints:
1 <= N <= 106
0 <= A[i] <= 1

Approach-> count the the of zero and push back 1 after that count till n.*/


class Solution{
    public:
    vector<int> SortBinaryArray(vector<int> binArray)
    {
        // Your code goes here 
        vector<int> a(binArray.size());
       int i=0,j=binArray.size(),c=0,c1=0;
       
       for(i=0;i<j;i++)
       {
           if(binArray[i]==0){
           c++;}
          
       }
       for(i=c;i<j;i++)
       {
           a[i]=1;
       }
      
       return a;
    }
};

//Time Complexity-> O(n)
