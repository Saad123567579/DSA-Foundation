// //given a linked list you need to swap the adjacent nodes

// #include<iostream>
// using namespace std;
// class Node{
// public:
// int val;
// Node* next;
// Node(int x){ val = x; next = NULL;}
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
// Node* swapAdjacent(Node* &head){
//   Node* newHead = new Node(0); 
//   newHead->next = head;
//   Node* prev = newHead;
//   while(prev!= NULL && prev->next != NULL){
//     Node* first = prev->next;
//     Node* second = prev->next->next;
//     prev -> next = second;
//     first -> next = second -> next;
//     second -> next = first;
//     prev = prev->next->next;
//   }
//   return newHead -> next;
// }

// int main(){
//   LinkedList* l1 = new LinkedList();
//   for(int i=1;i<6;i++){
//     l1->insertTail(i);
//   }
//   l1->head = swapAdjacent(l1->head);
//   l1->display();
// }