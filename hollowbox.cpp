#include<iostream>
using namespace std;
int main(){
    int r,c;
cout<<"Enter no of row and colunm"<<endl;
cin>>r>>c;
for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
        if(i==1||j==r||j==1||i==c){
           cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
}

