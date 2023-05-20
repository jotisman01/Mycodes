#include<stdio.h>
int main(){
	int i,num;
	float sum=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		sum=sum+(float)1/i;
	}
	printf("The sum is %f\n",sum);
}
