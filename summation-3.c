#include<stdio.h>
int main(){
	int i,j,k,num;
    char star='*';
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){
			printf(" ");
		}
				for(k=0;k<=num-i;k++){
			printf("%c",star);
		}
	
	printf("\n");
}
}
