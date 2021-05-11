/*Approach->Create hash table and mark the frequency of letters at same time print the first occurence of letters only.*/

string removeDups(string S) 
	{
	    int h[27]={0};
	    string p="";
	    int i;
	    for(i=0;i<S.size();i++)
	    {
	        h[S[i]-97]++;
	        if(h[S[i]-97]==1)
	        {
	           p+=S[i]; 
	        }
	    }return p;
	}

//Time Complexity: O(N).