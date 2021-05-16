/*Approach-> Sort the second array2 and now for every element of array1 find the upper bound in array2 and store it.*/

vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
            sort(arr2,arr2+n);
            vector<int>v={};
            for(int i=0;i<m;i++)
            {
                v.push_back(upper_bound(arr2,arr2+n,arr1[i])-arr2);
            }return v;
    }

// Time Complexity: O((m + n) * log n).