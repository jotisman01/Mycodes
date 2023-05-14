#include<iostream>
using namespace std;
int revers(int arr[],int n){
    int start=0;
    int end=(n-1);
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[],int n){
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}
int main(){
    int arr_1[8]={1,2,3,4,5,6,7,8};
    int arr_2[9]={1,2,3,4,5,6,7,8,9};
    
    revers(arr_1,8);
    revers(arr_2,9);

    printarray(arr_1,8);
    printarray(arr_2,9);

    return 0;
}