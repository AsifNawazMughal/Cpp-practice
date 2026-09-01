#include <iostream>
using namespace std; 


// input user =>  upper limit  => sum of even number -> print

int main(){

    int upperLimit; 
    int i = 0, sum = 0; 
    cout<<"Enter a limit to get sum of even numbers:  ";
    cin>>upperLimit; 
    

    do{
        if(i%2 == 0){
            sum+=i; 
        }
        
        i++; 

    } while(i<=upperLimit);


    cout<<sum;

}