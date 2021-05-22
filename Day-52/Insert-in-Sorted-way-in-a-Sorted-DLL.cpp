/* Traverse through the linked list till given value is less than current value in list.*


Node* sortedInsert(Node * head, int x)
{
	Node *p=head;
	Node * q=NULL;
Node *t= getNode(x);
if(p->data>=x)
{
    t->next=p;
    p->prev=t;
    head=t;
    return head;
}else
{
    
   while(p&&p->data<=x)
   {
       q=p;
       p=p->next;
   }
   if(p)
   {
       q->next=t;
   t->prev=q;
   t->next=p;
   p->prev=t;
  return head;
   }
   else
   {
        q->next=t;
   t->prev=q;
   t->next=NULL;
  return head;
   }
}
}

//Time Complexity: O(N).