// Use hash

int minIndexChar(string str, string patt)
    {
        int h[27]={0};
        for(int i=0;i<patt.length();i++)
        {
            h[patt[i]-97]++;
            
        } for(int i=0;i<str.length();i++)
        {
            
            if(h[str[i]-97]>=1)
            return i;
        }return -1;
    }

//Time Complexity: O(N).