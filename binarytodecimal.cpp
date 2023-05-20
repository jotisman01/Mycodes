#include<stdio.h>
#include<math.h>
int main(){
	int num,decimal=0,i=0,rem;
	printf("Enter the no\n");
	scanf("%d",&num);
	while(num>0){
		rem=num%10;
		decimal=decimal+rem*pow(2,i);
		num/=10;
		i++;
	}
	printf("%d\n",decimal);
}
