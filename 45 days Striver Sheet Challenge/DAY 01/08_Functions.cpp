#include<iostream>
using namespace std;

// ===== Function 1 : Take a number and return its square =====
//  int square(int a){
//     return a*a;
//  }
 
// ===== Function 2 : Take two numbers and return maximum =====

// ===== Function 3 : Swap two numbers using pass by value =====
//    void swap(int c,int d){
//             int temp=c;
//             c=d;
//             d=temp;
//             return;
//          }
// ===== Function 4 : Swap two numbers using pass by reference =====

//  void swap(int &c,int &d){
//             int temp=c;
//             c=d;
//             d=temp;
//             return;
//          }

// ===== Function 5 : Take a number and check EVEN or ODD (return type: bool) =====

// ===== Function 6 : Count digits of a number using function =====

int main(){

     // call above functions here

    // int n;
    // cin>>n;
    // cout<<square(n);
    
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;



    return 0;
}