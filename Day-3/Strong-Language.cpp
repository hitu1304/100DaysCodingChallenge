/*plateform-> Codechef(div-3 rated)
    contest name-> AprilChallenge2021
    language used->cpp.
    
    Problem Statement->
    
    A string is said to be using strong language if it contains at least K consecutive characters '*'.

You are given a string S with length N. Determine whether it uses strong language or not.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and K.
The second line contains a single string S with length N.

Output
Print a single line containing the string "YES" if the string contains strong language or "NO" if it does not (without quotes).

You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤10
1≤K≤N≤106
S contains only lowercase English letters and characters '*'
Sum of N over all testcases is atmost 106.
Subtasks
Subtask #1 (30 points): N≤104, Sum of N over all testcases is atmost 104
Subtask #2 (70 points): original constraints

Example Input
3
5 2
*a*b*
5 2
*a**b
5 1
abcde

Example Output
NO
YES
NO

Explanation
Example case 1: Since there are no two consecutive characters '*', the string does not contain strong language.

Example case 2: There are two adjacent characters '*', so the string contains strong language.

Example case 3: Since there are no characters '*' in the string, it does not contain strong language.

Approach-> Traverse with the string and keep count the consequtive '*' and also updating a count with max count.*/


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main() {
	
	ll t,n,k;
	cin>>t;
	
	while(t--)
	{
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    
	   ll i,c1=0,c=0;
	   
	    for(i=0;i<n;i++){
	        
	        if(s[i]=='*'){
	        c++;
	         c1=max(c1,c);}
	        else{
	           
	            c=0;
	        }
	    }
	  if(c1>=k)
	    {
	        cout<<"Yes"<<endl;
	    }else
	    cout<<"No"<<endl;
	}
	return 0;
}


// Time Complexity-> O(n) Linear.

