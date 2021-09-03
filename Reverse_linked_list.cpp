#include <iostream>
using namespace std;
struct Node
{
  int data;
  struct Node *next;
  Node(int x)
  {
      data=x;
      next=NULL;
  }
};
class Solution
{
    public:
    
    struct Node* reverseList(struct Node *head)
    {
        Node *curr=head;
        Node *prev=NULL;
        while(curr!=NULL)
        {
            Node *next=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=next;
        }
      return prev;
    }
    
};
void printList(Node *head)
{
    Node *curr =head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main() {
    int n,l,firstdata;
    cin>>n;
    cin>>firstdata;
    Node *head= new Node(firstdata);
    Node *tail=head;
    for(int i=1;i<n;i++)
    {
        cin>>l;
        tail->next=new Node(l);
        tail=tail->next;
    }
    
	Solution obj;
	head=obj.reverseList(head);
	printList(head);
}
