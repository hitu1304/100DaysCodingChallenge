/*plateform-> Codechef(div-3 rated)
    contest name-> AprilLunchTime2021
    language used->cpp.
    
    Problem Statement->
    
Given an array A of length N, we can define rotation as follows. If we rotate A to the right, all elements move to the right one unit, and the last element moves to the beginning. That is, it becomes [AN,A1,A2,…,AN−1]. Similarly if we rotate A to the left, it becomes [A2,A3,…,AN,A1].

Given an array A and an integer x, define f(A,x) to be the array A rotated by the amount x. If x≥0, this means we rotate it right x times. If x<0, this means we rotate it left |x| times.

You are given an array A of length N. Then Q queries follow. In each query, an integer x is given. To answer the query, you should replace A with A+f(A,x) where + denotes concatenation. After this operation, you must output the sum of all elements of A. Since this number can be large, output it modulo 109+7.

Note that the queries are cumulative. When you modify A to answer one query, it starts that way for the next query.

Input
The first line contains an integer N - the size of the initial array.
The second line contains N integers A1,…,AN - the elements of the initial array.
The third line contains an integer Q - the number of queries.
The fourth line contains Q space-separated integers x1,…,xQ, where xi is the parameter of the i-th query.
Output
After each query, output in a single line the the sum of all elements of the current array modulo 109+7.

Constraints
1≤N≤105
1≤Q≤105
−109≤Ai≤109
−105≤xi≤105
Subtasks
Subtask #1 (100 points): original constraints

Sample Input
2
1 2
2
1 1
Sample Output
6
12
Explanation
Initially, the array is [1,2]. After the first query, the array becomes [1,2]+f([1,2],1)=[1,2]+[2,1]=[1,2,2,1]. The total sum is 6. After the second query, the array becomes [1,2,2,1]+f([1,2,2,1],1)=[1,2,2,1]+[1,1,2,2]. The total sum is 12 =[1,2,2,1,1,1,2,2].


Approach-> There is no effect of rotation of array in sum of array. So just double the sum upto no of queries given.*/



#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	ll  m = pow(10,9)+7;
	ll n,q,p;
	cin>>n;
	ll i,s=0;
	vector<ll>v(n);

	
	for(i=0;i<n;i++)
	{
	    cin>>v[i];
	    s=(s+v[i]);
	    s=((s%m)+m)%m;
	}
	cin>>q;
	for(i=0;i<q;i++)
	{
	    cin>>p;
	
	s+=s;
	 s=((s%m)+m)%m;
	cout<<s<<endl;
    }
    return 0;
}
//Time Complexity-> O(n).
