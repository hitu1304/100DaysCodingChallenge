//Use Map

void frequencyCount(vector<int>& arr,int N, int P)
    { 
        int i,j=0;
       map<int,int>m;
       for(auto x:arr)m[x]++;
        
        for(i=1;i<=N;i++)
        {
            arr[j++]=m[i];
        }
    }

/*Expected Time Complexity: O(N logN)
Expected Auxiliary Space: O(1).*/