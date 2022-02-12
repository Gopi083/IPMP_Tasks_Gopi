#include <iostream>
using namespace std;
class Node{
   public:
   int data;
   Node* next;
};
void deleteLinkedList(Node** head_ref){
   Node* current = *head_ref;
   Node* next;
   while (current != NULL){
      cout<<current->data<<"\t";
      next = current->next;
      free(current);
      current = next;
   }
   *head_ref = NULL;
}
void push(Node** head_ref, int new_data){
   Node* new_node = new Node();
   new_node->data = new_data;
   new_node->next = (*head_ref);
   (*head_ref) = new_node;
}
int main(){
   Node* head = NULL;
   push(&head, 5);
   push(&head, 1);
   push(&head, 15);
   push(&head, 9);
   push(&head, 8);
   cout<<"Elements of linked list : "<<endl;
   deleteLinkedList(&head);
   cout << "Linked list deleted";
}
