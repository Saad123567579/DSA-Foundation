//find element of a linked list use slow-fast pointer 
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
// int findMiddle(Node* head){
//   Node* fast = head;
//   Node* slow = head;
//   Node* temp = NULL;
//   while(fast->next != NULL && fast!= NULL){
//     fast=fast->next->next;
//     temp = slow;
//     slow=slow->next;
//   }
//   if(fast == NULL) return temp->val;
//   else return slow->val;
// }



// int main(){
//   LinkedList* l1 = new LinkedList();
//   for(int i=0;i<=10;i++){
//     l1->insertTail(i);
//   }
//   cout<<findMiddle(l1->head);
// }