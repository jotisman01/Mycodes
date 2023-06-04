#include<iostream>
using namespace std;
int main(){
	int arr[10]={2,4,6,7,0,1,10,25,12,11};
	cout<<"start"<<endl;
	for(int i=0;i<9;i++){
		int minIndex=i;
        for(int j=i+1;j<10;j++){
			if(arr[j]<arr[minIndex]){
				minIndex=j;
			}
		}
		swap(arr[i],arr[minIndex]);
	}
	for(int i=0;i<10;i++){
		cout<<arr[i]<<endl;
	}
}
