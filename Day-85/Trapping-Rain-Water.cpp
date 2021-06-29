//prefix sum,suffix sum

int trappingWater(int arr[], int n){
      
      vector<int>v1;int max1=arr[0];
      v1.push_back(max1);
      for(int i=1;i<n;i++)
      {
          if(max1<arr[i])max1=arr[i];
          v1.push_back(max1);
      }
      vector<int>v2;int max2=arr[n-1];
      v2.push_back(max2);
      for(int i=n-2;i>=0;i--)
      {
          if(max2<arr[i])max2=arr[i];
          v2.push_back(max2);
      }reverse(v2.begin(),v2.end());
      int ans=0;
      
      for(int i=0;i<n;i++)
      {
          ans+=(min(v1[i],v2[i])-arr[i]);
      }return ans;
    }

/*Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N).*/