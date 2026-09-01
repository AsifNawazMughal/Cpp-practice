#include <iostream>
using namespace std;

   int add(int a, int b){
      return a+b; 
   }

   int sub(int a, int b){
    return a-b;
   }

   int mul(int a, int b){
    return a*b; 
   }

int main() {
    int a,b; 
    char opt; 
    int result = 0; 
    cout<<"enter 2 values: "; 
    cin>>a>>b; 
    cout<<" enter +, -, or * you want to perform ";
    cin>>opt;

    switch(opt){
        
        case '+':
             result = add(a,b);
             break;
        case '-':
             result = sub(a,b);
             break;
        case '*':
             result = mul(a,b);
             break;
        default: 
             cout<<"invalid entry";
    }

     cout<<result;
    
}