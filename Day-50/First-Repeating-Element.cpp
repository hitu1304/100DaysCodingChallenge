/*Approach-> Use hash*/

int firstRepeated(int arr[], int n) {
       
       int m=*max_element(arr,arr+n);
       int h[m+1]={0},j,i=-1;
       for( i=0;i<n;i++)
       {
           h[arr[i]]++;
           
       }for( j=0;j<n;j++)
       {
           if(h[arr[j]]>1)
           return j+1;
       }return -1;
    }

//Time Complexity : O(n).