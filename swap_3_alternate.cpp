#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int swapalternate(int arr[],int n){
    for(int i=0;i<n;i+=3){
        swap(arr[i],arr[i+2]);
    }
}
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    swapalternate(arr,9);
    printarray(arr,9);

}