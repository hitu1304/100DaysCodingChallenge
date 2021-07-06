// youcan solve it using deque

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                
                
                deque<long long>dq;
                vector<long long>v;
                
                for(int i=0;i<K;i++)if(A[i]<0)dq.push_back(A[i]);
                
                 for(int i=0;i<=N-K;i++)
                 {
                     if(!dq.empty())
                    
                         v.push_back(dq[0]);
                     else
                     v.push_back(0);
                     
                     if(A[i]==dq[0])dq.pop_front();
                     if(A[i+K]<0)dq.push_back(A[i+K]);
                 }
                return v;
                
                                                 
 }

/*Expected Time Complexity: O(N)
Expected Auxiliary Space: O(K).*/