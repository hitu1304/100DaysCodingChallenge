/*plateform-> GeeksForGeeks (practice Easy)

    language used->cpp.
    
    Problem Statement->
    
    
    Given a matrix(2D array) M of size N*N consisting of 0s and 1s only. The task is to find the column with maximum number of 0s.

Example:

Input:
N = 3
M[][] = {{1, 1, 0},
         {1, 1, 0},
         {1, 1, 0}}
Output:
2
Explanation:
2nd column (0-based indexing) is having 
3 zeros which is maximum among all columns.
 

Your Task:
Your task is to complete the function columnWithMaxZero() which should return the column number with maximum number of zeros. If more than one column exists, print the one which comes first.

Constraints:
1 <= N <= 102
0 <= A[i][j] <= 1

Approach-> Calculate the sum of every column and store it into vector and print the index of min_element.*/


class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code hereor
        int i,j,s=0,l=0;
        int v[N]={0};
        for(i=0;i<N;i++)
        {s=0;
            for(j=0;j<N;j++)
            {
                s+=arr[j][i];
            }v[l++]=s;
        }
         int k= min_element(v,v+N)-v;
        
         return k;
        
    }
};

//Time Complexity-> O(n^2)

