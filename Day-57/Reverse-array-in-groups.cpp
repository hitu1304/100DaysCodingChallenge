//terate over the array and keep reversing k elements at a time.

void reverseInGroups(vector<long long>& arr, int n, int k){
        int c=0;
       int i=0,j=0; 
        while(i<n)
        {
            c++;
            if(c%k==0 or i==n-1)
            {
                reverse(arr.begin()+j,arr.begin()+i+1);
                j=i+1;
                c=0;
            }i++;
        }
    }

//Time Complexity: O(N).