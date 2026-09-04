#include <iostream>
using namespace std; 

int main()
{
    int c[100];
    int i = 0, z = 0; // Initialize z so the while condition is safe
    
    while(i < 100 && z != -1){
        cout << "User enter a number: ";
        cin >> z; 
        if(z != -1){
            c[i] = z;  
            i++; 
        }
    }
    
    for(int j = 0; j < i; j++){
        cout << c[j] << " "; 
    }
    return 0;
}