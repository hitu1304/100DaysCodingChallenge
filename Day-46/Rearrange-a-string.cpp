/*Approach-> Count frequency of each alphabet and sum of digits.*/

string arrangeString(string str)
    {
        string p="";int t=0;
        sort(str.begin(),str.end());
        
        int h[27]={0};
        for(int i=0;i<str.length();i++)
        {
            h[str[i]-65]++;
        }
        for(int i=0;i<26;i++)
        {
            while((h[i])--)
            {
                p+=i+'A';
            }
        }
       for(int i=0;i<str.length();i++)
        {
           if(str[i]<65)
            {
                t+=str[i]-48;
            }
        }  if(t>0)
         p=p+to_string(t);
        return p;
    }

//Time Complexity: O(|S|).