#include<stdio.h>
#include<string.h>
void salting(char pass[]);
int main(){
	char pass[100];
    printf("Enter your password\n");
	scanf("%s",&pass);
	salting(pass);
	
}
void salting(char pass[]){
	char salt[]="abc";
	char newpass[200];
	strcpy(newpass,pass);// newpass=pass

	strcat(newpass,salt);// newpass=newpass+salt
    printf("Your password is\n");
	puts(newpass);
}