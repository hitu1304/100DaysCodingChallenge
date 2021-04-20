/*plateform-> GeeksForGeeks (practice Basic)

    language used->cpp.
    
    Problem Statement->
    
    Given a string of length N, made up of only uppercase characters 'R' and 'G', where 'R' stands for Red and 'G' stands for Green.Find out the minimum number of characters you need to change to make the whole string of the same colour.

Example 1:

Input:
N=5
S="RGRGR"
Output:
2
Explanation:
We need to change only the 2nd and 
4th(1-index based) characters to 'R', 
so that the whole string becomes 
the same colour.
Example 2:

Input:
N=7
S="GGGGGGR"
Output:
1
Explanation:
We need to change only the last 
character to 'G' to make the string 
same-coloured.
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function RedOrGreen() which takes the Integer N and the string S as input parameters and returns the minimum number of characters that have to be swapped to make the string same-coloured.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1<=N<=105
S consists only of characters 'R' and 'G'.

Approach-> Count the no of 'R' and 'G' in the String and print the min of both.*/

class Solution {
  public:
       int RedOrGreen(int N,string S) {
           //code here
           int i,c1=0,c2=0;
           for(i=0;i<N;i++)
           {
               if(S[i]=='R')
               c1++;
               if(S[i]=='G')
               c2++;
           }return min(c1,c2);
    }
};

//Time Complexity: O(N).