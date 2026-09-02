#include <iostream>
using namespace std;

void swap(int a, int b){
    cout<<"Before swap a = "<<a<<" and b = "<<b<<endl;
    int temp = a; 
    a = b; 
    b = temp; 

    cout<<"After swap a = "<<a<<" and b = "<<b<<endl;
}

int main() {
    swap(23,34);
}