/* Approach-> Sort the array now take 2 pointers i is from 0 another j is from n-1.Now traverse through the array and check Loop while i < j.
If (A[i] + A[j] == sum) then return 1
Else if( A[i] + A[j] < sum ) then i++
Else j--.*/

bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    
	    sort(arr,arr+n);
	    int i=0,j=n-1;
	    while(i<j)
	    {
	        if(arr[i]+arr[j]==x)
	        {
	        return 1;
	        }
	        else if(arr[i]+arr[j]>x)
	        {
	            j--;
	        }else
	        {
	            i++;
	        }
	        
	    }return 0;
	}

//Time Complexity: O(N)