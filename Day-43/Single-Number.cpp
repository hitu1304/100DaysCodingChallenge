//use hash

int getSingle(int arr[], int n) {
	   int m=*max_element(arr,arr+n);
	   int h[m+1]={0};
	   for(int i=0;i<n;i++)
	   {
	       h[arr[i]]++;
	       
	   }for(int i=0;i<=m;i++)
	   {
	       if(h[i]%2!=0)
	       {
                return i;
	       }
	   }return 0;
	}

//Time Complexity: O(N).