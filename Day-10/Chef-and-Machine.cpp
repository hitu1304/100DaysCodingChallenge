/*plateform-> Codechef(div-3 unrated)
    contest name-> Runtime terror2021
    language used->cpp.
    
    Problem Statement->
    
    
    
    Chef is very interested in new technology and machines, So he decided to pursue B.tech and get enrolled in a college near to his kitchen. As he is keen interested in tech, he made a simple machine in his very first semester.

The machine works in such a way that it takes a positive integer X as input and outputs another integer Y such that Y is equal to the multiplication of all the numbers from X (including) up to 1.

Your task is to write a program to verify the output/ working of the Chef's machine.

Input:
The first line will contain an integer T denoting the total number of Testcases. Then the test cases follow.
Each test case contains a single line of input, containing an integer X.
Output:
The first and only line containing an integer Y representing the output of the Machine.
Constraints
1≤X≤20.
Sample Input:
3
6
1
7
Sample Output:
720
1
5040
EXPLANATION:
TestCase 1: 6∗5∗4∗3∗2∗1=720


Approach-> find the factorial of that no.*/
    
    
    
    #include <iostream>
using namespace std;
typedef long long int ll;

int main() {
	// your code goes here
	ll t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;ll f=1;
	    for(int i=1;i<=x;i++)
	    {
	        f=f*i;
	    }cout<<f<<endl;
	    
	    
	}
	return 0;
}
// Time Complexity-> o(n);
    