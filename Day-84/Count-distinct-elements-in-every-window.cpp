// use map

vector <int> countDistinct (int A[], int n, int k)
    {
        vector<int>v={};
        
        unordered_map<int,int>m;
        for(int i=0;i<k;i++)
        {
            m[A[i]]++;
        }
        for(int i=0;i<n;i++)
        {
           if(k+i-1<n)
            {
              v.push_back(m.size());
             
             m[A[i]]--;
            if(m[A[i]]==0)
            m.erase(A[i]);
              m[A[i+k]]++;}
        }return v;
    }

/*Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).*/