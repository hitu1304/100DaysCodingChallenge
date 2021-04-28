/*plateform-> GeeksForGeeks (practice Easy)

Topic -> Linked list.

language used->cpp.
    
Problem Statement->

Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.

Example 1:

Input:
N = 2
LinkedList: 1->2->3->4->5->6->7->8->9
Output: 8
Explanation: In the first example, there
are 9 nodes in linked list and we need
to find 2nd node from end. 2nd node
from end os 8.  
Example 2:

Input:
N = 5
LinkedList: 10->5->100->5
Output: -1
Explanation: In the second example, there
are 4 nodes in the linked list and we
need to find 5th from the end. Since 'n'
is more than the number of nodes in the
linked list, the output is -1.
Your Task:
The task is to complete the function getNthFromLast() which takes two arguments: reference to head and N and you need to return Nth from the end or -1 in case node doesn't exist..

Note:
Try to solve in single traversal.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= L <= 103
1 <= N <= 103

Approach->  First reverse the linked ist using sliding pointers now traverse through the linked list to desired position and print the data.*/


int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node*p=head;
       int c=0;
       while(p)
       {
           c++;
           p=p->next;
       }
        p=head;
           Node *q=NULL;
           Node*r=NULL;
           while(p)
           {
               r=q;
               q=p;
               p=p->next;
               q->next=r;
           }
      if(n>c)
       {
           return -1;
      }else
       {
           int i;
           for(i=1;i<n;i++)
           {
               q=q->next;
           }return q->data;
       }
 }

//Time Complexity: O(n).