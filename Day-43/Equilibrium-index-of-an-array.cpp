/*Approach-> first calculate the sum of whle array now traverse through the array keep substarct the sum with elements when the sum is exactly the half of the total sum return the index.*/

int findEquilibrium(int A[], int n)
{
  int s=0;
   for(int i=0;i<n;i++)s+=A[i];int t=s;
  for(int i=0;i<n;i++)
  {
      if(s-A[i]==(double)(t-A[i])/2)
      {
          return i;
      }s-=A[i];
  }return -1;
}

// Time Complexity: O(N).