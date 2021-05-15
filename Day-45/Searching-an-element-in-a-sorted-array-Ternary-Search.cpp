/*Approach-> Can you think of a searching technique that utilises the fact that the given array is sorted. */

 int ternarySearch(int arr[], int N, int K) 
    { 
    
      int l=0,h=N-1;
      while(l<=h)
      {
         int mid1=l+(h-l)/3;
          int mid2=h-(h-l)/3;
          
          if(arr[mid1]==K)
          return 1;
          if(arr[mid2]==K)
          return 1;
          if(arr[mid1]>K){
          h=mid1-1;}
          else if(arr[mid2]<K)
          {
              l=mid2+1;
          }else
          {
              l=mid1+1;
              h=mid2-1;
          }
      }return -1;
     
//Time Complexity: O(Log3N).