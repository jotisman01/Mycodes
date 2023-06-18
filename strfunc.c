#include<stdio.h>

void replacewithnextchar(char str[]){
	int i=0;
	while(str[i]!='\0'){
		str[i]=str[i]+1;
		i++;
	}
	printf("result : %s\n",str);
}
int main(){
	char str[100];
	printf("enter a string:\n");
	gets(str);
	replacewithnextchar(str);
}
