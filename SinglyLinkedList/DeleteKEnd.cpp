// //given a linked list u need to delete kth element from the end 

// #include<iostream>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node* next;
//     Node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class LinkedList {
// public:
//     Node* head;
//     LinkedList() {
//         head = NULL;
//     }
//     void insertTail(int val) {
//         Node* n = new Node(val);
//         if (head == NULL) {
//             head = n;
//             return;
//         }
//         else {
//             Node* temp = head;
//             while (temp->next != NULL) {
//                 temp = temp->next;
//             }
//             temp->next = n;
//         }
//     }
//     int length() {
//         int i = 0;
//         Node* temp = head;
//         while (temp != NULL) {
//             i++;
//             temp = temp->next;
//         }
//         return i;
//     }
//     void display() {
//         Node* temp = head;
//         while (temp != NULL) {
//             cout << temp->val << "->";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//     }
// };

// void deleteEnd(Node* &head, int k) {
//   if(k==0){
//     Node* te = head;
//     while(te->next->next!= NULL){
//       te = te->next;
//     }
//     Node* del = te->next;
//     te->next = te->next->next;
//     delete(del);
//     return;
//   }
//     Node* temp = head;
//     Node* test = head;
//     int i = 0;
//     while (i < k) {
//         temp = temp->next;
//         i++;
//     }
    
//     if (temp == NULL) {
//         Node* r = head;
//         head = head->next;
//         delete r;
//         return;
//     }
  
//     while (temp->next != NULL) {
//         temp = temp->next;
//         test = test->next;
//     }
  
//     Node* t = test->next;
//     test->next = test->next->next;
//     delete t;
// }

// int main() {
//     LinkedList* list = new LinkedList();
//     for (int i = 0; i < 5; i++) {
//         list->insertTail(i);
//     }
    
//     cout << "Before: ";
//     list->display();
//     deleteEnd(list->head, 5);
//     cout << "After: ";
//     list->display();
    
//     return 0;
// }
