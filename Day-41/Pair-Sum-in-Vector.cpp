//Approach->iterate through vector pair.

void sum(vector<pair<int,int>>v)
{
    long long sum=0;
    vector<pair<int,int>>::const_iterator i;
   for(i=v.begin();i!=v.end();i++)
   {
       sum+=i->second;
   }
    cout<<sum;
    cout<<endl;
}

//Time Complexity: O(N).