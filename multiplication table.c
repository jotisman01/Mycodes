#include<stdio.h> 
 main()
{
	int a,b,c=a*b;
	printf("enter the number you want multiplication\n");
	scanf("%d",&a);
	for(b=0;b<=30;)
	{
		printf("%d*%d=%d\n",a,b,c);
		c=b*a;
		b=b+1;
	}
}

