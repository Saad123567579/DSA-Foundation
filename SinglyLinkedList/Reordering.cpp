// //given a linkedlist u need to reorder it 
// //l0->ln->l1->ln-1 .... like that 
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

// void Reorder(Node* &head) {
//     if (head == NULL || head->next == NULL || head->next->next == NULL) {
//         return head;
//     }

//     Node* ptr1 = head;
//     Node* slow = head;
//     Node* fast = head;
//     while (fast != NULL && fast->next != NULL) {
//         slow = slow->next;
//         fast = fast->next->next;}
    
//     Node* ptr2 = slow->next;
//     slow->next = NULL;
  
//     Node* prev = NULL;
//     while (ptr2 != NULL) {
//         Node* nextNode = ptr2->next;
//         ptr2->next = prev;
//         prev = ptr2;
//         ptr2 = nextNode;
//     }

//     // Merge the two halves alternately
//     Node* result = new Node(0); // Dummy node
//     Node* resultPtr = result;

//     while (ptr1 != NULL || prev != NULL) {
//         if (ptr1 != NULL) {
//             resultPtr->next = ptr1;
//             ptr1 = ptr1->next;
//             resultPtr = resultPtr->next;
//         }
        
//         if (prev != NULL) {
//             resultPtr->next = prev;
//             prev = prev->next;
//             resultPtr = resultPtr->next;
//         }
//     }
    
//     return result->next;
// }

// int main() {
//   LinkedList* l1 = new LinkedList();
//   for(int i=1;i<=6;i++){
//     l1->insertTail(i);
//   }
//   Reorder(l1->head);
//   l1->display();
// }