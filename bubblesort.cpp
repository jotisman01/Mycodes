#include<stdio.h>
void bubblesort(int arr[],int size){
	int i,j,temp;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void printarray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
	}
}
int main(){
	int arr[5],i;
	printf("Enter the elements in array\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	bubblesort(arr,5);
	printarray(arr,5);
}


