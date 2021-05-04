/*plateform-> GeeksForGeeks (practice Medium)

Topic -> Linked list.

language used->cpp.
    
Problem Statement->

Given a singly linked list of size N. The task is to rotate the linked list counter-clockwise by k nodes, where k is a given positive integer smaller than or equal to length of the linked list.

Example 1:

Input:
N = 8
value[] = {1,2,3,4,5,6,7,8}
k = 4
Output: 5 6 7 8 1 2 3 4
Explanation:
Example 2:

Input:
N = 5
value[] = {2,4,7,8,9}
k = 3
Output: 8 9 2 4 7
Explanation:
Your Task:
You don't need to read input or print anything. Your task is to complete the function rotate() which takes a head reference as the first argument and k as the second argument, and returns the head of the rotated linked list.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 103
1 <= k <= N

Approach-> keep pointers in the last node kth node and head and (k-1)th node .Now make k-1 next part NULL and make kth node as a new head Now link last nodes next part to the prev head.*/

Node* rotate(Node* head, int k)
    {
        // Your code here
        Node *p=head;
        Node *q=head;
        Node* r=NULL;
        Node *s=NULL;
        int c=0;
        while(p)
        {
            c++;
            r=p;
            p=p->next;
        }
        if(k<c){
       Node * t=head;
        for(int i=0;i<k;i++)
        {
            s=t;
            if(t)t=t->next;
        }
        s->next=NULL;
        head=t;
        r->next=q;
     return head;}
     else{
     return q;
     }
   }

//Time Complexity: O(N).