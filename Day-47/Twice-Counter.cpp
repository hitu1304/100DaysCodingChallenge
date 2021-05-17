/*Approach-> Use map to store frequency of particular string.*/

int countWords(string list[], int n)
     {   
        map<string,int>m;
        for(int i=0;i<n;i++)
        {
            m[list[i]]++;
        }
        int c=0;
        for(auto it:m)
        {
            int key=it.second;
            if(key==2)
            c++;
        }return c;
}

// Time Complexity: O(N).