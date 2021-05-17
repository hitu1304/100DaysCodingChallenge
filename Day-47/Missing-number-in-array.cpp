/*Approach-> Use hash table to find the missing element.*/

 int MissingNumber(vector<int>& array, int n) {
       int m=*max_element(array.begin(),array.end());
        int h[m+2]={0};
        int i,ans=-1;
        for(i=0;i<n-1;i++)
        {
            h[array[i]]++;
        }
        for(i=1;i<=m+1;i++)
        {
            if(h[i]==0){
           return i;
            }
        }
        return ans;
    }

//Time Complexity: O(N).