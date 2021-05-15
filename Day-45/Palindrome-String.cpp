/* Approach-> maintain two one is from 0 and another is from length -1 now run a loop and check s[i] and s[j] equal or not.*/

int isPlaindrome(string S)
	{
	    int i=0,j=S.length()-1;
	    while(i<j)
	    {
	        if(S[i]!=S[j])
	        return 0;
	        i++;j--;
	    }return 1;
	}
//Time Complexity: O(Length of S) 