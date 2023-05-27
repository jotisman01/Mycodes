#include<stdio.h>
int main(){
	int i,j,n,arr[100];
	printf("Enter the number whoes binary you want\n");
	scanf("%d",&n);
	for( i;n>0;i++){
		arr[i]=n%2;
		n/=2;
	}
	printf("The binary of the number is \n");
	for( j=i-1;j>=0;j--){
		printf("%d",arr[j]);
	}
}
