#include<iostream>
using namespace std;
// int main(){     /*   ******
//                       ***** 
//                        ****
//                          ** 
//                           * */
//         int n;
//     cin>>n;
//     for(int i=0;i<=n;i++){
//      for(int j=0;j<=i;j++){
//           cout<<" "<<" ";
//      }
//      for(int k=n-i;k>=0;k--){
//           cout<<"*"<<" ";
//      }
//      cout<<endl;
//     }

// }

// int main(){    /* 1
//                   1 2
//                   1 2 3
//                   1 2 3 4
// */

//      int n;
//      cin>>n;
//      for(int i=0;i<=n;i++){
//           for(int j=1;j<=i;j++){
//                cout<<j<<" ";

//           }
//           cout<<endl;
//      }
// }

// int main(){/*

// // * * * * *
// // * * * *
// // * * *
// // * *
// // *

// // */
//      int n;
//      cin>>n;
//      for(int i=0;i<=n;i++){
//   for(int j=n-i;j>=0;j--){
//      cout<<"*"<<" ";
//   }
//   cout<<endl;
// }
// }

// int main(){   /*
//           *
//         * *
//       * * *
//     * * * * 
//   * * * * *

// */
//      int n;
//      cin>>n;
//      for(int i=0;i<=n;i++){
//           for(int j=n-i;j>=0;j--){
//                cout<<" "<<" ";

//           }
//             for(int k=1;k<=i;k++){
//                cout<<"*"<<" ";

//           }
//           cout<<endl;
//      }
// }

int main(){  /*
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * * 
  * * * * * * * * * * *
    * * * * * * * * * 
      * * * * * * *
        * * * * *
          * * *
            *
*/
     int n;
     cin>>n;
     for(int i=0;i<=n;i++){

           for(int k=n-i;k>=0;k--){
               cout<<" "<<" ";

          }
            for(int h=1;h<=i;h++){
               cout<<"*"<<" ";

          }
          for(int j=0;j<=i;j++){
               cout<<"*"<<" ";

          }
          cout<<endl;
     }
     for(int i=1;i<=n;i++){
     for(int j=0;j<=i;j++){
          cout<<" "<<" ";
     }
     for(int k=n-i;k>=0;k--){
          cout<<"*"<<" ";
     }
         
  for(int j=n-i;j>=1;j--){
     cout<<"*"<<" ";
  }
     cout<<endl;
    
}
}
