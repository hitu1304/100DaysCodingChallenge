/*plateform-> Codechef(div-3 rated)
    contest name-> Starter(April)
    language used->cpp.
    
    Problem Statement->
    
A company conducted a coding test to hire candidates. N candidates appeared for the test, and each of them faced M problems. Each problem was either unsolved by a candidate (denoted by 'U'), solved partially (denoted by 'P'), or solved completely (denoted by 'F').

To pass the test, each candidate needs to either solve X or more problems completely, or solve (X−1) problems completely, and Y or more problems partially.

Given the above specifications as input, print a line containing N integers. The ith integer should be 1 if the ith candidate has passed the test, else it should be 0.

Input:
The first line of the input contains an integer T, denoting the number of test cases.
The first line of each test case contains two space-separated integers, N and M, denoting the number of candidates who appeared for the test, and the number of problems in the test, respectively.
The second line of each test case contains two space-separated integers, X and Y, as described above, respectively.
The next N lines contain M characters each. The jth character of the ith line denotes the result of the ith candidate in the jth problem. 'F' denotes that the problem was solved completely, 'P' denotes partial solve, and 'U' denotes that the problem was not solved by the candidate.
Output:
For each test case, print a single line containing N integers. The ith integer denotes the result of the ith candidate. 1 denotes that the candidate passed the test, while 0 denotes that he/she failed the test.

Constraints
1≤T≤100
1≤N≤100
2≤M≤100
1≤X,Y≤M
1≤(X−1)+Y≤M
Sample Input:
3
4 5
3 2
FUFFP
PFPFU
UPFFU
PPPFP
3 4
1 3
PUPP
UUUU
UFUU
1 3
2 2
PPP
Sample Output:
1100
101
0
Explanation:
Sample Test 1: There are 4 candidates and 5 problems. Each candidate needs to solve 3 or more problems completely, or 2 problems completely and 2 or more problems partially. Only the first and the second candidates satisfy this.

Sample Test 2: The candidates need to either solve at least one problem completely, or they need to solve three or more problems partially. Only candidates 1 and 3 satisfy this.

Sample Test 3: The candidate needs to either solve two or more problems completely, or solve at least one problems completely and two problems partially. The candidate does not satisfy this.

Approach-> count the no of char 'F' and char 'P' and check if it is satisfied the criteaia or not if yes then pushback 1 otherwise 0. And lastly print the vector.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	int t,n,m,x,y;
	cin>>t;
	while(t--)
	{
	    	vector<int>v={};
	    cin>>n>>m;
	    cin>>x>>y;
	    int i,j,f=0,p=0;
	    char c;
	    for(i=0;i<n;i++)
	    {
	        f=0,p=0;
	        for(j=0;j<m;j++){
	        cin>>c;
	        if(c=='F')
	        f++;
	        if(c=='P')
	        p++;}
	        if(f>=x || ((x-1)<=f && p>=y) )
	        {
	            v.push_back(1);
	            
	        }else {
	            
	            v.push_back(0);
	        }
	    }
	    for(i=0;i<v.size();i++)
	    {
	        cout<<v[i];
	    }
	    cout<<endl;
	    
	    
	}
	return 0;
}


//Time Complexity :O(n^2).

