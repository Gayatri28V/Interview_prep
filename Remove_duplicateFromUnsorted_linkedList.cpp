/*Given an unsorted linked list of N nodes. The task is to remove duplicate elements from this unsorted Linked List.
When a value appears in multiple nodes, the node which appeared first should be kept, 
all others duplicates are to be removed.*/
Node *removeDuplicate(node *head)
{ 
  unsorted_set<int> s;
  Node *curr=head;
  node *prev=NULL;
  while(curr!=NULL)
  {
    if(s.find(curr->data)==s.end()) //if data is not in the unsorted set then insert that data
    { s.insert(curr->data);
     prev=curr;
    }
    else{
      prev->next=curr->next; //else leave  that data
    }
    curr=curr->next;
  }
  return head;
}
  
