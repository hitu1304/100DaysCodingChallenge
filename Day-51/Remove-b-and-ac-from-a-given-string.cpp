// in while loop if str[i]==b move i++ if str[i]==a and str[i+1]==c move i+=2 and keep storing the other characters.*/

string stringFilter(string str) 
    { 
        int i=0,j=1;
        string p="";
       while(i<str.length())
        {
            if(str[i]=='b')
            {
                i++;
            }
            else if( (str[i]=='a' && str[i+1]=='c'))
            {
                i+=2;
            }
            else
            {
                p+=str[i++];
            }
        }
        return p;
    } 

//Time Complexity: O(|s|)