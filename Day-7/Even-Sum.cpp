/*plateform-> Codechef(div-2 unrated)
    contest name->
    language used->cpp.
    
    Problem Statement->
    
    There are N integers in an array A.

Two players take turns alternatively in placing signs (+ or -) before them, and then they all are added. The sign can be placed before any element of the array that has not been assigned a sign yet. All elements must be assigned a sign.

Player 1 wins if the resulting sum is even, else player 2 wins. Find out who shall win if they both play optimally.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains 2 lines of input.
First line contains a single integer N, size of the array.
Second line contains N space separated integers - A1,A2,…,AN, denoting the array elements.
Output:
For each testcase, output in a single line "1", if the first person wins or "2" if the second person wins.

Constraints
1≤T≤10
1≤N≤105
1≤Ai≤109
Subtasks
Subtask #1 (100 points): Original constraints

Sample Input:
3
2
1 2
3
1 1 2
3
1 2 4
Sample Output:
2
1
2
Explanation:
Case 1: Lets consider all possible choices to prove that person 2 always has a winning chance regardless of what person 1 does.

1) Suppose person 1 adds a positive sign to 1, person 2 can also add a positive sign to 2 to get total of 3 which is odd: (+1)+(+2)=3

2) Suppose person 1 adds a negative sign to 1, person 2 can add a positive sign to 2 to get total of 1 which is odd: (−1)+(+2)=1
3) Suppose person 1 adds a positive sign to 2, person 2 can also add a positive sign to 1 to get total of 3 which is odd: (+2)+(+1)=3

4) Suppose person 1 adds a negative sign to 2, person 2 can add a positive sign to 1 to get total of −1 which is odd: (−2)+(+1)=−1

Approach-> find the total no of odd no. int array .*/


#include <iostream>
using namespace std;

int main() {

	int t,n;
	cin>>t;
	while(t--)
	{
	    
	    cin>>n;
	    int a[n],i,c=0,c1=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++)
	     {
	         if(a[i]%2!=0)
	         c1++;
	     }if(c1%2==0)
	     {
	         cout<<1<<endl;
	     }else cout<<2<<endl;
	    
	    
	}
	return 0;
}

//Time Complexity-> O(n)
