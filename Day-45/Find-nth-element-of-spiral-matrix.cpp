/* Approach->*/ https://www.youtube.com/watch?v=1ZGJzvkcLsA

int dir=0,left=0,top=0,down=n-1,right=m-1,i;
    vector<int>v={};
    while(down>=top && left<=right)
    {
        if(dir==0)
        {
            for(i=left;i<=right;i++)
            
            {
                v.push_back(A[top][i]);
            }top++;
        }
        else if(dir==1)
        {
            for(i=top;i<=down;i++)
            {
               v.push_back(A[i][right]);
            }right--;
        }else if(dir==2)
        {
            for(i=right;i>=left;i--)
            {
                v.push_back(A[down][i]);
            }down--;
        }else 
        {
            for(i=down;i>=top;i--)
            {
                v.push_back(A[i][left]);
            }left++;
        }
        dir=(dir+1)%4;
    }return v[k-1];
}

// Time Complexity: O(n*m).