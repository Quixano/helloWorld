#include <iostream>

using namespace std;

int main()
{
    int firstArgument;
    int secondArgument;

    cout << "Enter the first argument:  "<<endl;
    cin >> firstArgument;
    cout << "Enter the second argument:  "<<endl;
    cin >> secondArgument;

    cout << "Multiplication: " << firstArgument * secondArgument << endl;
    cout << "Division: " << firstArgument/secondArgument<<endl;
    cout << "Addition: " << firstArgument+secondArgument<<endl;
    cout << "Subtraction: " <<firstArgument-secondArgument<<endl;
}
