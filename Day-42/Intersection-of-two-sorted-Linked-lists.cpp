/* Approach -> Apply two pointer algorithm .Maintain pointer at each linked list head and traverse in both linked lists when you find a common node insert it into the new linked list.*/

Node* findIntersection(Node* head1, Node* head2)
{
   
    Node * p=head1,*q=head2;
    Node *t=NULL,*r,*h=NULL;
      while(p && q)
    {
       if(p->data<q->data)
        {
            p=p->next;
        } else if(p->data>q->data)
        {
            q=q->next;
        }
        else
        {
           if(!h)
           {
               t=h=new Node(p->data);
               
           }
           else
          {
           t->next=new Node (p->data);
           t= t->next;
              
          }
           p=p->next;
           q=q->next;
         }
    }return h;
}

//Time Complexity : O(n+m).