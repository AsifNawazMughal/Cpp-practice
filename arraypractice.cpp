#include <iostream>
#include <array>
using namespace std;

int main() {
    // declaring an array
    int age[10];   // here 10 is refering to the size of array
    // cout<<age<<endl;   // as no value is assigned it shows a carbage value

    // // assigning the values to our array
    // age[0] = 23;    // assigning 23 to index 0  ( means first values)
    // cout<<age[0]<<endl;
    // age[1] = 22;
    // cout<<age[1]<<endl;

    // declaring and initializing ( defning)

    int count[7] = {23,343,12,343,134,34,123};
    // cout<<count[0]<<endl;

    // getting average of count 

    int n  = size(count);
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += count[i];
    }
    cout << sum << endl;

    float average =(float)sum/n; 

    cout<<average; 
}