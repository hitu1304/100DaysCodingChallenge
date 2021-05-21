// Apply two poiter algo.

class Solution
{
    public:
    bool alpha(char s)
    {
        if((s>64 && s<91) || (s>96 && s<123))
        return 1;
        return 0;
    }
    
    string reverse(string str)
    { 
       int i=0,j=str.length()-1;
       while(i<j)
       {
           if(alpha(str[i]) && alpha(str[j]))
           {
               swap(str[i++],str[j--]);
           }else if(!alpha(str[i]) && alpha(str[j]))
           {
               i++;
           }else if(alpha(str[i]) && !alpha(str[j]))
           {
               j--;
           }else
           {
               i++;j--;
           }
       }return str;
    } 
};

// Time Complexity: O(|S|)