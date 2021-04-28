/*plateform-> GeeksForGeeks (practice Easy)

Topic -> Linked list.

language used->cpp.
    
Problem Statement->

Delete xth node from a singly linked list. Your task is to complete the method deleteNode() which takes two arguments: the address of the head of the linked list and an integer x. The function returns the head of the modified linked list.

Input:
The first line of input contains an element T, denoting the number of test cases. Then T test cases follow. Each test case contains three lines. The first line of each test case contains an integer N denoting the number of elements of the linked list. Then in the next line are N space separated values of the linked list. The third line of each test case contains an integer x.

Output:
The output for each test case will be the space separated value of the returned linked list.

User Task:
The task is to complete the function deleteNode() which should delete the node at required position.

Constraints:
1 <= T <= 300
2 <= N <= 100
1 <= x <= N

Example:
Input:
2
3
1 3 4
3
4
1 5 2 9
2

Output:
1 3
1 2 9

Explanation:
Testcase 1: After deleting the node at 3rd position (1-base indexing), the linked list is as 1-> 3.
Testcase 2: After deleting the node at 2nd position (1-based indexing), the linked list is as 1-> 2-> 9.

Approach-> if index is 1 then directly delete the first node by shifting head pointer otherwise treverse through the desired position and try to delink that node from  the list and return head.*/


Node* deleteNode(Node *head,int x)
{
    //Your code here
    int i;
    Node *p=head;
    Node *q=NULL;
    if(x>1){
    for(i=0;i<x-1;i++)
    {
        q=p;
       p=p->next;
    }q->next=p->next;
    }
    else
    {
        p=head;
        p=p->next;
        head=p;
    }
    return head;
}

//Time Complexity: O(n).