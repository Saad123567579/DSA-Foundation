// //given the head of 2 linked list you need to return the node at which the 2 lists intersect if they dont intersect retur null
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
// int length(){
//   int i=0;
//   Node* temp = head;
//   while(temp != NULL){
//     i++;temp=temp->next;
//   }
//   return i;
// }
// void display(){
//   Node* temp = head;
//   while(temp!=NULL){
//     cout<<temp->val<<"->";
//     temp=temp->next;
//   }cout<<"NULL";
// }
// };

// Node* intersection(Node* head1,Node* head2,int len1,int len2){
//   int n=0;
//   if(len1>len2){
//     n = len1 - len2;
//     int i=0;
//     while(i<n){
//       head1 = head1 -> next;}}
//   else { n = len2 - len1 ;
//          int i=0;
//     while(i<n){head2 = head2 -> next;}}
//   while(head1 != NULL && head2 != NULL){
//     if(head1==head2) return head1;
//     head1 = head1->next;
//     head2 = head2->next;
//   }
//   return NULL;
  
// }


// int main(){
//   LinkedList* list1 = new LinkedList();
//   LinkedList* list2 = new LinkedList();
//     list1->insertTail(1);
//     list1->insertTail(2);
//     list1->insertTail(3);
//     list1->insertTail(4);
//     list2->insertTail(4);
//     list2->insertTail(4);
//     list2->insertTail(4);
//     list2->insertTail(4);
//     // list2->head->next->next = list1->head->next->next; // Creating intersection

//   Node* n = intersection(list1->head,list2->head,list1->length(),list2->length());
//   if(n) cout<<"Found "<<n->val;
//   else cout<<"No Intersection Found";
  
  


// }
