/* Approach-> Withe the help of hash table(size of 26) first traverse through the first string for every element decrement the index of hash table now traverse the second string and for every element increament the index of hash table now check wheather all the elements of hash are zero or not*/

bool isAnagram(string a, string b){
        
       int h[27]={0};
       for(int i=0;i<a.length();i++)
       {
           h[a[i]-97]--;
       }
        for(int i=0;i<b.length();i++)
       {
           h[b[i]-97]++;
       }for(int i=0;i<26;i++)
       {
          if(h[i]!=0)
          return 0;
       }return 1;
    }

//Time Complexity: O(|a|+|b|).