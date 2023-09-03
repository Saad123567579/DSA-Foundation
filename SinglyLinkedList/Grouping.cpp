//given a linekd list you need to separate odd and even index nodes and then merge them odd with even ones 
// #include<iostream>
// using namespace std ;
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
// Node* Grouping(Node* head){
//   int count = 0;
//   Node* temp = head;
//     Node* even = new Node(0); 
//     Node* odd = new Node(0);
//     Node* evenIter = even;
//     Node* oddIter = odd;
  
//   while(temp!=NULL){
//     if(count % 2 ==0){
//       evenIter->next = temp;
//       evenIter = evenIter->next;
//     }
//     else {
//       oddIter->next = temp;
//       oddIter = oddIter->next;
//     }
//     temp=temp->next;count++;
//   }
//   even = even->next;
//   odd = odd->next;
//   oddIter->next = even;

//   return odd;
  
  
  
  
// }

// int main(){
//   LinkedList* l1 = new LinkedList();
//   for(int i=1;i<=5;i++){
//     l1->insertTail(i);
//   }
//   LinkedList* result = new LinkedList();
//   result->head = Grouping(l1->head);
//   result->display();
// }