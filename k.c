#include<stdio.h>
int sum(int n);
int main()
{    
    printf("Start\n");
    printf("sum of n numbers: %d\n",sum(88));
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1=sum(n-1);
    int sumN=sumNm1+n;
}