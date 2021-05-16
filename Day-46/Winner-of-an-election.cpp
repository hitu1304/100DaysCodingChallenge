/*Approach-> Use map to store thr frequency of particular string*/

vector<string> winner(string arr[],int n)
    {
        map<string,int> m ;
        for (int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        vector<string>v={};
        int max = 0;
        string w;
        for (auto it : m)
        {
            string key  = it.first;
            int val = it.second;
            if (val > max)
            {
                max = val;
                 w = key;
            }
            else if (val == max &&
                w>key)
                w = key;
        }
       v.push_back(w);
       v.push_back(to_string(max));
       return v;
    }

//Time Complexity: O(n).