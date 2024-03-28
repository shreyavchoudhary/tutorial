// #include <iostream>
// using namespace std;

// int add(int a,int b){
//     int result = a+b;
//     return result;
// }

// int main() {
//     int a;
//     int b;
//     cout << "Enter the value of a " <<endl;
//     cin >> a;
//     cout << "Enter the value of b " << endl;
//     cin >> b;
    
//     int sum = add(a,b);
//     cout << " additional value is " << endl;
//     cout << sum <<endl;
    
//     return 0;
// }



                                                   //FIND MAX 3 //

// #include <iostream>
// using namespace std;

// int findMax(int a, int b, int c){
//     if(a>b && a>c){
//         return a;
//     }
//     else if(b>a && b>c){
//         return b;
//     }
//     else {
//         return c;
//     }
// }

// int main(){

// int a,b,c;
// cout << "enter the value of a,b,c" << endl;
// cin >> a >> b>> c;

// int maximumNumber = findMax(a,b,c);
// cout << maximumNumber << endl;
    
// }


#include <iostream>
using namespace std;

char grade(int marks){
    if(marks >= 90){
        return 'A';
    }
    else if(marks >= 80){
        return 'B';
    }
    else if(marks >= 70){
        return 'C';
    }
    else if(marks >= 60){
        return 'D';
    }
    else {
        return 'E';
    }
}

int main(){
    int marks;
    cout << "Enter the value of marks- " << endl;
    cin >> marks;

    char Marks = grade(marks);
    cout << Marks << endl;
}