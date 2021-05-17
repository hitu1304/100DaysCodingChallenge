/*Approach-> Use hash to store frequecncy o element and traverse through the (strart from min element of array) hash and if there 0 value in the hash or not.*/

bool areElementsContiguous(int arr[], int n)
    {
	int m=*max_element(arr,arr+n);
	int m1=*min_element(arr,arr+n);
	int h[m+1]={0};
	for(int i=0;i<n;i++)
	{
	    h[arr[i]]++;
	}
	for(int i=m1;i<=m;i++)
	{
	    if(h[i]==0)
	    return 0;
	    
	}return 1;
    }

// Time Complexity: O(N).