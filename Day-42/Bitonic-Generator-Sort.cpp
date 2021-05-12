//Approach-> Brute force

void bitonicGenerator(int arr[], int n)
	{
	        vector<int>v1={};
	        vector<int>v2={};
	        int i;
	        for(i=0;i<n;i++)
	        {
	            if(i%2==0)
	            {
	                v1.push_back(arr[i]);
	            }else
	            {
	                v2.push_back(arr[i]);
	            }
	        }sort(v1.begin(),v1.end());
	        sort(v2.begin(),v2.end(),greater<>());
	        v1.insert(v1.end(),v2.begin(),v2.end());
	         for(i=0;i<n;i++)
	         {
	             arr[i]=v1[i];
	         }
	        
	}

//Time Complexity: O(NlogN).