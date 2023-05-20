#include<stdio.h>
int main(){
	int a,b,t,rem;
	printf("Start\n");
	scanf("%d %d",&a,&b);
	if(a>b){
		t=a;
		a=b;
		b=t;
	}
	while(a%b>0){
		rem=a%b;
		a=b;
		b=rem;
	}
	printf("Gcd is %d\n",b);
}
