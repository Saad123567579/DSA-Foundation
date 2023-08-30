// //given a linked list you need to rotate it 
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

// void Rotate(Node* &head,int k){
//   int count = 0;
//   Node* c = head;
//   while(c!=NULL){c=c->next;count++;}
//   k = k%count;
//   if(k==0) return;
//   c=head;
//   int i=0;
//   Node* prev = head;
//   while(i<k){
//     Node* start = head;
//     Node* end = head;
//     while(end->next!=NULL) {prev=end;end=end->next;}
//     end->next = start;
//      head = end;
//     prev->next = NULL;
   
   
//     i++;
//   }
  
// }


// int main(){
//   LinkedList* l1 = new LinkedList();
//   for(int i=1;i<=5;i++){
//     l1->insertTail(i);
//   }
//   Rotate(l1->head,1);
//   l1->display();
  
  
  
// }