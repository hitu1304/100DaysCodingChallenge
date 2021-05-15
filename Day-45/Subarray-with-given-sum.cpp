/* Approach-> We need to use Sliding window Method to solve this Problem.

Add the elements, to current sum till it is less than S. If it becomes more than S, start deleting elements from start in the current sum. if the current sum again becomes less than S, again start adding elements to it. In between also check, if the current sum becomes equal to S.*/

 vector<int> subarraySum(int arr[], int n, int s)
    {
        vector<int>v={};
        int i=0,j=0,t=arr[0];
        while(j<n)
        {
            if(t==s)
            {
                
                break;
            }else if(t<s)
            {
                j++;
                t+=arr[j];
                
            }else
            {
                t-=arr[i];
                i++;
            }
        }if(j==n)
        v.push_back(-1);
        else{
            v.push_back(i+1);
                v.push_back(j+1);
        }return v;
    }

// Time Complexity: O(n).