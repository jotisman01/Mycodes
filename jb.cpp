#include<iostream>
#include<cmath>
using namespace std;
// int fact(int n);
// int main(){                          // code for factorial
//     int n;
//     cout<<"Enter the number which factorial u want:"<<endl;
//     cin>>n;
//     cout<<"The factorial of the number is:"<<fact(n)<<endl;
// }
// int fact(int n){
//     if(n==0||n==1){ 
//         return 1;
//     }else{
//         return n*fact(n-1);
//     }
// }

// int main(){
//     int a=2,b=3;    //code for use of math header files
//     int n=888.99;
//     cout<<"The sum of 2 numbers is:"<<a+b<<endl;
//      cout<<pow(a,b)<<endl;//a^b
//       cout<<min(a,b)<<endl;
//        cout<<max(a,b)<<endl;
//      cout<<exp(b)<<endl;//e^b
//       cout<<(float)sqrt(n)<<endl;//(n)^1/2
//        cout<<round(n)<<endl;//making rounded to int
//      cout<<log(b)<<endl;
//       cout<<tan(a)<<endl;
//        cout<<atan(a)<<endl;//arctan value
//         cout<<sin(b)<<endl;
//      cout<<hypot(a,b)<<endl;//sqrt of (a^2+b^2)
//       cout<<expm1(a)<<endl;//e^a-1
//        cout<<fma(a,b,n)<<endl;// a*b+n
//      cout<<fmod(a,b)<<endl;// remainder of a/b
// }

// int main(){
//     int n;
// cout<<"Enter the number whoes Table you want:"<<endl;
// cin>>n;
//  cout<<"The table of the number:"<<endl;
// for(int i=0;i<=n;i++){
//   cout<<i*n<<endl;
// }


//    cout<<"Enter the number "<<endl;// code for printing any even number for a given number
// cin>>n;
//    for(int i=2;i<=n;i+=2){
//     cout<<i<<endl;
//    }
// cout<<"Enter the number "<<endl; //code for printing odd  numbers for a given number
// cin>>n;
// for(int i=1;i<=n;i+=2){
//     cout<<i<<endl;
// }
// }


// int main(){
//     int n,sum=0,number=1; //code for printing sum of numbers from 1 to n
//     cout<<"Enter the number whoes continuos sum you want"<<endl;
//     cin>>n;
//     cout<<"The continuous sum is ="<<endl;
//     for(number;number<=n;number++){
//      sum=sum+number;
//     }
//       cout<<sum<<endl;
// }


// int main(){ //code for making same colume row star pattern
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<n){
//         int j=1;
//         while(j<=n){
//             cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


// int main(){ //code for making same colume row star pattern
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<i;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


// int main(){     /* code for pattern of 1234
//                                        1234
//                                        1234
//                                        1234 */
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


// int main(){   /*code for pattern 4321
//                                  4321
//                                  4321
//                                  4321*/
//   int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<n-j+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }


// }
// int main(){                /*pattern for 1 2 3 4
//                                             5 6 7 8
//                                             9 10 11 12
//                                             13 14 15 16*/
//  int count =1,n,i=1;
//  cin>>n;
//  while(i<=n){
//   int j=1;
// while(j<=n){
//     cout<<count<<" ";
//     count=count+1;
//     j=j+1;
//     }
//     cout<<endl;
//   i=i+1;
// }
// }


// int main(){       // code for triangular pattern making
//     int n;
//     int row=1;
//     cin>>n;
//     while(row<=n){
//         int column=1;
//         while(column<=row){
//             cout<<"*";
//             column=column+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }


// int main(){  /* code for 1
//                          2 3
//                          4 5 6
//                          7 8 9 10
//                          11 12 13 14 15*/
//     int n;
//     int count=1;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//          int column=1;
//         while(column<=row){
//       cout<<count<<" ";
//      count=count+1;
//      column=column+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }


// int main(){   /* 1
//                  2 3
//                  3 4 5
//                  4 5 6 7
//                  5 6 7 8 9*/
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//          int column=1,value=row;
//          while(column<=row){
//             cout<<value<<" ";
//             value=value+1;
//             column=column+1;
//          }
//          cout<<endl;
//          row=row+1;
//     }
// }


// int main(){   /* A A A
//                  B B B
//                  C C C*/
//     int n;
//     cin>>n;
//     int i=1;
//     char ch='A';
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<ch<<" ";
//             j=j+1;
//         }
//         ch=ch+1;
//         cout<<endl;
//         i=i+1;
//     }
// }


// int main(){   /*A B C
//                 A B C
//                 A B C*/
//     int i=1,n; 
//     cin>>n;
//     while(i<=n){
//         int j=1;
//          char ch='A'+j-1;
//         while(j<=n){
//             cout<<ch<<" ";
//             ch=ch+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int space=n-i;
//         while(space){
//         cout<<" ";
//         space=space-1;
//         }
//      int j=1;
//         while(j<=n){
//             cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }
// int main(){
//     int n,i=1;
//     cin>>n;
//     while(i<=n){
//         int space=n-i;
//         while(space){
//             cout<<" ";
//             space=space-1;
//         }
//         int j=1;
//         while(j<=i){
//             cout<<"*";
//             j=j+1;
//         } 
//         cout<<endl;
//         i=i+1;
//     }
// }


// int main(){            /*code for printing 1234554321
//                                            1234**4321
//                                            123****321
//                                            12******21
//                                            1********1
//                                            ********** */
//     int n,i=0;
//     cout<<"Start"<<endl;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n-i){
//             cout<<j;
//             j=j+1;
//         }
//         int k=0;
//         while(k<i){
//             cout<<"*";
//             k=k+1;
//         }
//         int star=1;
//         while(star<=i){
//             cout<<"*";
//             star=star+1;
//         }
//         int g=n;
//         while(g>i){
//             cout<<g-i;
//             g=g-1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// int main(){          /*code for substarct product - sum of digits of a given integer*/
//     int n, prod=1,sum=0;
//     cout<<"Start"<<endl;
//     cin>>n;
//     while(n!=0){
//         int remainder=n%10;
//         prod=prod*remainder;
//         sum=sum+remainder;
//         n=n/10;
//     }
//     int answer=prod-sum;
//     cout<<answer<<endl;
// }


// int main(){         /* Hamming waeight ---> Counts no of 1 bits in an integer*/
//     int n,count=0;
//     cin>>n;
//     while(n!=0){
//         if(n&1){
//             count++;
//         }
//         n=n>>1;
//     }
//     cout<<count<<endl;
// }


// int main(){                 /* code for reversing integers*/
//     int num,digit,ans=0;
//     cout<<"Star"<<endl;
//      cin>>num;
//      while(num!=0){
//         digit=num%10;
//         ans=(ans*10)+digit;
//         num=num/10;
//      }
//      cout<<ans<<endl;
    
// }