#include <iostream>
using namespace std;
void addition(int a, int b)
{
    cout << "Addition is " << a + b;
}
void subtraction(int a, int b)
{
    cout << "Subtraction is " << a - b;
}
void multiplication(int a, int b)
{
    cout << "Multiplication is " << a * b;
}
void division(int a, int b)
{
    if (b != 0)
    {
        cout << "Division is " << a / b;
    }
    else
    {
        cout << "Denominator is 0";
    }
}
int main()
{
    int choice, n1, n2;
    cout << "Enter 1 for addition" << endl
         << "Enter 2 for subtraction" << endl
         << "Enter 3 for multiplication" << endl
         << "Enter 4 for division" << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    cout << "Enter first number : ";
    cin >> n1;
    cout << "Enter second number : ";
    cin >> n2;

    switch (choice)
    {
    case 1:
        addition(n1, n2);
        break;
    case 2:
        subtraction(n1, n2);
        break;
    case 3:
        multiplication(n1, n2);
        break;
    case 4:
        division(n1, n2);
        break;
    default:
        break;
    }
    return 0;
}