/*Approach-> Create a vector pair store the element along with their frequency sort it and print the desired elements.*/

vector<int> topK(vector<int>& nums, int k) {
        vector<pair<int,int>>v;
        vector<int>v1={};
        int m=*max_element(nums.begin(),nums.end());
        int h[m+1]={0};
        for(int i=0;i<nums.size();i++)
        {
            h[nums[i]]++;
        }
         for(int i=0;i<=m;i++)
         {
             if(h[i]>0)
             {
                 v.push_back({h[i],i});
             }
             
         }sort(v.begin(),v.end(),greater<>());
         for(auto it=v.begin();it!=v.begin()+k;it++)
         {
             v1.push_back(it->second);
         }return v1;
    }

//Time Complexity : O(NlogN).