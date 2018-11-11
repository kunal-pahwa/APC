#include<stdio.h>
#include<string.h>
int count(char* s,int countt,int i){
	if(s[i]=='\0'){
		return countt;
	}
	if(s[i]==' ')
	countt++;
	return (count(s+i,countt,i++));
}
int main(){
	char *s;
	s=(char*)(malloc(sizeof(char)*100));
	gets(s);
	
	printf("%d",count(s,0,0)+1);
}

