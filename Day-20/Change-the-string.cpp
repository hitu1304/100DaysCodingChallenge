/*plateform-> GeeksForGeeks (practice Basic)

    language used->cpp.
    
    Problem Statement->
    
    Given a string S, the task is to change the complete string to Uppercase or Lowercase depending upon the case for the first character.

Example 1:

Input:
S = "abCD"
Output: abcd
Explanation: The first letter (a) is 
lowercase. Hence, the complete string
is made lowercase.

â€‹Example 2:

Input: 
S = "Abcd"
Output: ABCD
Explanation: The first letter (A) is
uppercase. Hence, the complete string
is made uppercase.

Your Task:
You don't need to read input or print anything. Your task is to complete the function modify() which takes the string S as input and returns the resultant string with stated modifications.


Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1) for C++ and O(|S|) for output in Java/Python.


Constraints:
1<=|S|<=104

Approach-> Check the first character of the string first and then change the other characters in the string accordinly.*/

class Solution{
    public:
    
    string modify (string s)
    {
        // your code here
        int i;
        if(s[0]>=97){
        for(i=0;i<s.length();i++)
        {
            if(s[i]<97)
             s[i]=s[i]+32;
             else
             s[i]=s[i];
           
        }}else
        {
             
            for(i=0;i<s.length();i++)
        {
            
            if(s[i]>=97)
                s[i]=s[i]-32;
                else
                s[i]=s[i];
            
        }
        }
        
        return s;
    }
};

//Time Complexity: O(|S|).
