/*Approach-> Let the given element be x, create two variable i = n-1, j= 0 as index of row and column. n and m are number of rows and columns.
Run a loop until i >= 0 and j<m.
If given number is found, return true.if greater than j++ else i--.*/

bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        int i=n-1,j=0;
        while(i>=0 && j<m)
        {
            if(x==matrix[i][j])
            {
                return true;
            }else if(x>matrix[i][j])
            {
                j++;
            }else
            {
                i--;
            }
        }return false;
        
    }

// Time Complexity: O(n).