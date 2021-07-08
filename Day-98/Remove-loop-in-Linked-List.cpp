// try to find length of the loop

void removeLoop(Node* head)
    {
        Node * p=head,*q=head,*r;
    
            while(q && q->next){
                
                p=p->next;
                q=q->next->next;
                if(p==q)break;
                
            }
            if(p!=q)return;
            p=head;
            while(p->next!=q->next)
            {
                p=p->next;
                q=q->next;
            }
            
            if(q==head)
            {
                while(q->next!=head)
                q=q->next;
                q->next=NULL;
                return ;
            }q->next=NULL;return ;
        
    }

/*Expected time complexity : O(N)
Expected auxiliary space : O(1).*/