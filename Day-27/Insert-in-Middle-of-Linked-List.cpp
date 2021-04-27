/*plateform-> GeeksForGeeks (practice Basic)

Topic -> Linked list.

language used->cpp.
    
Problem Statement->

Given a linked list of size N and a key. The task is to insert the key in the middle of the linked list.

Example 1:

Input:
LinkedList = 1->2->4
key = 3
Output: 1 2 3 4
Explanation: The new element is inserted
after the current middle element in the
linked list.
Example 2:

Input:
LinkedList = 10->20->40->50
key = 30
Output: 10 20 30 40 50
Explanation: The new element is inserted
after the current middle element in the
linked list and Hence, the output is
10 20 30 40 50.
 

Your Task:
The task is to complete the function insertInMiddle() which takes head reference and element to be inserted as the arguments. The printing is done automatically by the driver code.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)

Constraints:
1 <= N <= 104

Approach-> Traverse the linked list till mid term and create a new node assigned value to it and linked to it in linked list.*/


Node* insertInMiddle(Node* head, int x)
{
	// Cpde here
	Node*p=head;
    Node*q=NULL;
    int n=0;
    while(p)
    {
        n++;
        p=p->next;
    }
    int a=ceil((double)n/2);
    int c=0;Node* r=head;
    do{
        q=r;
        r=r->next;
        c++;
    }while(c!=a);
    Node * t=new Node(x);
    q->next=t;
    t->next=r;
    return head;
}

// Time Complexity-> O(N).