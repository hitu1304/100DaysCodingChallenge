// Use Hash map to store frequency.

Node* findIntersection(Node* head1, Node* head2)
    {
       vector<int>v1={};
       vector<int>v2={};
       vector<int>v3={};
       
       while(head1)
       {
           v1.push_back(head1->data);
           head1=head1->next;
       }
        while(head2)
       {
           v2.push_back(head2->data);
           head2=head2->next;
       }
       
      
      int i=0,j=0;
       int m1=*max_element(v1.begin(),v1.end());
       int m2=*max_element(v2.begin(),v2.end());
       int m=max(m1,m2);
       int h[m]={0};
       
       for(i=0;i<v2.size();i++)
       {
           h[v2[i]]=-1;
       } for(i=0;i<v1.size();i++)
       {
           h[v1[i]]++;
           if(h[v1[i]]==0)
           v3.push_back(v1[i]);
       }
       
       
       i=0;
       Node *t=new Node(v3[i]);
       Node *p=t;
       Node *q;
       for(i=1;i<v3.size();i++)
       {
           q=new Node(v3[i]);
           t->next=q;
           t=q;
       }return p;
       
    }

//Time Complexity: O(M+N).