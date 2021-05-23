//merge sort algo 

class Solution{
  public:
  void merge(Node **head)
  {
     Node *curr=*head;
      Node *first,*second;
      if(!curr ||!curr->next)return;
      
      middle(curr,&first,&second);
      
      merge(&first);
      merge(&second);
      *head=tomerge(first,second);
  }
  
  Node * tomerge(Node *f,Node *s)
  {
      Node * ans=NULL;
      if(!f)
      {
      return s;
      }
      else if(!s)
      {
          return f;
      }
      if(f->data<=s->data)
      {
          ans=f;
          ans->next=tomerge(f->next,s);
          
      }else
      {
           ans=s;
          ans->next=tomerge(f,s->next);
      }
     return ans;
   }
  void middle(Node *p,Node **f,Node**s)
  {
      Node *slow=p;
      Node *fast=p->next;
      
      while(fast)
      {
          fast=fast->next;
          if(fast){
          slow=slow->next;
          fast=fast->next;}
      }
      *f=p;
      *s=slow->next;
      slow->next=NULL;
  }
  Node* mergeSort(Node* head) {
        
        merge(&head);
        return head;
    }
};

//Time Complexity: O(N*Log(N))