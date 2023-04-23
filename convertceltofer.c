#include<stdio.h>
float converttemp(float celcius);
float main()
{
float far = converttemp(0);
printf("The temperature in ferhenhite is %f",far);
return 0;
}
float converttemp(float  celcius){
 float far = celcius*(9.0/5.0)+32;
 return far;
}