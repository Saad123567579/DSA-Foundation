//given a linkedlist u need to reverse every k elements 
// #include <iostream>
// using namespace std ;
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

// void reverseK(Node* &head,int n){
//   int i=0;
//   Node* temp = head;
//   while(temp!=NULL){
    
//     i+=n;
//   }
// }


// int main(){
//   LinkedList* list = new LinkedList();
//   list->insertTail(1);
//   list->insertTail(2);
//   list->insertTail(3);
//   list->insertTail(4);
//   list->insertTail(5);
//   list->insertTail(6);
//   cout << "Original list: ";
//   list->display();
  
//   reverseK(list->head);
  
//   cout << "\nReversed list: ";
//   list->display();
  
//   return 0;
// }