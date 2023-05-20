#include<stdio.h>
#include<math.h>
int main(){
	int i,num;
	float sum=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		int j,fact=i;
		for(j=1;j<=i;j++){
			fact=fact*j;
		}
		sum=sum+(float)i/fact;
	}
	printf("The sum is %f\n",sum);
}
