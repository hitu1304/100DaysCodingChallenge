//use hash

int findLongestConseqSubseq(int arr[], int N)
    {
     int m=*max_element(arr,arr+N);
     int h[m+1]={0};
     for(int i=0;i<N;i++)h[arr[i]]++;
     
     int l=0,ans=0;
     for(int i=1;i<=m;)
     {
         if(h[i]>0)
         {
             i++;
         }
         ans= max(ans,(i-l-1));
         if(h[i]==0)
         {
             
              l=i;
             i++;
             
         }
     }return ans;
     
   }

/*Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).*/
