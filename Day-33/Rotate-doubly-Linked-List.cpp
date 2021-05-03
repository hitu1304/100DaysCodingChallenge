/*plateform-> GeeksForGeeks (practice Easy)

Topic -> Linked list.

language used->cpp.
    
Problem Statement->


Given a doubly linked list, rotate the linked list counter-clockwise by P nodes. Here P is a given positive integer and is smaller than the count of nodes(N) in a linked list.

Input:
The first line of input contains an integer T denoting the no of test cases. For each test case, the first line of input contains two integers N and P denoting the number of nodes in Linked List and the number of nodes to be rotated respectively.

Output:
For each test case, output the final linked list after the P rotations in it.

Constraints:
1 <= T <= 100
2 <= N <= 100
1 <= P <= N

Example:
Input:
1
6 2
1 2 3 4 5 6

Output:
3 4 5 6 1 2

Explanation:
Testcase 1: Doubly linked list after rotating 2 nodes is: 3 4 5 6 1 2.

Approach-> To rotate the Doubly linked list, we need to change next of Nth node to NULL, next of last node to previous head node, and prev of head node to last node and finally change head to (N+1)th node and prev of new head node to NULL (Prev of Head node in doubly linked list is NULL).*/

struct node*update(struct node*start,int p)
{
    //Add your code here
    node *s=start;
     node *t=NULL;
    node *q=start;
    node*r=start;
    while(s)
    {
        t=s;
        s=s->next;
    }
    int i;
    for(i=0;i<p-1;i++)
    {
        if(q)q=q->next;
    }if(q->next){q->next->prev=NULL;
    start=q->next;}
    q->next=NULL;
    t->next=r;r->prev=t;
    
    return start;
    
}

//Time Complexity: O(N).