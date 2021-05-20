/*Approach-> Use stack*/

bool valid(string s)
{
    stack<int>a;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='('|| s[i]=='{' | s[i]=='['){
        a.push(s[i]);
        }
        else if(a.empty() &&(s[i]==')'|| s[i]=='}' | s[i]==']'))
            {
                return 0;
            }
             else if( (s[i]==')' && a.top()!='(')|| (s[i]=='}' && a.top()!='{') || (s[i]==']' && a.top()!='['))
            { 
                return 0;
                
            }
            else
           a.pop();
        }
        if( a.empty())
        return 1;
        return 0;
        
}

//Time Complexity : O(n).