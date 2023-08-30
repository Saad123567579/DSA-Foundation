// //write a program to check if a linkedlist is palindrome or not 
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
// bool isPalindrome(Node* head){
//   Node* slow = head;
//   Node* fast = head;
//   Node* prev = NULL;
//   Node* check1 = head;
//   Node* check2 = NULL;
//   int status ; //0 for odd 1 for even
//   while(1){
//     if(fast==NULL){status=1;break;}
//     if(fast->next==NULL){status=0;break;}
//     fast = fast->next->next;
//     prev = slow;
//     slow = slow->next;
//   }
//   if(status==0) { prev = slow;slow=slow->next;check2=slow; }
//   else {check2 = slow;}
//    Node* temp = NULL;
//   while(slow!= NULL){
//     Node* n = slow->next;
//     slow->next = temp;
//     temp = slow;
//     slow = n;
    
//   }
  
//   check2 = temp;
//   while(check2 != NULL){
//     if(check1->val != check2->val) return false;
//     check2 = check2->next;
//     check1 = check1->next;
//   }
//   return true;
  
// }
// int main(){
//   LinkedList* l1 = new LinkedList();
//   l1->insertTail(0);
//   l1->insertTail(0);
//   l1->insertTail(0);
//   l1->insertTail(0);
//   l1->insertTail(0);
//   l1->insertTail(0);
//   l1->insertTail(1);
//   if(isPalindrome(l1->head)) cout<<"Palindrome";
//   else cout<<"Not a palindrome";
// }