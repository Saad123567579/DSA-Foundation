//given a head of a linked list determine if a linked list if cyclic or not cyclic 
#include<iostream>
using namespace std;
class Node{
public:
int val;
Node* next;
Node(int x){ val = x; next = NULL;}
};
class LinkedList{
public:
Node* head;
LinkedList(){
  head = NULL;
}
void insertTail(int val){
  Node* n = new Node(val);
  if(head==NULL) { head = n;return; }
  else{
    Node* temp = head;
    while(temp->next != NULL){ temp=temp->next;}
    temp->next = n;
  }
}
void display(){
  Node* temp = head;
  while(temp!=NULL){
    cout<<temp->val<<"->";
    temp=temp->next;
  }cout<<"NULL";
}
};

bool checkCyclic(Node* head){
  Node* temp = head;
  Node* fast = head;
  Node* slow = head;
  int count = 0;
  while(count<3){
    if(slow == temp) count++;
    fast = fast->next->next;
    slow = slow->next;
    if(fast == slow){return true;}
  }
  return false;
}

int main(){
LinkedList* l1 = new LinkedList();
l1->insertTail(1);
l1->insertTail(2);
l1->insertTail(3);
l1->insertTail(5);
l1->insertTail(4);
l1->insertTail(6);
l1->head->next->next->next->next->next = l1->head->next->next;

cout<<endl<<checkCyclic(l1->head);

// Now, the linked list is cyclic with a loop starting from the node with value 3

}