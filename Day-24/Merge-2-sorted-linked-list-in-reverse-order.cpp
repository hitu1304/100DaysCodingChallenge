/*plateform-> GeeksForGeeks (practice Easy)

Topic -> Linked list.

language used->cpp.
    
Problem Statement->


Given two linked lists of size N and M, which are sorted in non-decreasing order. The task is to merge them in such a way that the resulting list is in decreasing order.

Input:
First line of input contains number of testcases T. For each testcase, first line of input conatains length of both linked lists N and M respectively. Next two lines contains N and M elements of two linked lists.

Output:
For each testcase, print the merged linked list which is in non-increasing order.

User Task:
The task is to complete the function mergeResult() which takes reference to the heads of both linked list and returns the pointer to the merged linked list.

Constraints:
1 <=T<= 50
1 <= N, M <= 1000

Example:
Input:
2
4 3
5 10 15 40 
2 3 20
2 2
1 1
2 4

Output:
40 20 15 10 5 3 2
4 2 1 1 

Explanation:
Testcase 1: After merging the two lists in decreasing order, we have new lists as 40->20->15->10->5->3->2

Approach-> I use two extra pointers one which is the head of the resulting linked list and one which is keep sliding till the end of linked list and at the end denoting last node of resulting list.Compare the data part of both the list and keep try to link the node in sorted order.After that reverse the linked list using sliding pointers.*/


struct Node * mergeResult(Node *node1,Node *node2)
{
    // your code goes here
     Node *third=NULL;
    Node*last=NULL;
    if(node1->data<node2->data)
    {
        third=node1;last=node1;
        node1=node1->next;
        last->next=NULL;
    }else
    {
        third=node2;last=node2;
        node2=node2->next;
        last->next=NULL;
   }while(node1 && node2)
   {
       if(node1->data<node2->data)
    {
        last->next=node1;
        last=node1;
        node1=node1->next;
        last->next=NULL;
    }else
    {
        last->next=node2;
        last=node2;
        node2=node2->next;
        last->next=NULL;
   }
   }if(node1==NULL)last->next=node2;
   else last->next=node1;
    Node * p=third;
    Node *q=NULL;
    Node* r=NULL;
    
    while(p)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }third=q;
    return third;
 }

//Time Complexity : O(n+m).