/*plateform-> GeeksForGeeks (practice medium)

language used->cpp.
    
Problem Statement->

Given two sorted linked lists consisting of N and M nodes respectively. The task is to merge both of the list (in-place) and return head of the merged list.
 

Example 1:

Input:
N = 4, M = 3 
valueN[] = {5,10,15,40}
valueM[] = {2,3,20}
Output: 2 3 5 10 15 20 40
Explanation: After merging the two linked
lists, we have merged list as 2, 3, 5,
10, 15, 20, 40.
Example 2:

Input:
N = 2, M = 2
valueN[] = {1,1}
valueM[] = {2,4}
Output:1 1 2 4
Explanation: After merging the given two
linked list , we have 1, 1, 2, 4 as
output.
Your Task:
The task is to complete the function sortedMerge() which takes references to the heads of two linked lists as the arguments and returns the head of merged linked list.

Expected Time Complexity : O(n+m)
Expected Auxilliary Space : O(1)

Constraints:
1 <= N, M <= 104
1 <= Node's data <= 105

Approach-> I use two extra pointers one which is the head of the resulting linked list and one which is keep sliding till the end of linked list and at the end denoting last node of resulting list.Compare the data part of both the list and keep try to link the node in sorted order.*/


Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node *third=NULL;
    Node*last=NULL;
    if(head1->data<head2->data)
    {
        third=head1;last=head1;
        head1=head1->next;
        last->next=NULL;
    }else
    {
        third=head2;last=head2;
        head2=head2->next;
        last->next=NULL;
   }while(head1 && head2)
   {
       if(head1->data<head2->data)
    {
        last->next=head1;
        last=head1;
        head1=head1->next;
        last->next=NULL;
    }else
    {
        last->next=head2;
        last=head2;
        head2=head2->next;
        last->next=NULL;
   }
   }if(head1==NULL)last->next=head2;
   else last->next=head1;
    
    return third;
}  

//Time Complexity : O(n+m).