#include<stdio.h>;
int main(){
    int i,n;
    	int k=1;
    printf("Start\n");
     scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        printf("%d\t",k);
        k=k+1;
        }
        printf("\n\n");
    }
}
