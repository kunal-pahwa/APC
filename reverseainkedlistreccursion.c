#include<stdio.h>
typedef struct node{
	int data;
	struct node *next;
}Node;
//void reverse(Node** head){
//	if(head->next==NULL){
//		
//	}
//}
void createnew(Node *head,int data){
	
	Node* newnode=(Node*)(malloc(sizeof(Node)));
	
	newnode->data=data;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
		return;
	}
	Node* current;
	current=head;
	head=current;
	while(current->next!=NULL){
		printf("%d",current->data);
		current=current->next;
	}
	current->next=newnode;
	
	
}
void print(Node* head){
	Node* current;
	current=head;
	
	while(current->next!=NULL){
		printf("%d\n",current->data);
		current=current->next;
	}
}
int main(){
	Node* head=(Node*)(malloc(sizeof(Node)));
	head=NULL;
	createnew(head,1);
	createnew(head,2);
	createnew(head,3);
	createnew(head,4);
	createnew(head,5);
	print(head);
}
