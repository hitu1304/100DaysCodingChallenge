/* Approach-> Using the two-pointer theorem, we can find out a pair with a given sum in an array in O(n) (start iterating one pointer from the beginning and other from the end). */

bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);int i;
        for(i=0;i<n;i++){
    int j=i+1,k=n-1,s=A[i];
        while(j<k)
        {
            if(A[j]+A[k]+s==X)
            {
                return 1;
            }else if(A[j]+A[k]+s>X)
            {
                k--;
            }else
            {
                j++;
            }
        }}return 0;
    }

//Time Complexity: O(n*n).