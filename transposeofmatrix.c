#include<stdio.h>
int main(){
	int a[10][10],i,j,r,c;
    printf("Enter your matrix\n");
    printf("Enter how much row and column present\n");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;++i){
    	for(j=0;j<c;++j){
    		printf("Enter a%d%d\n",i+1,j+1);
    		scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is\n");
	    for(i=0;i<r;++i){
    	for(j=0;j<c;++j){
    		printf("%d",a[i][j]);
   
		}
		printf("\n");
	}
	printf("The transpose of the matrix is\n");  
		    for(j=0;j<r;++j){
    	for(i=0;i<c;++i){
    		printf("%d",a[i][j]);
   
		}
		printf("\n");
	}
}
