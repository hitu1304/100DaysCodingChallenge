/*Approach->Slide the pattern over text one by one and check for a match. If a match is found, then slides by 1 again to check for subsequent matches.*/

bool searchPattern(string str, string pat)
{
    int M = str.length();
    int N = pat.length();
    for(int i = 0; i <M; i++)
    {
        int j;
        for(j = 0;  j < N; j++)
        {
            if(str[i+j] != pat[j])
                break;
        }
            if(j == N)
            return true;
    }
    return false;
}

//Time Complexity: O(N).