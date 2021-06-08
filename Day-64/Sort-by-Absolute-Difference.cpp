// stable sort

void sortABS(int A[],int N, int k)
    {
       
       stable_sort(A, A + N, [k](int a, int b)
    {
        if (abs(a - k) < abs(b - k))
            return true;
        else
            return false;
    });
    }

//Time Complexity: O(N log(N) ).