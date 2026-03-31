#include<iostream>
using namespace std;

int main(){

    // ===== Program 1 : Take a number (1–7) and print corresponding day of week =====
    // Example: 1 → Monday

     int day;
     cin>>day;
     switch(day){
        case 1:cout<<"Monday";
        break;
        case 2:cout<<"Tuesday";
        break;
        case 3:cout<<"Wednesday";
        break;
        case 4:cout<<"Thursday";
        break;
        case 5:cout<<"Friday";
        break;
        case 6:cout<<"Saturday";
        break;
        case 7:cout<<"Sunday";
        break;
        default:cout<<"Invalid input";
     }

    // ===== Program 2 : Take two numbers and an operator (+, -, *, /) and perform calculation =====

    // ===== Program 3 : Take a number (1–12) and print month name =====

    // ===== Program 4 : Create simple menu driven program =====
    // 1 → Area of square
    // 2 → Area of rectangle
    // 3 → Exit

    // ===== Program 5 : Take a character and check whether it is vowel or consonant using switch =====

    return 0;
}