/*plateform-> GeeksForGeeks (practice Basic)

Topic -> Linked list.

language used->cpp.
    
Problem Statement->


Given a singly linked list with N nodes and a number X. The task is to find the node at the given index (X)(1 based index) of linked list. 

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains space seperated two integers, length of linked list and X.

Output:
For each testcase, there will be single line of output containing data at Xth node.

User Task:
The task is to complete the function GetNth() which takes head reference and index as arguments and should return the data at Xth position in the linked list.

Constraints:
1 <= T <= 30
1 <= N <= 100
K <= N
1 <= value <= 103

Example:
Input:
2
6 5
1 2 3 4 657 76
10 2
8 7 10 8 6 1 20 91 21 2

Output:
657
7

Explanation:
Testcase 1: Element at 5th index in the linked list is 657 (1-based indexing).

Approach-> Treverse through the linked list untill count becomes equal to index.*/


int GetNth(struct node* head, int index){
  // Code here
  
 node*q=head;
 int c=1;
  while(q && q->next && c!=index)
  {
      c++;
      q=q->next;
  }
  return q->data;
}


//Time Complexity: O(n).