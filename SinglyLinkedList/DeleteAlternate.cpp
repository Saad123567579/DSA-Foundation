//given head of linked list u have to delete every alternate element starting from the 2nd index
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
// void deleteAlternateNodes(Node* &head){
//   Node* temp = head;
//   while(temp!=NULL && temp->next!=NULL){
//     Node* t = temp->next;
//     temp->next = temp->next->next;
//     free(t);
//     temp = temp -> next;
//   }
// }
// int main(){
//   LinkedList* list = new LinkedList();
//   for(int i=0;i<4;i++){
//     list->insertTail(i);
//   }
//   list->display();
//   deleteAlternateNodes(list->head);
//   cout<<endl;
//   list->display();
// }