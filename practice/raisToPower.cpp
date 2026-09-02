#include <iostream>
using namespace std;
/**
 * Calculate the integer power of some number (x,n)
 */

int raisToPower(int number, int pwr){
     int result = 1;
    for(int i = 1; i<= pwr; i++){
        result *= number; 
    }

    return result; 
}

int main() {
   int result =  raisToPower(4,10);
   cout<<result<<endl;
}