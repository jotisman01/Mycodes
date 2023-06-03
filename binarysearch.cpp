#include<iostream>
using namespace std;
int search(int arr[],int n,int k){
  int s=0,e=n-1;
  int m=s+(e-s)/2;
  while(e>s){
    if(arr[m]==k){
        return m;
    }
    else if(arr[m]>k){
        e = m-1;
    }
    else if(arr[m]<k){
        s = m+1;
    }
    else{
        return -1;
    }
    m=s+(e-s)/2;
  }
}

int main(){
    int  k,index;
    int arr[6];
    cout<<"Start"<<endl;
 
    cin>>k;
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    index = search(arr,6,k);
    cout<<"For element"<<k<<"index is"<<index;
}
