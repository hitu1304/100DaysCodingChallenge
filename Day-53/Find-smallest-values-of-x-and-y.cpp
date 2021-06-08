// Brute force.

vector<int> findXY(int a, int b){
        
        int i=1,j=1;
        int p=a*i,q=b*j;
        while(p!=q)
        {
            if(p<q)
            {
            i++;
                p=a*i;
            }else
            {
                j++;
                q=b*j;
            }
            
            
        }vector<int>v={i,j};
            return v;
        
    }

//Time Complexity: O(log(max(a, b))).