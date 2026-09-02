#include <iostream>
using namespace std;

// reccursion 
int fact(int n){
    if(n<=0){
        return 1; 
    }
    return n*fact(n-1);
}

int main() {
   int result = fact(3);

   cout<<result;
}