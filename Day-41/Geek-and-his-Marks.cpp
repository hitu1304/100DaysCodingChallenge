//Approach-> Count the no of element greater then x.

#include<iostream>
using namespace std;
int main()
 {
int t,n,i,c=0,x;
cin>>t;
	while(t--)
	{
	    c=0;
	    cin>>n>>x;
	    int v[n];
	    for(i=0;i<n;i++)
	    {
	    cin>>v[i];
	    if(v[i]>x)
	     c++;
	    }
	  cout<<c<<endl;
	}
	 return 0;
}

///Time Complexity: O(N).