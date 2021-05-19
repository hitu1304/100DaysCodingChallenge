/*Approach-> Use map to store the frequency.*/

vector<int> countFreq(int a[], int n) 
    { 
       vector<int>v={};
       map<int,int>m;
       int f=0;
       for(int i=0;i<n;i++)
       m[a[i]]++;
       for(auto x:m)
       {
          
           f+=x.second;
           v.push_back(f);
       }return v;
    } 

//Time Complexity: O(N).