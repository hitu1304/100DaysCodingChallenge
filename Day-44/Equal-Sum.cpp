/*Approach-> first calculate the sum of whle array now traverse through the array keep substarct the sum with elements when the sum is exactly the half of the total sum return the index.*/

string equilibrium(int *arr, int n) {
	   int s=0;
   for(int i=0;i<n;i++)s+=arr[i];int t=s;
  for(int i=0;i<n;i++)
  {
      if(s-arr[i]==(double)(t-arr[i])/2)
      {
          return "YES";
      }s-=arr[i];
  }return "NO";

	}

//Time Complexity: O(N).