/*Approach-> use stoi() function to convert string to int.*/

int atoi(string str)
    {
       
       int c=0;
       for(int i=0;i<str.length();i++)
       {
           if(str[i]>='a'&&str[i]<='z' ||str[i]>='A'&&str[i]<='Z' )
           c++;
       }
       if(c>0)
       return -1;
       return stoi(str);
        
    }

//Time Complexity: O(|S|), |S| = length of string S.