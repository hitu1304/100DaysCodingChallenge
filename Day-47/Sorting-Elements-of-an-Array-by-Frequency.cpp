/*Approach-> Store the all the element against its frequency.Now copy the all element of map into vector pair and now sort it using comperator.*/

class Solution{
    public:
   
   static bool comp(pair<int ,int>a,pair<int ,int>b)
   {
       if(a.second!=b.second)
       return a.second>b.second;
       return a.first<b.first;
   }
   vector<int> sortByFreq(int arr[],int n)
    {
        map<int,int>m;
        vector<int>v={};
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++)
        m[arr[i]]++;
        
        for(auto x:m)
        p.push_back({x.first,x.second});
        
        sort(p.begin(),p.end(),comp);
        for(auto it:p)
        {
            while(it.second--)
            v.push_back(it.first);
        }
        return v;
    }
        
};

//Time Complexity: O(NLogN).