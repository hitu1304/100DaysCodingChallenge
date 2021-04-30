/*plateform-> Codechef(div-3 rated)
    contest name-> AprilLunchTime2021
    language used->cpp.
    
    Problem Statement->
    
Sarthak and Anuradha are very good friends and are eager to participate in an event called Equinox. It is a game of words. In this game, N strings S1,…,SN are given. For each string Si, if it starts with one of the letters of the word “EQUINOX”, Sarthak gets A points and if not, Anuradha gets B points. The one who has more points at the end of the game wins. If they both the same number of points, the game is a draw..

Print the winner of the game, if any, otherwise print “DRAW”.

Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
The first line of each test case contains three integers N, A, B.
N lines follow, each containing a string Si.
All strings are in UPPERCASE.
Output
For each test case, print “SARTHAK” (case insensitive) if he has more points than Anuradha, print “ANURADHA” (case insensitive) if she has more points than Sarthak, otherwise print “DRAW” (case insensitive), without the quotes.
Constraints
1≤T≤100
1≤N≤100
1≤A, B≤109
1≤|Si|≤100
Subtasks
Subtask #1 (100 points): original constraints

Sample Input
2
4 1 3
ABBBCDDE
EARTH
INDIA
UUUFFFDDD
2 5 7
SDHHD
XOXOXOXO
Sample Output
DRAW
ANURADHA

Approach-> Brute Force.*/



#include <iostream>
using namespace std;
typedef long long int ll;

int main() {
	// your code goes here
	ll t,n,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>n>>a>>b;
	    ll i,c1=0,c2=0;
	    string s;
	    for(i=0;i<n;i++)
	    {
	        cin>>s;
	        if(s[0]=='E'||s[0]== 'Q'||s[0]== 'U'||s[0]== 'I'||s[0]== 'N'||s[0]== 'O'||s[0]== 'X')
	        {
	            c1+=a;
	        }else
	        {
	            c2+=b;
	        }
	    }if(c1>c2)
	    {
	        cout<<"SARTHAK"<<endl;
	    }else if(c1==c2)
	    {
	        cout<<"DRAW"<<endl;
	    }else
	    {
	        cout<<"ANURADHA"<<endl;
	    }
	    
	    
	}
	return 0;
}

//Time Complexity-> O(n).