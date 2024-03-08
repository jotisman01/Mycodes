#include<stdio.h>
#include<string.h>
int getarray(int arr[50],int n){
    printf("Enter the values\n");
      for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
      }
}
int main(){
    int n,add,s,m,d,i,a[100];
    char ch;
     printf("Enter how many variables want to operate\n");
     scanf("%d",&n);
    if(n>2){
      printf("only addition and multiplication is possible\n");
      printf("For Multiplication choose * and For Addition choose +\n");
      scanf("%s",&ch);
      if(ch=='*'){
       getarray(a,n);
        m=1;
        for(i=0;i<n;i++){
            m=m*a[i];
        }
        printf("Multiplication is %d\n",m);
      }
      else if(ch=='+'){
        getarray(a,n);
        add=0;
        for(i=0;i<n;i++){
            add=add+a[i];
        }
        printf("Addition is %d\n",add); 
      }
      else{
        printf("You have choosen wrong\n");
      }
    }
    else{
      printf("All operation possible\n");
      printf("For Multiplication tap * , For Addition tap +, For Substraction tap - , For Division tap / \n");
      scanf("%s",&ch);
      if(ch=='*'){
       getarray(a,n);
        m=1;
        for(i=0;i<n;i++){
            m=m*a[i];
        }
        printf("Multiplication is %d\n",m);
      }
      else if(ch=='+'){
        getarray(a,n);
        add=0;
        for(i=0;i<n;i++){
            add=add+a[i];
        }
        printf("Addition is %d\n",add); 
      }
      else if(ch=='-'){
        getarray(a,n);
        if(a[0]>a[1]){
            s=a[0]-a[1];
        }
        else{
            s=a[1]-a[0];
        }
        printf("The substraction is %d\n",s);
      }
      else if(ch=='/'){
        getarray(a,n);
        if(a[0]>a[1]){
            d=(a[0])/(a[1]);
        }
        else{
            d=(a[1])/(a[0]);
        }
        printf("Division is %d",d);
      }
      else{
         printf("You have choosen wrong\n");
      }
    }
}