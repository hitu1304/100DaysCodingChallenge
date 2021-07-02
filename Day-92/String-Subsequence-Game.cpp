//brute force

class Solution {
  public:
  
  vector<string >v;
void rec(string a,int i,string s,int n)
{
    if(i==n)v.push_back(a);
   
    else
    {
        rec(a,i+1,s,n);
        rec(a+=s[i],i+1,s,n);
    }
}
  
    set<string> allPossibleSubsequences(string S) {
       int n=S.length();
       rec("",0,S,n);
       
       set<string>st;
       for(int i=0;i<v.size();i++)
       {
           string s=v[i];
           if(s.length()>1){
           if((s[0]=='a'|| s[0]=='e' || s[0]=='i' || s[0]=='o'  || s[0]=='u') && (s[s.length()-1]!='a'&& s[s.length()-1]!='e' && s[s.length()-1]!='i' && s[s.length()-1]!='o'  && s[s.length()-1]!='u') )
           st.insert(s);
           }
           
       }return st;
       
       
    }
};
/*Expected Time Complexity: O(n*logn*2n)
Expected Auxiliary Space: O(2n).*/