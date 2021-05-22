// brute force

Node * removeDuplicates( Node *head) 
    {
     vector<int>v;
      vector<int>v1;
     
     Node *p=head;
     while(p)
     {
         v.push_back(p->data);
         p=p->next;
     }int m=*max_element(v.begin(),v.end());
     int h[m+1]={0};
     for(int i=0;i<v.size();i++)
     {
         h[v[i]]++;
         if(h[v[i]]==1)
         {
             v1.push_back(v[i]);
         }
     }
     int i=0;
     Node *t=new Node(v1[i++]);
     p=t;
     Node *q;
     for(i=1;i<v1.size();i++)
     {
         q=new Node(v1[i]);
         t->next=q;
         t=q;
     }return p;
    }
// Time Complexity: O(N).
