//use recursion to print a linked list in the reverse order 
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
// };
// void printReverse(Node* head){
//   if(head==NULL) {return;}
//   else{
//     printReverse(head->next);
//     cout<<head->val<<"->";
//   }
// }
// int main(){
//   LinkedList* list = new LinkedList();
//   list->insertTail(1);
//   list->insertTail(2);
//   list->insertTail(3);
//   list->insertTail(4);
//   list->insertTail(5);
//   printReverse(list->head);
// }