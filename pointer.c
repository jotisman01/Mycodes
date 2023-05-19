#include<stdio.h>
int swap(int *a,int *b);// code for swapping values by reference
int main()
{ 
//     int age=22;
//     int *ptr=&age;
//     int **pptr=&ptr;
//     printf("%u",&pptr);
int x=3,y=5;
swap(&x,&y);
printf("The value of x=%d and y=%d",x,y);
return 0;
}
int swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
