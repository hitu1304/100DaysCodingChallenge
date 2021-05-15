/* Approach->*/ https://www.youtube.com/watch?v=1ZGJzvkcLsA reverse the araay afterwards*/

vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        int d=R-1,t=0,l=0,r=C-1,i,dir=0;
        vector<int>v={};
        while(t<=d && l<=r)
        {
            
            if(dir==0)
            {
                for(i=l;i<=r;i++)
                {
                    v.push_back(a[t][i]);
                }t++;
            }
           else if(dir==1)
            {
                for(i=t;i<=d;i++)
                {
                    v.push_back(a[i][r]);
                }r--;
            }
           else if(dir==2)
            {
                for(i=r;i>=l;i--)
                {
                    v.push_back(a[d][i]);
                }d--;
            }
            else
            {
                for(i=d;i>=t;i--)
                {
                    v.push_back(a[i][l]);
                }l++;
            }
            
            dir=(dir+1)%4;
        }reverse(v.begin(),v.end());
        return v;
    }

// Time Complexity: O(n*m).