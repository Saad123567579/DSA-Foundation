//given a linked list you need to reverse and return the linked list 
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

// void returnReverse(Node* &head){
//   Node* prev = NULL;
//   Node* current = head;
//   while(current != NULL){
//     Node* n = current->next;
//     current->next = prev;
//     prev = current;
//     current = n;
//   }
//   head = prev; 
// }

// Node* returnReverseRecursively(Node* &head, Node* prev = NULL) {
//     if (head == NULL) {
//         return prev;
//     }
   
//     Node* nextNode = head->next; 
//     head->next = prev;
   
//     return returnReverseRecursively(nextNode, head);
// }

// int main(){
//   LinkedList* list = new LinkedList();
//   list->insertTail(1);
//   list->insertTail(2);
//   list->insertTail(3);
//   list->insertTail(4);
//   list->insertTail(5);
  
//   cout << "Original list: ";
//   list->display();
  
//   list->head = returnReverseRecursively(list->head);
  
//   cout << "\nReversed list: ";
//   list->display();
  
//   return 0;
// }
