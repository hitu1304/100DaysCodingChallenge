/* Approach-> There are many methods to solve this problem.
Method Using difference of node counts:

Get count of the nodes in the first list, let be c1.
Get count of the nodes in the second list, let be c2.
Get the difference of counts d = abs(c1 – c2).
Now traverse the bigger list from the first node till d nodes so that from here onwards both the lists have equal no of nodes.
Then we can traverse both the lists simultaneously till we come across a common node.*/

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node *p=head1;
    Node *q=head2;
    int c1=1,c2=1;
    Node *r=NULL,*s;
    while(p)
    {
        c1++;
        p=p->next;
    }
    while(q)
    {
        c2++;
        q=q->next;
    }
    if(c1>c2)
    {
        r=head1;
        s=head2;
    }else
    {
        r=head2;
        s=head1;
    }
    
    int d=abs(c1-c2);
    
    int c=0;
    while(r && c!=d)
    {
        c++;
        r=r->next;
    }
    while(s!=r)
    {
        s=s->next;
        r=r->next;
    }return s->data;
}

//Time Complexity: O(N+M).