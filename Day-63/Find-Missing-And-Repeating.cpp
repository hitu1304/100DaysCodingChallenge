// use hash

int *findTwoElement(int *arr, int n) {
        
        int h[n+2]={0};
        int i,p,q;
       
        for(i=0;i<n;i++)
        h[arr[i]]++;
        for(i=1;i<=n;i++)
            if(h[i]>1){
              p=i;
              break;
         }
        for(i=1;i<=n;i++)
         if(h[i]==0){
              q=i;
              break;
         }
             
       static int x[2];
        x[0]=p;
        x[1]=q;
        return x;
    }

// Time Complexity: O(N).