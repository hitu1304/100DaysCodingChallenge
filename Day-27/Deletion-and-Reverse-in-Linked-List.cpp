/*plateform-> GeeksForGeeks (practice Easy)

Topic-> Linked list.

language used->cpp.
    
Problem Statement->

Given a Circular Linked List of size N. The task is to delete the given node (excluding the first and last node) in circular linked list and then print the reverse of the circular linked list.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the size of the circular linked list. The next line contains n space separated integers forming the circular linked list. The last line contains the node to be deleted in between the circular linked list.

Output:
Print the reverse of the circular linked list with the deleted node.

Constraints:
1 <= T <= 100
1 <= n <= 100
1 <= data <= 100

Example:
Input:
2
5
2 5 7 8 10
8
4
1 7 8 10
8

Output:
10 7 5 2 
10 7 1

Explanation:
Testcase 1: After deleting 8 from the given circular linked list, it has elements as 2, 5, 7, 10. Now, reversing this list will result in 10, 7, 5, 2.

Approach-> First traverse through the key data that to be deleted .After deletion reverse the linked list using sliding pointers and make sure that for linked head->next part be linnked with last node.*/



void deleteNode(struct Node **head, int key)
{

// Your code goes here
Node *p=*head;
Node *q=NULL;
int f=0;
while(p->data!=key || f==0)
{
    f=1;
    q=p;
    p=p->next;
}
q->next=p->next;

}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{
Node *p=*head_ref;
Node *x=*head_ref;
Node *q=NULL;
Node * r=NULL;
int h=0;
while(p!=*head_ref || h==0)
{
    h=1;
    r=q;q=p;p=p->next;q->next=r;
}x->next=q;

*head_ref=q;
}

// Time Complexity-> O(N).