/*Approach-> Sort the array now take 2 pointers i is from 0 another j is from M-1.Now traverse through the array and check Loop while i < N && j>=0.
If (A[i] + B[j] == sum) then push the elements
Else if( A[i] + B[j] < sum ) then i++
Else j--.*/


vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
       vector<pair<int,int>>v;
       sort(A,A+N);
       sort(B,B+M);
       int i=0,j=M-1;
       while(i<N && j>=0)
       {
           if(A[i]+B[j]==X)
           {
               v.push_back({A[i],B[j]});
               i++;j--;
           }else if(A[i]+B[j]>X)
           {
               j--;
           }else
           {
               i++;
           }
       }return v;
    
    