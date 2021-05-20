/*Approach-> Youcan solve this q with o(n) auxilary space using vector.*/

queue<int> modifyQueue(queue<int> q, int k)
{
    vector<int>v={};
    while(!q.empty())
    {
        v.push_back(q.front());
        q.pop();
    }
    reverse(v.begin(),v.begin()+k);
    for(int i=0;i<v.size();i++)
    {
        q.push(v[i]);
    }return q;
}

 //Time Complexity : O(n).