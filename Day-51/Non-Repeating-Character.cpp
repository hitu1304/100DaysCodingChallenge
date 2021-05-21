/*Approach->  Use hash*/

char nonrepeatingCharacter(string S)
    {
       int h[27]={0};
       for(int i=0;i<S.length();i++)
       {
           h[S[i]-97]++;
           
       }
       for(int i=0;i<S.length();i++)
       {
          
           if(h[S[i]-97]==1)
           {
               return S[i];
           }
           
       }return '$';
       
    }

// Time Complexity: O(n).