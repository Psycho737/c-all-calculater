#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int radius;
    int area = 3.14 * pow(radius, 2);
    int circumference = 2 * 3.14 * radius;
    int diameter = 2 * radius;
    cout << "___________________________CIRCLE CALCULATER________________________" << endl;
    cout << "enter your radius:" << endl;
    cin >> radius;
    if (radius < 1)
    {
        cout << "invalid radius" << endl;
    }
    else
    {
        cout << "the area is " << area << endl;
        cout << "the circumference is " << circumference << endl;
        cout << "the diameter is " << diameter << endl;
    }
    return 0;
}
