#include<iostream>
using namespace std;
int swap(int arr[],int k){
    for(int i=0;i<k;i+=2){
        if(i+1<k){
            swap(arr[i],arr[i+1]);
           
        }
    }
}
void printarray(int arr[],int k){
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6]={1,2,3,2,4,5};
    int arr_b[5]={2,4,6,9,8};

    swap(arr,6);
    swap(arr_b,5);

    printarray(arr,6);
    printarray(arr_b,5);

}