#include<stdio.h>
int main(){
	int num,rem,reverse=0,original;
	printf("Enter the no\n");
	scanf("%d",&num);
	original=num;
	while(num!=0){
		rem=num%10;
		reverse=reverse*10+rem;
			num/=10;
	}
	if(original==reverse){
			printf("No is palindrome\n");
	}
	else{	
		printf("no is not palindrome\n");
	}
}
