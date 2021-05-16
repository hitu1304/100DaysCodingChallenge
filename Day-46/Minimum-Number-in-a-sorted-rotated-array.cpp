/*Approach-> use stl*/

int minNumber(int arr[], int low, int high)
    {
       return *min_element(arr,arr+high+1);
        
    }

//Time Complexity: O(LogN).