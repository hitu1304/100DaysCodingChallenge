/*plateform-> Codechef(div-3 rated)
    contest name-> AprilCookoff2021
    language used->cpp.
    
    Problem Statement->
    
    
    There are n chocolates, and you are given an array of n numbers where the i-th number Ai is the flavour type of the i-th chocolate. Sebrina wants to eat as many different types of chocolates as possible, but she also has to save at least x number of chocolates for her little brother.

Find the maximum possible number of distinct flavour types Sebrina can have.

Input:
The first line contains an integer T --- the number of test cases.

The first line of each test case consists of two integers n, x - The number of chocolates Sabrina has and the number of chocolates she has to save for her brother, respectively.

The second line contains n integers A1,…,An, where the i-th chocolate has type Ai.

Output:
For each test case, output a single integer denoting the maximum possible number of distinct chocolate flavours Sabrina can eat.

Constraints
1≤T≤10
1≤x≤n≤2⋅105

1≤Ai≤109
Sum of n over all test cases do not exceed 2⋅105
Sample Input:
3
2 1
1 2
4 2
1 1 1 1
5 3
50 50 50 100 100

Sample Output:
1
1
2
EXPLANATION:
In the first test case, she can give any 1 chocolate to her brother and can have the other for herself resulting in 1 flavour type for Sebrina

Approach-> count the no of distinct no. and print min(n-x,no of distint element).*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	// your code goes here
	
	ll t,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    set<ll>s;
	    for(int i=0;i<n;i++)
	    {
	        int g;
	        cin>>g;
	        s.insert(g);
	    }ll a=s.size();
	    ll b=n-x;
	    cout<<min(a,b)<<endl;
	    
	}
	return 0;
}

//Time Complexity-> O(n).