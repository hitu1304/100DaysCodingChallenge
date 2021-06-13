//backtracking

void permute(string a, int l, int r)
{
    // Base case
    if (l == r)
        s.push_back(a);
    else
    {
       
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
 
            permute(a, l+1, r);
 
            swap(a[l], a[i]);
        }
    }
}
		vector<string>find_permutation(string S)
		{
		    
		    permute(S,0,S.length()-1);
		    sort(s.begin(),s.end());
		    return s;
		}

/*Expected Time Complexity: O(n! * n)

Expected Space Complexity: O(n).*/

