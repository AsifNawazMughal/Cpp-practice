#include <iostream>
using namespace std; 
int main(){
    /*This program calculates the discount amount for a customer. As different discount
percentage applies on different amount so program is using ternary operator for deciding
which discount is applicable and display the result*/

    float amount, discount;
     
    cout<<"How much of money you have spent in glocery: "; 
    cin>>amount;
    float result = amount>5000? (amount*0.90):amount;
    cout<<result;
    cout<<endl;

}