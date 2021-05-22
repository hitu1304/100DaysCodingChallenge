/* Approach->  Traverse through the linked list till given value is less than current value in list.*/


class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       Node *p=head;
       Node *q=head;
       if(head==NULL)
       {
           Node *t=new Node(data);
           head=t;
           head->next=t;
           return head;
           
           
       }
       
        if(p->data>=data)
       {
          Node *t=new Node(data);
           t->next=p;
           do
           {
               q=p;
              if(p->next) p=p->next;
           }while(p!=head);
           q->next=t;
           head=t;
           return head;
        }else
        {
            q=NULL;p=head;
           while(p->data<=data)
           {
               q=p;
               p=p->next;
           }
           Node *t=new Node(data);
           q->next=t;
           t->next=p;
           return head;
        }
    }
};

//Time Complexity: O(N).