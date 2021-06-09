//use Recursion

#include<iostream>
using namespace std;
int g(int n,int a,int b,int c)
{
    if(n==1)
    {
        return a;
    }else if(n==2)
    {
    return b;
    }else if(n==3)
    {
        return c;
    }
    return g(n-1,a,b,c)+g(n-2,a,b,c)+g(n-3,a,b,c);
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,n;
	    cin>>a>>b>>c>>n;
	    cout<<g(n,a,b,c)<<endl;
	    
	    
	}
	return 0;
}