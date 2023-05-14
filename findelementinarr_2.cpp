#include<iostream>
using namespace std;
bool search(int arr[],int n,int m){
  for(int i=0;i<n;i++){
    if(arr[i]==m){
     return 1;
    }
    return 0;
  }
  
}
int main(){
  int m;
  int arr[10]={1,2,3,4,5,6,7,8,9,0};
  cout<<"Enter the element you want in array"<<endl;
  cin>>m;
  bool k=search(arr,10,m);
  if(k){
    cout<<"The element is "<<m<<endl;

  }
  else{
    cout<<"Element not found"<<endl;
  }
}