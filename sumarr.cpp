#include<iostream>
using namespace std;
int main(){
  int arr[100];
  int m,sum=0;
  cout<<"Enter how much element you want in array"<<endl;
  cin>>m;
  cout<<"Define elements in array"<<endl;
  for(int i=0;i<m;i++){
    cin>>arr[i];
  }
    for(int i=0;i<m;i++){
    sum=sum+arr[i];
  }
  cout<<"The sum of element in your array is\t"<<sum<<endl;

}