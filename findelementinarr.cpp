#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
  for(int i=0;i<size;i++){
    if(arr[i]==key){
      return 1;
    }
  }
     return 0;  
}
int main(){
    int key;
    int arr[10]={-2,24,12,7,1,-6,8,3,-9,5};
    cout<<"Enter the element you search in array"<<endl;
    cin>>key;
    bool m = search(arr,10,key);
    if(m){
        cout<<"The element is"<<key<<endl;
    }
    else{
        cout<<"The element cant founded"<<endl;
    }
}