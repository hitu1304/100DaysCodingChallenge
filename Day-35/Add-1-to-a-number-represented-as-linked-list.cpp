/*plateform-> GeeksForGeeks (practice Easy)

Topic -> Linked list.

language used->cpp.
    
Problem Statement->

A number N is represented in Linked List such that each digit corresponds to a node in linked list. You need to add 1 to it.

Example 1:

Input:
LinkedList: 4->5->6
Output: 457 
Example 2:

Input:
LinkedList: 1->2->3
Output: 124 
Your Task:
Your task is to complete the function addOne() which takes the head of the linked list as the only argument and returns the head of the modified linked list. The driver code prints the number.
Note: The head represents the left-most digit of the number.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 101000

Approach-> Reverse given linked list. For example, 1-> 9-> 9 -> 9 is converted to 9-> 9 -> 9 ->1.
Start traversing linked list from leftmost node and add 1 to it. If there is a carry, move to the next node. Keep moving to the next node while there is a carry.
Reverse modified linked list and return head.*/

 Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node * p=head;
        Node *r=NULL;
        Node *q=NULL;
         while(p)
         {
             r=q;
             q=p;
             p=p->next;
             q->next=r;
         }
         p=q;
         Node *s=NULL;
         while( q && q->data==9 )
         {
             s=q;
             q->data=0;
             q=q->next;
         }
         if(q)q->data++;
         else s->data=10;
        
         r=NULL;
         q=NULL;
         while(p)
         {
             r=q;
             q=p;
             p=p->next;
             q->next=r;
         }
        
        return head;
    }

//Time Complexity: O(N)

