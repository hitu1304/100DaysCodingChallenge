// use map

int countOfSubstrings(string S, int K) {
      map<int,int>m;
      int n= S.length(),c=0;
      for(int i=0;i<K;i++)m[S[i]]++;
      
      for(int i=0;i<=n-K;i++)
      {
          if(m.size()==K-1)c++;
          m[S[i]]--;
          if(m[S[i]]==0)m.erase(S[i]);
          m[S[i+K]]++;
      }return c;
      
    }

/*Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(K)*/