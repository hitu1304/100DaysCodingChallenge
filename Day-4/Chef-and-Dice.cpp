/*plateform-> Codechef(div-3 rated)
    contest name-> AprilChallenge2021
    language used->cpp.
    
    Problem Statement->
    
    Chef has N 6-sided standard dice. Each die has dimensions 1×1×1. Since Chef is bored during the quarantine, he decides to stack dice for fun.

First, Chef forms four vertical stacks of dice (not necessarily with the same height; empty stacks are allowed) on his table, which together make up a pile of dice with base area up to 2×2. Among all such structures, the total visible surface area of Chef's structure must be the smallest possible.

Then, Chef calculates the number of pips on the visible faces of all dice in the structure. A face of a die is visible if it does not touch the table or another die.

Now, he is wondering: among all possible arrangements of dice, what is the maximum possible total number of visible pips? Since he is busy cooking, he is asking you to solve this.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer N.

Output
For each test case, print a single line containing one integer ― the maximum possible number of visible pips.

Constraints
1≤T≤105
1≤N≤1012
Subtasks
Subtask #1 (10 points):

T≤100
N≤4
Subtask #2 (10 points):

T≤100
N≤8
Subtask #3 (25 points):

T≤100
N≤104
Subtask #4 (55 points): original constraints

Example Input
1
1

Example Output
20

Explanation
Example case 1: There is only one die. If Chef places it on the table with 1 pip facing down, the visible pips are 2, 3, 4, 5 and 6, and their sum is 20.

Approach-> try to understand the pattern and devise the formula accordingly.*/


#include <iostream>
using namespace std;
typedef long long int ll;

int main() {
	// your code goes here
	
	ll t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    ll x=n/4;
	    ll y=n%4;
	     ll ans=0;
     
     if(x>=1){
         if(y==0){
          ans =(x*60)-((x-1)*16);
         }
        if(y==1){
          ans =(x*60)-((x-1)*16)+16;
        }
           if(y==2){
          ans =(x*60)-((x-1)*16)+28;
        }
           if(y==3){
          ans =(x*60)-((x-1)*16)+39;
        }
     }
     else{
         if(y==1){
          ans =20;
        }
           if(y==2){
          ans =36;
        }
           if(y==3){
          ans =51;
        }
     }
     cout<<ans<<endl;}
     return 0;
     
    }


Time Complexity-> Constant

