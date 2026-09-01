#include <iostream>
using namespace std;

void printName(string name, int age){
    cout<<endl<<"Your entered name is: "<<name; 
    cout<<endl<<"Your age is: "<<age;
   }

int main() {
    // call function
    printName("Rizwan",25);

    printName("Asif",23);

}