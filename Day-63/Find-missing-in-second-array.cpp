/*Approach->  use set  */

vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	  vector<long long>v={};
	   unordered_set<int>s;
	   for(long long i=0;i<M;i++)
	   {
	       s.insert(B[i]);
	   }for(long long i=0;i<N;i++)
	   {
           if(!(s.find(A[i])!=s.end()))
           v.push_back(A[i]);
	   }
	   return v;
	} 

//Time Complexity: O(N+M).