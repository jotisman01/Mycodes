#include <stdio.h>


int fib_recursive(int n)
{
    if(n==1 || n==2){
        return n-1;
    }
    else{
        return fib_recursive(n-1) + fib_recursive(n-2);
    }    
}


int fib_iterative(int n)
{
	int i=0;
    int a = 0;
    int b = 1;

    for ( i < n-1)
    {
        b = a+b; //1 for iteration 1
        a = b-a; //1 for iteration 1
i=i+1;
    }
    
    return a;
}

int main()
{
    int number;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d", &number);
    printf("The value of fibonacci number at position no %d using iterative approach is %d\n",number, fib_iterative(number));
    printf("The value of fibonacci number at position no %d using recursive approach is %d\n", number, fib_recursive(number));
    return 0;
}
