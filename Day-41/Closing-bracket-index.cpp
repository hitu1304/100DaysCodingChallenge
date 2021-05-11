/*Approach-> start form pos+1 and iterate through string. if char is [ then increment count(initially count=1) and if ] then decrement count and if count =0 then break the loop and return i.*/

int closing (string s, int pos)
        {
        	 long long int c=1,i;
            for(i=pos+1;i<s.length();i++)
            {
                if(s[i]=='[')
                {
                    c++;
                }
                else if(s[i]==']')
                {
                    c--;
                }
                if(c==0)
                {
                    break;
                }
            }return i;
        }

//Time Complexity: O(N).