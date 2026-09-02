#include <iostream>
using namespace std;

int IsEven(int Number){
  return (Number/2)*2 == Number? 1: 0; 
}

int main() {
     int Number = 23; 

     if(IsEven(Number)){
        cout<<"Number is even";
     }else{
        cout<<"number is Odd";
     }
}