/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
#define z long long int
int intersectPoint(Node* head1, Node* head2)
{
    z s1,s2;
    s1=s2=0;
    Node* a1=head1;
    while(a1!=NULL)
    {
        a1=a1->next;
        s1++;
    }
    Node* a2=head2;
    while(a2!=NULL)
    {
        a2=a2->next;
        s2++;
    }
    z diff=abs(s1-s2);
    z ans=-1;
    if(s1>s2)
    {
        Node* p=head1,*q=head2;
        while(diff--)
        p=p->next;
        while(p->next!=NULL && q->next!=NULL)
        {
            if(p->data==q->data)
            {
                ans=p->data;
                break;
            }
            p=p->next;q=q->next;
        }
    }
    else
    {
        Node* p=head2,*q=head1;
        while(diff--)
        p=p->next;
        while(p->next!=NULL && q->next!=NULL)
        {
            if(p->data==q->data)
            {
                ans=p->data;
                break;
            }
            p=p->next;q=q->next;
        }
    }
    
    return ans;
}
