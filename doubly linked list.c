#include<stdlib.h>
#include<stdio.h>
struct node{
  int data;
  struct node* next;
  struct node* pre;
};
struct node* create(struct node**head,int data){
  struct node* newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=data;
  newnode->next=NULL;
  newnode->pre=NULL;
  struct node* temp =*head;
  if(*head==NULL){
    
    *head = newnode;
  }
  else{
    while(temp->next!=NULL){
      temp=temp->next;
    }temp->next=newnode;
    newnode->pre=temp;
  }return newnode;

}
void print(struct node*head){
  struct node* temp = head;
  if(head == NULL){
    printf("the list is empty ");
  }else{
    while(temp!=NULL){
      printf("<-%d->",temp->data);
      temp = temp->next;
    }printf("NULL");
    
  }
}
int main(){
  struct node* head = NULL;
  create(&head,100);
  create(&head,200);
  create(&head,300);
  print(head);
}