/*Create a link list of size N according to the given input literals. Each integer input is accompanied by an indicator which can either be 0 or 1. 
If it is 0, insert the integer in the beginning of the link list. If it is 1, insert the integer at the end of the link list. 
Hint: When inserting at the end, make sure that you handle NULL explicitly.*/
#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
  struct Node* next;
   Node(int x)
  {
      data=x;
      next=NULL;
  }
};
void printList(Node* node)
{
    
    while(node!=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;
    }
}
class Solution{
  public:
    
    Node *insertAtBegining(Node *root, int newData) {
      Node* temp = new Node(newData);
      temp->next=root;
      return temp;
    }
    
    
    
    Node *insertAtEnd(Node *root, int newData)  {
      Node *temp = new Node(newData);
      if(root==NULL)
      return temp;
      Node *curr= root;
      while(curr->next != NULL)
      curr=curr->next;
       curr->next=temp;
       temp->next=NULL;
       return root;
    }
};

int main()
{
    int n;
    cin>>n;
    struct Node *head=NULL;
    
    for(int i=0;i<n;++i)
    {
        int data,indicator;
        cin>>data;
        cin>>indicator;
         Solution obj;
         if(indicator)
         {
            head=obj.insertAtEnd(head,data);
         }
         else
         head=obj.insertAtBegining(head, data);
    }
   printList(head);
}
/*Time complexity for insertion at begining is O(1)
  Time complexity of insertion At the end is o(n)
  sapce complexity is o(1) in both cases */
  
