/* Approach-> use hash to count no of the frequency of element and max area*/

vector<int> square(int arr[], int n)
{
   int m=*max_element(arr,arr+n);
   int h[m+1]={0},c=0;
   int max=-1;
   vector<int>v={};
   for(int i=0;i<n;i++)
   {
       h[arr[i]]++;
       if(h[arr[i]]>3)
       {
           if(max<(arr[i]*arr[i]))
          {
              max=arr[i]*arr[i];
          }
       }
   } 
       for(int i=m;i>=0;i--)
       {
           if(h[i]>3)
           c+=h[i];
           if(c>0)
           break;
       }
       if(c>0){
       v.push_back(max);
       v.push_back(c/4);}
       else
       v.push_back(-1);
       return v;
   }

//Time Complexity: O(N).