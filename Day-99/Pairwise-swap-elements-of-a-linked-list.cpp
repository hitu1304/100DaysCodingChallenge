// sliding pointer

Node* pairWiseSwap(struct Node* head) 
    {
        if (head == NULL || head->next == NULL)
        return head;
        Node * f=head,*s=head->next;
        
        head=s;
         while(1)
        {
            Node * next=s->next;
            s->next=f;
            
            if(!next || !next->next ){
                f->next=next;
                break;
            }
            
            f->next=next->next;
            f=next;
            s=next->next;
        }return head;
    }

/*Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).*/