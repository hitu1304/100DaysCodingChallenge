/* Initially, reverse the individual words of the given string one by one, for the above example, after reversing individual words the string should be “i.ekil.siht.margorp.yrev.hcum”.
Reverse the whole string from start to end to get the desired output “much.very.program.this.like.i” in the above example.*/

 string reverseWords(string S) 
    { 
       int i=-1,j=0;
       for(;j<S.length();j++)
       {
           if(S[j]=='.'|| j==S.length()-1){
               if(j==S.length()-1){
                    reverse(S.begin()+i+1,S.begin()+j+1);
               }else{
           reverse(S.begin()+i+1,S.begin()+j);
           i=j;
           j++;}}
       }reverse(S.begin(),S.end());
        return S;
    } 

//Time Complexity: O(|S|)