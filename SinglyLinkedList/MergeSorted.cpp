//give 2 linked lists you need to merge them such that they are also sorted 
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
// Node* MergeSorted(Node* l1, Node* l2) {
//     Node* dummy = new Node(0); // Dummy node
//     Node* temp = dummy;

//     while (l2 != NULL && l1 != NULL) {
//         if (l1->val > l2->val) {
//             temp->next = l2;
//             l2 = l2->next;
//            temp = temp->next;
//         } else {
//             temp->next = l1;
//             l1 = l1->next;
//             temp = temp->next;
//         }
       
//     }

//     if (l2 != NULL) {
//         temp->next = l2;
//     }

//     if (l1 != NULL) {
//         temp->next = l1;
//     }

//     Node* mergedHead = dummy->next;
//     delete dummy;
//     return mergedHead;
// }


// int main(){
//   LinkedList* l1 = new LinkedList();
//   LinkedList* l2 = new LinkedList();
//   LinkedList* result = new LinkedList();

//   l1->insertTail(1);
//   l1->insertTail(4);
//   l1->insertTail(5);
//   l2->insertTail(2);
//   l2->insertTail(3);
//   result->head = MergeSorted(l1->head,l2->head);
//   result->display();
  

  
// }