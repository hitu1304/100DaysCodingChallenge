/*Approach-> One way is to store the binary representation in a string and then check if the string is a palindrome or not.*/

int binaryPalin (long long int N)
	{
	    string s="";
	    while(N)
	    {
	        s+=N%2;
	        N/=2;
	    }
	  int i=0,j=s.length()-1;
	  while(i<j)
	  {
	      if(s[i]!=s[j])
	      return 0;
	      i++;j--;
	  }return 1;
	    
	    
	}

//Time Complexity: Log(N).