/*plateform-> GeeksForGeeks (practice Easy)

Topic -> Linked list.

language used->cpp.
    
Problem Statement->

Given a linked list of size N. The task is to complete the function countNodesinLoop() that checks whether a given Linked List contains a loop or not and if the loop is present then return the count of nodes in a loop or else return 0. C is the position of the node to which the last node is connected. If it is 0 then no loop.



Example 1:

Input:
N = 10
value[]={25,14,19,33,10,21,39,90,58,45}
C = 4
Output: 7
Explanation: The loop is 45->33. So
length of loop is 33->10->21->39->
90->58->45 = 7. The number 33 is
connected to the last node to form the
loop because according to the input the
4th node from the beginning(1 based
index) will be connected to the last
node for the loop.
Example 2:

Input:
N = 2
value[] = {1,0}
C = 1
Output: 2
Explanation: The length of the loop
is 2.
Your Task:
The task is to complete the function countNodesinLoop() which contains the only argument as reference to head of linked list and return the lenght of the loop ( 0 if there is no loop).

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 500
0 <= C <= N-1

Approach-> Traverse linked list using two pointers.
Move one pointer(slow) by one node and another pointer(fast) by two nodes in each iteration.
If these pointers meet at the same node then there is a loop.
If pointers do not meet then linked list doesn’t have a loop so return 0.
Start iterating the loop with first pointer and continue till both pointers point to same node again.
Keep incrementing the counter and return the length of the loop.*/


int countNodesinLoop(struct Node *head)
{
   Node *p=head;
   Node *q=head;
   do{
       p=p->next;
       q=q->next;
       q=q?q=q->next:NULL;
   }while(p!=q && p && q);
   int c=1;
   p=p->next;
   while(p!=q && p)
   {
       c++;
       p=p->next;
   }if(p)
   return c;
   return 0;
}

//Time Complexity: O(N).