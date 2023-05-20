#include<stdio.h>
int main(){
	int num,i,rem,fact,a,sum=0;
	printf("Enter the no.\n");
	scanf("%d",&num);
	a=num;
	while(num>0){
	  rem=num%10;
	  fact=rem;
	for(i=1;i<rem;i++){
	 	fact=fact*i;
	}
	sum=sum+fact;
	num/=10;
}
	if(sum==a){
		printf("number is krishnamurthy no.\n");
	}
	else{
		printf("Not krishnamurthy\n");
	}
	
}
