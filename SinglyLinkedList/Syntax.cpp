// #include<iostream>
// using namespace std;

// class Node{
// public:
// int val;
// Node* next;
// Node(int x){
//   val = x;
//   next = NULL;
// }
// };
// void insertHead(Node* &head,int val){ //O(1)
//   Node* new_node = new Node(val);
//   new_node -> next = head;
//   head = new_node;
// }
// void insertEnd(Node* &head,int val){ //O(n)
//   Node* new_node = new Node(val);
//   Node* temp = head;
//   while(temp->next != NULL){
//     temp = temp -> next;
//   }
//   temp -> next = new_node;
 
  
// }
// void display(Node* head){
//   Node* temp = head;
//   while(temp != NULL){
//     cout<<temp -> val<<"->";
//     temp = temp -> next;
//   }
//   cout<<"NULL"<<endl;
// }
// void insertAtIndex(Node* &head,int val, int pos){ //O(n) worst case
  
//   Node* insert = new Node(val);
//   Node* temp = head;
//   int cp=0;
//   while(cp!=pos-1){
//     temp = temp->next;
//     cp++;
//   }
//   insert->next = temp->next;
//   temp->next=insert;
// }
// void updateAtIndex(Node* &head,int v,int pos){ //O(n)
//   Node* temp = head;
//   int i=0;
//   while(i!=pos){
//     temp=temp->next;
//     i++;
//   }
//   temp->val=v;
// }
// void deleteAtHead(Node* &head){
//   Node* temp=head;
//   head=head->next;
//   free(temp);
// }
// void deleteAtTail(Node* &head){ //O(n) worst case
//   Node* temp = head;
//   while ((temp->next)->next != NULL ){
//     temp=temp->next;
//   }
//   Node* d = temp->next;
//   temp->next=NULL;
//   free(d);
// }
// void deleteAtIndex(Node* &head,int pos){
//   Node* temp = head;
//   int cp=0;
//   while(cp!=pos-1){
//     temp=temp->next;
//     cp++;
//   }
//   Node* d = temp->next;
//   temp->next = temp->next->next;
//   free(d);
  
// }

// int main(){
//   Node* head = NULL;
//   insertHead(head,1);
//   display(head);
//   insertHead(head,2);
//   display(head);
//   insertEnd(head,0);
//   display(head);
//   insertAtIndex(head,5,2);
//   display(head);
//   updateAtIndex(head,9,2);
//   display(head);
//   deleteAtIndex(head,1);
//   display(head);
  
  
  
// }