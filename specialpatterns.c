#include<stdio.h>      /*    code for 1
                                      2 3
                                      4 5 6 
                                      7 8 9 10 */
int main(){
    int n, count=1;
    printf("Start\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",count);
            count++;
        }
        printf("\n");
    }
}

int main(){     /* code for  1
                           1 2 1 
                         1 2 3 2 1 */
    int n;
    printf("start\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++)
        {
          printf(" ");
        }
    for(int l=1;l<=i;l++){
        printf("%d",l);
    } 
         for(int p=i-1;p>0;p--){
        printf("%d",p);
    } 
    printf("\n");
    }
}

