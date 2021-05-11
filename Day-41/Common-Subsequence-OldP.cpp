/*Approach-> Using hash first mark the occurence of element in patt then again mark for str if any element occure two time in hash then break the loop and return true*/

int commonSubseq(string S1, string S2){
        int h[26]={0};
	   int i;
	  
	   for(i=0;i<S2.length();i++)
	   {
	       h[S2[i]-65]=-1;
	   }
	   for(i=0;i<S2.length();i++)
	   {
	       h[S1[i]-65]++;
	       if(h[S1[i]-65]==0)
	       {
	         return 1;
	       }
	   }return 0;
    }

//Time Complexity: O(N).