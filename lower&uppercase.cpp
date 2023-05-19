#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a>=65){
        if(a<=90){
            cout<<"Upper case"<<endl;
        }
        else{
        	cout<<"Lower case"<<endl;
		}
    }
   
    else{
        cout<<"Integer"<<endl;
    }

}
