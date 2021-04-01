/*plateform-> Codechef(div-3 rated)
    contest name-> januaryCookoff2020.
    language used->cpp.
    
    Problem Statement->
    
    Chef is planning to setup a secure password for his Codechef account. For a password to be secure the following conditions should be satisfied:

1) Password must contain at least one lower case letter [a−z];

2) Password must contain at least one upper case letter [A−Z] strictly inside, i.e. not as the first or the last character;

3) Password must contain at least one digit [0−9] strictly inside;

4) Password must contain at least one special character from the set { '@', '#', '%', '&', '?' } strictly inside;

5) Password must be at least 10 characters in length, but it can be longer.

Chef has generated several strings and now wants you to check whether the passwords are secure based on the above criteria. Please help Chef in doing so.

Input
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, string S.
Output
For each testcase, output in a single line "YES" if the password is secure and "NO" if it is not.

Constraints
1≤|S|≤20
All the characters in S are one of the following: lower case letters [a−z], upper case letters [A−Z], digits [0−9], special characters from the set { '@', '#', '%', '&', '?' }
Sum of length of strings over all tests is atmost 106
Example Input
3
#cookOff#P1
U@code4CHEFINA
gR3@tPWD
Example Output
NO
YES
NO
Explanation
Example case 1: Condition 3 is not satisfied, because the only digit is not strictly inside.

Example case 2: All conditions are satisfied.

Example case 3: Condition 5 is not satisfied, because the length of this string is 8.
    
    
Approach-> brute force technique*/
    
    
#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int i,c1=0,c2=0,c3=0,c4=0;
	    for(i=0;i<s.length();i++)
	    {
	       if(s[i]<=122 && s[i]>=97)
	        {
	            c2++;
	        }
	       
        }
	        for(i=1;i<s.length()-1;i++)
	        {
	           if(s[i]<=90 && s[i]>=65)
               {
	            c1++;
               }
	            if(s[i]=='@' || s[i]=='#' || s[i]=='%'||s[i]=='&'||s[i]=='?')
                {
	            c4++;
                }
	           if(s[i]<=57 && s[i]>=48)
	           {
	            c3++;
               }
	        }
	        
	    
	    if(c1>0 &&c2>0&&c3>0&&c4>0 && s.length()>=10)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    
	    
	}
	return 0;
}

//Time Complexity->O(n).
    