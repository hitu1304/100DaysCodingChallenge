//Approach-> Brute Force

#include<bits/stdc++.h>
using namespace std;
int main()
 {
        int t,n,k;
        cin>>t;
        while(t--)
        {
            cin>>n>>k;
            int i;
            int v[n];
            for(i=0;i<n;i++)
            {
                cin>>v[i];
            }
            sort(v,v+n,greater<>());
            
            for(i=0;i<k;i++)
            {
                cout<<v[i]<<" ";
            }cout<<endl;
        }
	return 0;
}

//Time Complexity : O(n).