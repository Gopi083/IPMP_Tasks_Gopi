#include <bits/stdc++.h>
using namespace std;

struct node{
   int data;
   struct node *next;
}*head,*temp;
int coun=0;

void insert(int val){
   struct node* newnode = new node();
   newnode->data = val;
   newnode->next = NULL;
   if(head == NULL){
      head = newnode;
      temp = head;
      coun++;
   } else {
      temp->next=newnode;
      temp=temp->next;
      coun++;
   }
}
void display(){
   if(head==NULL)
      cout<<"no node";
   else {
      temp=head;
      while(temp!=NULL) {
         cout<<temp->data;
         temp=temp->next;
      }
   }
}

void last(int n){
   int i;
   temp=head;
   for(i=0;i<coun-n;i++){
      temp=temp->next;
   }
   cout<<temp->data;
}
int main(){

   struct node* head = NULL;
   int n=3;

   insert(1);
   insert(2);
   insert(3);
   insert(4);
   insert(5);
   insert(6);

   display();
   cout<<endl;
   last(n);
   return 0;
}
