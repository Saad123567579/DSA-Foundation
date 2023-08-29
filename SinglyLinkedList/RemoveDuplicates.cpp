//given a sorted linkedlist u need to delete all the duplicates from it

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
// class LinkedList{
// public:
// Node* head;
// LinkedList(){
//   head = NULL;
// }
// void insertTail(int val){
//   Node* n = new Node(val);
//   if(head==NULL) { head = n;return; }
//   else{
//     Node* temp = head;
//     while(temp->next != NULL){ temp=temp->next;}
//     temp->next = n;
//   }
// }
// void display(){
//   Node* temp = head;
//   while(temp!=NULL){
//     cout<<temp->val<<"->";
//     temp=temp->next;
//   }cout<<"NULL";
// }
// };
// void removeDuplicates(Node* head){
//   Node* temp = head;
//   while(temp!=NULL && temp->next != NULL){
//     if(temp->val==temp->next->val){
//       Node* t = temp->next;
//       temp->next = temp->next->next;
//       delete t;
//     } else {
//     temp = temp->next;
//   }
//   } 
// }
// int main(){
//   LinkedList* list = new LinkedList();
//   list->insertTail(1);
//   list->insertTail(2);
//   list->insertTail(2);
//   list->insertTail(3);
//   list->insertTail(4);
//   list->insertTail(4);
//   list->display();
//   removeDuplicates(list->head);
//   cout<<endl;
//   list->display();
  
// }