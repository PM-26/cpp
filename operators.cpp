#include <iostream>
using namespace std;
int main()
{

    cout << "Enter first number->";
    int a;
    cin >> a;

    cout << "Enter second number->";
    int b;
    cin >> b;

    cout << "Enter operator->";
    char operate;
    cin >> operate;

    if (operate == '+')
    {
        cout << "Answer->" << a + b << endl;
    }
    else if (operate == '-')
    {
        cout << "Answer->" << a - b << endl;
    }
    else if (operate == '*')
    {
        cout << "Answer->" << a * b << endl;
    }
    else if (operate == '/')
    {
        cout << "Answer->" << a / b << endl;
    }
    else
    {
        cout << "Enter a valid operator please.";
    }

    return 0;
}