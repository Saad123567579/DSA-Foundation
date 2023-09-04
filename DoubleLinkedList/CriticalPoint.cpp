// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// class Node{
// public:
// int val;
// Node* next;
// Node*prev;
// Node(int data){
//   val = data;
//   next = NULL;
//   prev = NULL;
// }
// };
// class DoublyLinkedList{
// public:
// Node* head;
// Node* tail;
// DoublyLinkedList(){
//   head = NULL;
//   tail = NULL;
// }
// void insertHead(int v){
//   Node* newNode = new Node(v);
//   if(head==NULL){
//     head = newNode;
//     tail = newNode;
//     return;
//   }
//   newNode -> next = head;
//   head -> prev = newNode;
//   head = newNode;
// }
// void insertTail(int v){
//   Node* newNode = new Node(v);
//   if(tail == NULL){
//     head = newNode;
//     tail = newNode;
//     return;
//   }
//   tail -> next = newNode;
//   newNode -> prev = tail;
//   tail = newNode;
// }

// void insertK(int val,int index){
//   if(index < 0 ) return;
//   Node* newNode = new Node(val);
//   int count = 1;
//   Node* temp = head;
//   while(count <= index-1 && temp!= NULL){
//     temp = temp -> next;
//     count++;
//   }
//   if(temp==NULL) return;
//    if (temp == NULL) return; 
//         newNode->next = temp->next;
//         if (temp->next != NULL) { 
//             (temp->next)->prev = newNode;
//         }
//         temp->next = newNode;
//         newNode->prev = temp;
  
  
// }

// void deleteHead(){
//   if(head == NULL) return;
//   Node* temp = head;
//   head = head->next;
//   if(head != NULL )head -> prev = NULL;
//   delete temp;
// }
// void deleteTail(){
//   if(tail==NULL) return;
//   Node* temp = tail;
//   tail->prev->next = NULL;
//     if(tail != NULL) tail -> next = NULL;
//     delete temp;
// }
//  void deleteK(int index) {
//         if (index <= 0) return; // Added check for non-positive index
//         int count = 1;
//         Node* temp = head;
//         while (count < index && temp != NULL) { // Changed <= to <
//             temp = temp->next;
//             count++;
//         }
//         if (temp == NULL || temp->next == NULL) return; // Added check for NULL temp or NULL temp->next
//         Node* d = temp->next;
//         temp->next = d->next;
//         if (d->next != NULL) { // Added check for NULL d->next
//             d->next->prev = temp;
//         }
//         delete d;
//     }

// void display(){
//   Node* temp = head;
//   cout<<"\n";
//   while(temp != NULL){
//     cout<< temp->val<<" ";
//     temp = temp -> next;
    
//   }
// }

// };

// vector<int> findCritical(Node* head){
//   vector<int> indexes ;
//   int count = 1;
//   Node* temp = head->next;
//   while(temp->next !=NULL){
//     if(temp->prev->val < temp->val && temp->next->val < temp->val){
//       indexes.push_back(count);
//     }
//     if(temp->prev->val > temp->val && temp-> next->val > temp->val){
//       indexes.push_back(count);
//     }
//     count++;
//     temp = temp->next;
//   }
//   if(indexes.size() < 3) {
//     vector<int> result = {-1,-1};
//     return result;
//   }
//   int max = indexes[indexes.size()-1] - indexes[0];
//   int min = INT_MAX;
//   for(int i=1;i<indexes.size()-1;i++){
//     if(indexes[i] - indexes[i-1] <  min) min = indexes[i]-indexes[i-1];
//   }
//   vector<int> result = {min,max};
//   return result;
  
  
// }
// int main(){
//   DoublyLinkedList* l1 = new DoublyLinkedList();
//   l1->insertTail(1);
//   l1->insertTail(5);
//   l1->insertTail(2);
//   l1->insertTail(3);
//   l1->insertTail(3);
//   vector<int> answer = findCritical(l1->head);
//   for(int i:answer){
//     cout<<i<<" ";
//   }
  
 
  
  
// }
