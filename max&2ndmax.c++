 #include<stdio.h>
 
 int main(){
    int n,arr[100],max1,max2;
    printf("Enter the numbers in array\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
    }
  max1=arr[1];
  max2=arr[0];
  if(max2>max1){
    max1=arr[0];
    max2=arr[1];
  }
  for(int i=0;i<n;i++){
    if(max1<arr[i]){
      max2=max1;
      max1=arr[i];
    }
  }
  printf("%d %d",max1,max2);
 }