#include <iostream>
using namespace std;
main()
{
    int a, b, c;
    cout << "Enter the sides of triangle: " << endl;
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
        cout << "Equilateral triangle" << endl;
    }
    else if (a == b || b == c || a == c)
    {
        cout << "Isosceles triangle" << endl;
    }
    else
    {
        cout << "Scalene triangle" << endl;
    }
}