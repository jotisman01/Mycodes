#include<iostream>
using namespace std;
int fibonacci( int i){
    if (i==0){
        return 0;
    }
  else if(i==1||i==2){
    return 1;
  }
  else{
   return fibonacci(i-1)+fibonacci(i-2);
  }
}
int main(){
    int n;
cout<<"Start"<<endl;
cin>>n;
cout<<fibonacci(n);
getchar();
}