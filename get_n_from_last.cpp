//Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.//
#include <bits/stdc++.h>
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
int getNfromLast(Node *head, int n)
{
    Node *temp1,*temp2;
    temp1=temp2=head;
    int count=0;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
        count++;
        if(count>=n)
        temp1=temp1->next;
    }
    if(count<n-1)
    return -1;
    else
    return temp1->data;
}


int main() {
    int n,k,l,firstdata;
    cin>>n>>k;
    cin>>firstdata;
    Node *head= new Node(firstdata);
    Node *tail=head;
    for(int i=1;i<n;i++)
    {
        cin>>l;
        tail->next=new Node(l);
        tail=tail->next;
    }
    
	cout<<getNfromLast(head,k);

}
