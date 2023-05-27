#include<stdio.h>
int main(){
	int a1[10][10],a2[10][10],add[10][10],i,j,r,c;
    printf("Enter your matrix\n");
    printf("Enter how much row and column present\n");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
    	for(j=0;j<c;j++){
    		printf("Enter a%d%d\n",i+1,j+1);
    		scanf("%d",&a1[i][j]);
		}
	}
	   for(i=0;i<r;i++){
    	for(j=0;j<c;j++){
    		printf("Enter a%d%d\n",i+1,j+1);
    		scanf("%d",&a2[i][j]);
		}
	}
   printf("The addition of 2 matrixes is:\n");
   for(i=0;i<r;i++){
   	for(j=0;j<c;j++){
   		add[i][j]=a1[i][j]+a2[i][j];
	   }
   }
   for(i=0;i<r;i++){
   	for(j=0;j<c;j++){
   		printf("%d",add[i][j]);
	   }
	   printf("\n");
   }
}
