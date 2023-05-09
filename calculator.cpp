#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number a"<<endl;
    cin>>a;
    cout<<"Enter the number b"<<endl;
    cin>>b;
    char op;
    cout<< "Enter which opration you want |+|-|*| / |"<<endl;
    cin>>op;
    switch (op)
    {
    case  '+' :
    cout<<"The addition is "<<a+b<<endl;
        break;
    case '-':
    cout<<"The substraction is "<<a-b<<endl;
    break;
    case '*':
    cout<<"The multiplication is "<<a*b<<endl;
    break;
    case '/':
    cout<<"The division is "<<a/b<<endl;
    break;
    default: 
    cout<<"Not a valid input"<<endl;
        break;
    }
}