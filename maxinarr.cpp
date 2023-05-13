#include<iostream>
using namespace std;
int getmax(int arry[],int n){
      int max=INT16_MIN;
      for(int i=0;i<n;i++){
      if(arry[i]>max){
       max=arry[i];
      }
      }
    return max;
}
int getmin(int arry[],int n){
      int min=INT16_MAX;
      for(int i=0;i<n;i++){
      if(arry[i]<min){
       min=arry[i];
      }
      }
    return min;
}
int main(){
    int size;
    cin>>size;
    int arry[100];
    for(int i=0;i<size;i++){
        cin>>arry[i];
    }  
   cout<<"Maximum value is"<<getmax(arry,size)<<endl;
   cout<<"Minimum value is"<<getmin(arry,size)<<endl;
}
