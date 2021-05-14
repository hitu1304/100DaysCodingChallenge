/* Approach-> use hashtable to find the missing element.*/

int missingNumber(int arr[], int n) 
    { 
       int m=*max_element(arr,arr+n);
       int i;
       int h[m+2]={0};
       for( i=0;i<n;i++)
       {
           if(arr[i]>=0)
           {
               h[arr[i]]++;
           }
       }for(i=1;i<=m+1;i++)
       {
           if(h[i]==0)
           break;
       }
       return i;
    } 

// Time Complexity: O(N).