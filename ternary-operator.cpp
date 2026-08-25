#include <iostream>
using namespace std; 
int main(){
   string statement; 
   int a,b;
   cout<<"Enter value of a: ";
   cin>>a;
   cout<<"Enter value of b: ";
   cin>>b;
   statement  = a > b?"A is greater than B": "B is greater than A";
   cout<<statement;
   cout<<endl;
}