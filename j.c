#include<stdio.h>
#include<string.h>
// main(){         /* code for table of any number*/
// int n;
//  printf("Enter the number which table you want:\n");
//   scanf("%d",n);}
//   for(i=0;i<=n;i++){
//     printf("The tbale of the number is %d\n",i);
//   }

  /* int main() 
{ char maths[50];//decaration of char array
char science[50];//decaration of char array
printf("Give answer in yes of no");
printf("Are you passed maths");
scanf("%s",&maths);
printf("Are you passed in science ");
scanf("%s",&science);
//comparing the strings using strcmp() function
if((strcmp(maths,"yes")==0)&&(strcmp(science,"yes")==0))
{printf("you have passed both the subject so you will get 45$");
}
else if ((strcmp(maths,"yes")==0)&&(strcmp(science,"no")==0))
{printf("you have passed math only so you will get 15$");
}
else if ((strcmp(maths,"no")==0)&&(strcmp(science,"yes")==0))
{printf("you have passed science only so you will get 15 $ only");
}
}
#include<stdio.h>
main()*/


// int fib_recursive(int n)
// {
//     if(n==1 || n==2){
//         return n-1;
//     }
//     else{
//         return fib_recursive(n-1) + fib_recursive(n-2);
//     }    
// }


// int fib_iterative(int n)
// {
// 	int i=0;
//     int a = 0;
//     int b = 1;
//     for ( i < n-1)
//     {
//         b = a+b; //1 for iteration 1
//         a = b-a; //1 for iteration 1
// i=i+1;
//     }   
//     return a;
// }
// int main()
// {
//     int number;
//     printf("Enter the index to get fibonacci series\n");
//     scanf("%d", &number);
//     printf("The value of fibonacci number at position no %d using iterative approach is %d\n",number, fib_iterative(number));
//     printf("The value of fibonacci number at position no %d using recursive approach is %d\n", number, fib_recursive(number));
//     return 0;
// }


// int main(){
//     int n,sum=0;
//     printf("Enter the number whoes sum you want\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     printf("The sum is %d",sum); 
// }

// int factorial(int num)
// {
//     if(num==1|| num==0) {
//         return 1;
//     }
//     else{return num*factorial(num-1);
//     }
// }
// int main(){
//     int num;
//     printf("\n Enter no.");
//     scanf("%d",&num);
//     printf("\n the factorial of %d is %d",num,factorial(num));
//     return 0;
// }

 /*int main()
{
	char maths[50];
	char physics[50];
	char chemistry[50];
	printf("Answer the question in Yes or No");
	printf("are you passed in maths");
	   scanf("%s",&maths);
	printf("are you passed in physics");
	   scanf("%s",&physics);
	printf("are you passed in chemistry");
	   scanf("%s",&chemistry);
	if((strcmp(maths,"Yes")==0)&&(strcmp(physics,"Yes")==0)&&(strcmp(chemistry,"Yes")==0))
	{printf("you will be eligible for JEE MAIN examination");
	}
	else { printf("you will not be eligible for JEE MAIN examination");
	}
} */