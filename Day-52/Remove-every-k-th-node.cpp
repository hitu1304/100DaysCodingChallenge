/*A simple problem just iterate and maintain a count and delete nodes at k distance till the end of linked list.*/

Node* deleteK(Node *head,int K)
{
  Node * p=head;
  Node *q=head;
  int c=1;
  while(p)
  {
      if(K==1)
      {
          return NULL;
      }
      
      if(c==K)
      {
         q->next=p->next;
         p=p->next;
         c=1;
      }else
      {
          q=p;
          p=p->next;
          c++;
      }
  }return head;
}

//Time Complexity: O(N).