#include<stdio.h>
#include<string.h>
int main()
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
}
