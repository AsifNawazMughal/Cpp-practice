#include <iostream>
using namespace std;
int a, b;
int Add(int a, int b)
{
    return a + b;
}
void display()
{
    cout << "the sum is: " << Add(a, b) << endl;
}
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "You can join club" << endl;

    }
    else
    {
        cout << "You cannot join club" << endl;
    }
    a = 23;
    b = 35; 
    Add(a,b);
    display();
    return 0;
}

