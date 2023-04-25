#include<iostream>
using namespace std;
int main(){
    int rem, n;
    cout<<"Enter the number to check whether it is prime or not\n";
    cin>>n;
   for (int i = 2; i < n; i++)
   {
     rem = n%i;
         if(rem == 0){
        cout<<"Number is not prime"<<endl;
        break;
       }
       else{
        cout<<"Number is prime"<<endl;
        break;
       }
   } 
}