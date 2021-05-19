/*Approach -> Using another first copy postive element then negative elelment after that copy all element of that array into original element.*/

void segregateElements(int arr[],int n)
    {
        
        vector<int>v={};
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
          v.push_back(arr[i]);
        }for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
          v.push_back(arr[i]);
        }for(int i=0;i<n;i++)
        {
            
          arr[i]=v[i];
        }
         
    }

//Time Complexity: O(N).