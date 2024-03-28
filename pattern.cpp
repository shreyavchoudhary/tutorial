
                                        // SOLID RECTANGLE PATTERN //

// #include <iostream>
// using namespace std;

// int main() {
//     //outer loop row k leye
//     for(int row=0; row<3; row++ )
//     {
//         // inner loop colk leye 
//         for (int col=0; col<5; col++ )
//         {
//             cout << " * ";
//         }
//         cout << endl;
//     }
    
// }



                                          ///  square pattern //

// #include <iostream>
// using namespace std;

// int main() {
//     {
//         cout << " square pattern " << endl;
//     }
//     for(int row=0; row<4; row++ )
//     {
//         for (int col=0; col<4; col++ ) 
//         {
//             cout << " * ";
//         }
//         cout << endl;
//     }
    
// }


                                               // input  cin //
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     int m;
//     cin >> n;
//     cin >> m;
//     for(int row=0; row<n; row++ )
//     {
//         for (int col=0; col<m; col++ ) 
//         {
//             cout << " * ";
//         }
//         cout << endl;
//     }
    
// }
 

                                           // hollow rectangle//
// #include <iostream>
// using namespace std;

// int main() {
//     for(int row=0; row<3; row++){
//         if(row==0 || row==2)
//         {
//             for(int col=0; col<5; col++)
//             {
//             cout << " * ";
                
//             }
//         }
//     else
//     {
//         cout << " * ";
//         for(int col=0; col<4; col++)
//         {
//         cout << "  " ;
            
//         }
//         cout << " * ";
//          }
//          cout << endl;
//          }

//     //return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int rowcount;
//     int colcount;
    
//     // cin >> rowcount;
//     cin >> colcount;
//     cin >> rowcount;
//     for(int row=0; row<rowcount; row++){
//         if(row==0 || row==rowcount-1)
//         {
//             for(int col=0; col<colcount; col++)
//             {
//             cout << " *";
//             }
//         }
//     else
//     {
//         cout << " *";
//         for(int i=0; i<colcount-2; i++){
//         cout << "  " ;
//         }
//         cout << " *";
//         // {
//         //  cout << endl;
//         // }
//     }
//     {
//          cout << endl;
//          }

//     }
    

//     //return 0;
// }



                                          ///HALF PYRAMID//


#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int row=0; row<n; row++)
    {
        for(int col=0; col<row+1; col++)
        {
            cout << " *";
        }
        cout << endl;
    }

}