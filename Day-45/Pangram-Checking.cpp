/*Approach-> First change all the char of the string in either uppercase or lowercase .Now using hastable(size of 26) mark the frequency of all the element of string now check if any of hash element is zero or not.*/

bool checkPangram (string &str)
    {
        for(int i=0;i<str.length();i++)
        {
            if(str[i]<97)
            {
                str[i]+=32;
            }
        }
        int h[27]={0};
         for(int i=0;i<str.length();i++)
         {
             h[str[i]-97]++;
         }
          for(int i=0;i<26;i++)
          {
              if(h[i]==0)
              return 0;
          }return 1;
    }

//Time Complexity: O(N).