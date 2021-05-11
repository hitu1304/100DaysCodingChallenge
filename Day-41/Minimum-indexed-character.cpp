/*Approach-> Using hash first mark the occurence of element in patt then again mark for str if any element occure two time in hash then break the loop and print tha char*/

string printMinIndexChar(string str, string patt)
	{
	   int h[26]={0};
	   int i;
	   string s="";
	   for(i=0;i<patt.length();i++)
	   {
	       h[patt[i]-97]=-1;
	   }
	   for(i=0;i<str.length();i++)
	   {
	       h[str[i]-97]++;
	       if(h[str[i]-97]==0)
	       {
	           s+= str[i];
	           return s;
	       }
	   }return "$";
	}

//Time Complexity: O(N).