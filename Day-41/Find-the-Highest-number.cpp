/*Approach-> Return the element where next element is less than previous element else return last element.*/

int findPeakElement(vector<int>& a) 
    {
        int i;
        for(i=0;i<a.size();i++)
        {
            if(a[i]>a[i+1])
            {
                return a[i];
            }
        }return a[a.size()-1];
    }

//Time Complexity: O(N).