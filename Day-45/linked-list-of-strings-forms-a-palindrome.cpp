/* Store the elements of list in string now reverse the list and again store a elements of modified list in diffrent string now compare bothe the string.*/

bool compute(Node* root)
{
   string s="";
   string s1="";
   Node *p=root;
   while(p)
   {
       s+=p->data;
       p=p->next;
   }
   p=root;
   Node *r=NULL;
   Node *q=NULL;
   
   while(p)
   {
       r=q;q=p;p=p->next;q->next=r;
   }
   while(q)
   {
       s1+=q->data;
       q=q->next;
   }
   for(int i=0;i<s.size();i++)
   {
       if(s[i]!=s1[i])
       return 0;
   }return 1;
}

// Time Complexity: O(n).