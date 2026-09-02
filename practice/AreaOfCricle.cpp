#include <iostream>
using namespace std;
#define PI 3.1415926  // macros


float square(float n){
    return n*n;
}
double AreaOfCricle( float radius){
   return square(radius)*PI; 
}

int main() {
    double result = AreaOfCricle(23);
    cout<<"Area of circle is: "<<result; 


    

}