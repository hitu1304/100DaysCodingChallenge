// sort the string and take one pointer from uppercase letter and onr from lowercase and add char alternatly.

string stringSort (string s)
    {
        sort(s.begin(),s.end());
        int i=0,f=0;
        while(s[i]<97&& i<s.length())
        {
            i++;
        }int m=i;
        int j=0;
        string p="";
        while(j<m && i<s.length())
        {
            if(f==0)
            {
            p+=s[j++];f=1;
            }else
            {
                p+=s[i++];
                f=0;
            }
        }
        for(;j<m;j++)
        p+=s[j];
         for(;i<s.length();i++)
         p+=s[i];
         return p;
    }

// Time Complexity: O(|S|).