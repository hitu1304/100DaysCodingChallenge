//Use kadane algorithm

int maxStep(int A[], int N)
    {
       //Your code here
       vector<int>v={};
       int i,c=0,l=0;
       for(i=0;i<N;i++)
       {
           if(A[i]<A[i+1] && i!=N-1)
           {
               c++;
               
           }else
           
           {
               if(c>l)
               l=c;
               c=0;
           }
           
       }return l;
    }

//Time Complexity: O(N).