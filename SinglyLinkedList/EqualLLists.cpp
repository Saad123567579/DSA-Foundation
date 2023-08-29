// //given 2 linked lists u need to tel if they are equal or not meaning the nodes have equal values and also the length is also the same of both of the linked lists
// #include<iostream>
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

// bool checkEqual(Node* &head1,Node* &head2){
//   Node* temp1 = head1;
//   Node* temp2 = head2;
//   while(temp1!=NULL&&temp2!=NULL){
//     if(temp1->val != temp2->val) return false;
//   temp1=temp1->next;
//   temp2=temp2->next;
//   }
//   return temp1 == NULL && temp2 == NULL;
// }

// int main(){
//   LinkedList* list1 = new LinkedList();
//   LinkedList* list2 = new LinkedList();
//   for(int i=0;i<5;i++){
//      list1->insertTail(i);
//      list2->insertTail(i);
//   }
//   list1->display();
//     cout << endl;
//     list2->display();
//     cout << endl;
//   cout<<checkEqual(list1->head,list2->head);
//   cout<<endl;
//   // list->insertTail(1);
  
 
  
//   return 0;
// }