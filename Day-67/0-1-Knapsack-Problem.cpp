// Dp

class Solution
{
    public:
    int m[1000][1000]={{0}};
  int knapSack(int W, int wt[], int val[], int n) 
    { 
        
       if(n==0 || W==0)
       return 0;
       if(m[n][W]!=0)return m[n][W];
       if(wt[n-1]>W)
       return m[n][W]= knapSack(W,wt,val,n-1);
       else
       return m[n][W]=  max(knapSack(W,wt,val,n-1),(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1)));
      
    }
};

//Time Complexity: O(N*W).