#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    float num1;
    float num2;
    int funtionNumber;

    int add = num1 + num2;
    int multiply = num1 - num2;
    int into = num1 * num2;
    int by = num1 / num2;

    cout << "_______________________________________simple calculater___________________________________" << endl;
    cout << "enter your 1 number:";
    cin >> num1;

    cout << "" << endl;
    cout << "for addition enter \"1\" " << endl;
    cout << "for subtraction enter \"2\" " << endl;
    cout << "for multipilcation enter \"3\" " << endl;
    cout << "for divition enter \"4\" " << endl;
    cout << "" << endl;
    cout << "enter your number for funtion:";
    cin >> funtionNumber;
    cout << "" << endl;

    if (funtionNumber > 5 || funtionNumber < 0)
    {
        cout << "invalid function number" << endl;
    }
    else
    {
        cout << "enter your 2 number:";
        cin >> num2;
        cout << "" << endl;

        switch (funtionNumber)
        {
        case 1:
            cout << "the sum is " << add << "\n";
            break;

        case 2:
            cout << "the diffrence is " << multiply << "\n";
            break;

        case 3:
            cout << "the into is " << into << "\n";
            break;

        case 4:
            cout << "the qutiont is " << by << "\n";
            break;
        }
    }
}
