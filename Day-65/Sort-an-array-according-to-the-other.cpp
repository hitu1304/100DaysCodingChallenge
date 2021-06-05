// use map

vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
       map<int,int>m;
       vector<int>v={};
     for(int i=0;i<N;i++)m[A1[i]]++;
        
        for(int i=0;i<M;i++)
        {
            int j=m[A2[i]];
            while(j--)
            {
             v.push_back(A2[i]);
             m[A2[i]]=0;
            }
        }
       for(int i=0;i<M;i++)
       {
           m[A2[i]]=0;
       }
       sort(A1.begin(),A1.end());
       for(int i=0;i<N;i++)
       {
           if(m[A1[i]]>0)
           v.push_back(A1[i]);
       }
      return v;
    } 

//Time Complexity: O(N * Log(N)).