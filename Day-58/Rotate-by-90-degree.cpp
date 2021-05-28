// Try store the element in given fashion and modify matrix this is in o(n) auxilary sapce solution.

void rotate(vector<vector<int> >& matrix)
{
    vector<int>v;
    
    
        for(int j=matrix.size()-1;j>=0;j--)
        {
            for(int i=0;i<matrix.size();i++)
            v.push_back(matrix[i][j]);
        }int k=0;
         for(int i=0;i<matrix.size();i++)
         {
              for(int j=0;j<matrix.size();j++)
              matrix[i][j]=v[k++];
         }
    
}

// Time Complexity: O(N*N).