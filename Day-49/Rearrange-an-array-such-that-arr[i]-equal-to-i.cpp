/*Approach-> First store the frequency of element in hash now traverse through the array and insert -1 if hash value on that index is 0 else insert i only.*/

int * modifyArray(int arr[], int n){
        
        int h[n]={0};
        
        for(int i=0;i<n;i++)
        {
            h[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(h[i]==0)
            arr[i]=-1;
            else
            arr[i]=i;
            
        }return arr;
        
    }

//Time Complexity: O(N).