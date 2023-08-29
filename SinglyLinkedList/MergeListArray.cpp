// //given a array of multiple list you need to merge all of them 

// #include<iostream>
// #include<vector>
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
//         temp = temp->next;
//     }

//     if (l1 != NULL) {
//         temp->next = l1;
//        temp = temp->next;
//     }

//     Node* mergedHead = dummy->next;
//     delete dummy;
//     return mergedHead;
// }
// Node* MergeMultiple(vector<Node*>arr){
//   while(arr.size() > 1){
//     Node* temp = MergeSorted(arr[0],arr[1]);
//     arr.erase(arr.begin());
//     arr.erase(arr.begin());
//     arr.push_back(temp);
//   }
//   return arr[0];
// }

// int main(){
//   LinkedList* l1 = new LinkedList();
//   LinkedList* l2 = new LinkedList();
//   LinkedList* l3 = new LinkedList();

//   LinkedList* result = new LinkedList();

//   l1->insertTail(1);
//   l1->insertTail(4);
//   l1->insertTail(5);
//   l2->insertTail(2);
//   l2->insertTail(3);
//   l3->insertTail(1);
//   l3->insertTail(3);
//   l3->insertTail(5);
//   vector<Node*> arr = {l1->head,l2->head,l3->head};
  

//   result->head = MergeMultiple(arr);
//   result->display();
  

  
// }