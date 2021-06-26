//brute force 

int minOperation(int n)
    {int c=0;
       while(n!=0)
       {
           if(n%2==0)
           n=n/2;
           else
           n=n-1;
           c++;
       }return c;
    }

/*Expected Time Complexity: O(LogN)
Expected Auxiliary Space: O(1).*/ 