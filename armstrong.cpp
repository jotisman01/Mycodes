#include<stdio.h>
#include<math.h>
int main (){
	int num,a,rem,sum=0;
	printf("Enter the no.\n");
	scanf("%d",&num);
	a=num;
	while(num>0){
		rem=num%10;
	    sum=sum+pow(rem,3);
	    num/=10;
	}
	if(sum==a){
		printf("number is armtsrong no.\n");
	}
	else{
		printf("Not armstrong");
	}
		
}
