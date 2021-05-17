/*Approach-> Use hash to counter duplictes.*/

string removeDuplicates(string str) {
	    // code here
	    string s="";
	    int h[100]={0};
	    int i;
	    for(i=0;i<str.length();i++)
	    {
	        if(str[i]>='a')
	        {
	        h[str[i]-97]++;
	        if(h[str[i]-97]==1)
	        {
	            s+=str[i];
	        }
	        }
	       if(str[i]<='Z')
	        {
	        h[str[i]]++;
	        if(h[str[i]]==1)
	        {
	            s+=str[i];
	        }
	        }
	    }return s;
	}

//Time Complexity: O(N).