#include<stdio.h>
#include<string.h>
char* reverse(char* s,char* temp,int i){
	if(i==strlen(s)){
		printf("%s",temp);
		return temp;
	}
	printf("cde");
	*(temp+strlen(s)-i)=*(s+i);
	printf("efg");
	return reverse(s,temp,++i);
}
int main(){
	char* s;
	s==malloc(sizeof(char)*100);
	gets(s);
	char* temp=(malloc(sizeof(char)*100));
	temp=reverse(s,temp,0);
	printf("%s",temp);
}
