#include<stdio.h>
#include<string.h>
int main(){
  char string[100];
   int i, flag = 0,length=0;
   printf("Enter the string\n");
   gets(string);
  
    for(i=0;string[i]!='\0';i++){
       length++;
  }
 
  for(i=0;i<length/2;i++){
    if(string[i]!=string[length-1-i]){
      flag=1;
      break;
    }
  }

  if(flag){
    printf("string is not palindrome\n");
  }
  else{
       printf("string is palindrome\n");
  }
}
