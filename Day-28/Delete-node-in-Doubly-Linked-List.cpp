/*plateform-> GeeksForGeeks (practice Basic)

Topic -> Linked list.

language used->cpp.
    
Problem Statement->

Given a doubly linked list and a position. The task is to delete a node from given position in a doubly linked list.

Example 1:

Input:
LinkedList = 1 <--> 3 <--> 4 
x = 3
Output: 1 3  
Explanation: After deleting the node at
position 3 (position starts from 1),
the linked list will be now as 1->3.
Example 2:

Input:
LinkedList = 1 <--> 5 <--> 2 <--> 9  
x = 1
Output: 5 2 9
Your Task:
The task is to complete the function deleteNode() which should delete the node at given position and return the head of the linkedlist.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)

Constraints:
2 <= size of the linked list <= 1000
1 <= x <= N

Approach-> if index is 1 then directly delete the first node by shifting head pointer otherwise treverse through the desired position and try to delink that node from  the list and return head.*/


class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
      int i;
      Node *p=head_ref;
      if(x==1)
      {
          p=p->next;
          p->prev=NULL;
          head_ref=p;
         
      }else
      {p=head_ref;
          for(i=0;i<x-1;i++)
          {
              p=p->next;
          }
          p->prev->next=p->next;
          if(p && p->next)p->next->prev=p->prev;
         
      }return head_ref;
    }
};

//Time Complexity: O(n).