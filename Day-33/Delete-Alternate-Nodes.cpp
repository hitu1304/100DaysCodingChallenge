/*plateform-> GeeksForGeeks (practice Basic)

Topic -> Linked list.

language used->cpp.
    
Problem Statement->


Given a Singly Linked List of size N, delete all alternate nodes of the list.

Example 1:

Input:
LinkedList: 1->2->3->4->5->6
Output: 1->3->5
Explanation: Deleting alternate nodes
results in the linked list with elements
1->3->5.
 

Example 2:

Input:
LinkedList: 99->59->42->20
Output: 99->42
 

Your Task:

Your task is to complete the function deleteAlt() which takes the head of the linked list in the input parameter and modifies the given linked list accordingly.

 

Constraints:
1<=N<=100

 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Approach-> traverse through the list and delink the the alternative elements.*/

void deleteAlt(struct Node *head){
    // Code here
    
     Node *p=head;
   Node *q=head->next;
   while(q && p)
    { p->next=q->next;
            p=q->next;
            q=q->next;
            q=q?q=q->next:NULL;
   }
    
}

//Time Complexity: O(N).