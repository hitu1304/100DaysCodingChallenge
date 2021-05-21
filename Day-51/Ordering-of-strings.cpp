// sort the array.

vector<string> orderString(string s[], int n)
    {
    sort(s,s+n);
    vector<string>p;
    p.push_back(s[0]);
    p.push_back(s[n-1]);
    return p;
    }

//Time Complexity: O(N* max of all string length ).