#include<stdio.h>
int main(){
	int i,n,a=0,b=1,c;
	printf("Start\n");
	scanf("%d",&n);
			for(i=0;i<=n;i++){
             c=a+b; 
			 a=b;
			 b=c;
			 printf("%d\n",a);  
		}
}

