#include<stdio.h>
int gcd(int n,int m){
int i,t;
if(n>m){
   t=n;
   m=n;
   n=t;
}
for(i=n;i>0;i--){
	if(n%i==0&&m%i==0){
		return i;
	}
}

}

int main(){
	int b,g,a;
	printf("Enter two number to find their GCD\n");
	scanf("%d %d",&a,&b);
   g=gcd(a,b);
   printf("The GCD of two numbers is %d ",g);
}
