/* Approach->*/ https://www.youtube.com/watch?v=1ZGJzvkcLsA

vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int i,dir=0,top=0,left=0,right=c-1,down=r-1;
        vector<int>v={};
        
        while(top<=down && left<=right)
        {
            
            if(dir==0)
            {
                for(i=left;i<=right;i++)
                {
                    v.push_back(matrix[top][i]);
                }top++;
            }else if(dir==1)
            {
                for(i=top;i<=down;i++)
                {
                    v.push_back(matrix[i][right]);
                }right--;
            }else if(dir==2)
            {
                for(i=right;i>=left;i--)
                {
                    v.push_back(matrix[down][i]);
                }down--;
            }else
            {
                for(i=down;i>=top;i--)
                {
                    v.push_back(matrix[i][left]);
                }left++;
            }
            
            dir=(dir+1)%4;
        }
        return v;
    }

// Time Complexity: O(r*c).