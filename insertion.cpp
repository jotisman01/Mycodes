#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,5,2,7,3,9,10,4};
    cout<<"Start\n";
    for(int i=1;i<=7;i++){
        int j=i-1;
        int temp=arr[i];
        for(;j>=0;j--){
         if(arr[j]>temp){
            arr[j+1]=arr[j];
         }
         else{
            break;
         }
        }
      arr[j+1]=temp;
    }
    for(int i=0;i<8;i++){
        cout<<arr[i]<<"\t";
    }
}

