// Use map

int firstNonRepeating(int arr[], int n) 
    { 
       map<int,int>m;
       vector<int>v;
       for(int i=0;i<n;i++)
       {
           m[arr[i]]++;
       }
       
       for(int i=0;i<n;i++)
       {
           if(m[arr[i]]==1)
           return arr[i];
       }return 0;
       
        
    }

/*Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).*/