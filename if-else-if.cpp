#include <iostream>
using namespace std;
int main(){
    int a,b; 
    char opt; 
    cout<<"Enter two numbers one by one: ";
    cin>>a>>b;
    cout<<"Enter a operator you want to perform on these number: "; 
    cin>>opt; 

    if(opt == '+') cout<<"sum of two number: "<<a+b;
    else if(opt == '-') cout<<"Subs of two number is: "<<a-b;
    else if(opt == '*') cout<<"multiply of two number is: "<<a*b;
    else if(opt == '/') cout<<"Division of two numbers is: "<<a/(float)b;
    else if(opt == '%') cout<<"Modulus of two number is: "<<a%b;
    else cout<<"You have entered a wrong operator";

    cout<<endl;
}