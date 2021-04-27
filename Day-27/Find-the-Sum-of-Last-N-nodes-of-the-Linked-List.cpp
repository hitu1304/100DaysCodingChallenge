/*plateform-> GeeksForGeeks (practice Basic)

Topic -> Linked list.

language used->cpp.
    
Problem Statement->

Given a single linked list of size M, your task is to complete the function sumOfLastN_Nodes(), which should return the sum of last N nodes of the linked list.

Input:
The function takes two arguments as input, the reference pointer to the head of the linked list and the an integer N.
There will be T test cases and for each test case the function will be called seperately.

Output:
For each test case output the sum of last N nodes of the linked list.

Constraints:
1<=T<=100
1<=N<=M<=1000

Example:
Input:
2
6 3
5 9 6 3 4 10
2 2
1 2

Output:
17
3

Explanation:
Testcase 1: Sum of last three nodes in the linked list is 3 + 4 + 10 = 17.

Approach-> reverse the linked list and calculate the sum of first n nodes.*/


int sumOfLastN_Nodes(struct Node* head, int n)
{
      // Code here
      Node *p=head;
      Node *q=NULL;
      Node *r=NULL;
      while(p)
      {
          r=q;
          q=p;
          p=p->next;
          q->next=r;
      }head=q;
      p=head;
      int l=0,s=0;
      do{
          l++;
          s+=p->data;
         p =p->next;
      }while(l!=n);
      return s;
}

// Time Complexity-> O(N).