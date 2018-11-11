#include<stdio.h>
#include<stdlib.h>
#define X 10
typedef struct stack{
	int* arr;
	int top;
}stk;
//static stk s;
stk* head;
stk* intialize(int x){
	head=(stk*)(malloc(sizeof(stk)));
	head->arr=(int*)malloc(sizeof(int)*x);
	head->top=-1;
}
int isempty(){
	if((head->top)==-1){
		return 1;
	}
	return 0;
}
void push(int value){
	(head->top)++;
	*(head->arr+head->top)=value;
	
}
int pop(){
	if(isempty()){
		printf("stack is empty");
	}
	else{
		int x=*((head->arr)+(head->top));
		(head->top)--;
		return x;
	}
}
int main(){
	intialize(X);
	push(1);
	push(2);
	
	printf("%d\n",pop());
	printf("%d\n",pop());
	printf("%d\n",isempty());
}
