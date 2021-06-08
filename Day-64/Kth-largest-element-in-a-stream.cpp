// Use another vector to store the given array aans sort it 

int binary(vector<int>&v,int &x)
  {
      
      int l=0,h=v.size()-1,mid;
      while(l<h)
      {
          mid=(l+h)/2;
          if(v[mid]==x)
          {
              return mid;
             
          }else if(v[mid]>x)
          {
              l=mid+1;
          }
          else
          {
              h=mid-1;
          }
      }
  }
  
    vector<int> kthLargest(int k, int arr[], int n) {
       
       
       vector<int>v(arr,arr+n);
       sort(v.begin(),v.end(),greater<>());
       vector<int>v1;
       int j=0;
       reverse(arr,arr+n);
       for(int i=0;i<n;i++)
       {
           if(v.size()>=k)
           {
               v1.push_back(v[k-1]);
               int p=binary(v,arr[i]);
               v.erase(v.begin()+p);
           }else
           {
               v1.push_back(-1);
           }
           
       }reverse(v1.begin(),v1.end());
       return v1;
       
    }

// Time Complexity: O(nlogk).