/*plateform-> GeeksforGeeks

    Topic->Sorting (Easy)
    
    language used->cpp.
    
    Problem Statement->
    

Given two arrays a[] and b[] respectively of size n and m, the task is to print the count of elements in the intersection (or common elements) of the two arrays.

For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays. 

Example 1:

Input:
5 3
89 24 75 11 23
89 2 4

Output: 
1

Explanation: 
89 is the only element 
in the intersection of two arrays.
Example 2:

Input:
6 5
1 2 3 4 5 6
3 4 5 6 7 

Output: 
4

Explanation: 
3 4 5 and 6 are the elements 
in the intersection of two arrays.
Your Task:
The task is to complete the function NumberofElementsInIntersection() which takes 4 inputs ie- array a, array b, n which is the size of array a, m which is the size of array b. The function should return the count of the number of elements in the intersection.

Expected Time Complexity: O(n + m).
Expected Auxiliary Space: O(min(n,m)).

Constraints:
1 ≤ n, m ≤ 105
1 ≤ a[i], b[i] ≤ 105

Approach -> first delete duplicate element of both the array. Now using hash table find the no of element which present in the both array .*/

int NumberofElementsInIntersection (int a[], int b[], int n, int m )
    {
        // Your code goes here
        int m1=max(*max_element(a,a+n),*max_element(b,b+m));
        int h[m1+1]={0};
        set<int>s;
        set<int>s1;
    
        int i,c=0;
        for(i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        for(i=0;i<m;i++)
        {
            s1.insert(b[i]);
        }
        vector<int>v(s.begin(),s.end());
        vector<int>v1(s1.begin(),s1.end());
        for(i=0;i<s.size();i++)
        {
            h[v[i]]++;
        }for(i=0;i<s1.size();i++)
        {
            h[v1[i]]++;
        }
        for(i=0;i<m1+1;i++)
        {
            if(h[i]>=2){
            c++;}
        }return c;
    }

// Time Complexity: O(n + m).