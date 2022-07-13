#include <iostream>
#include <math.h>
using namespace std;
main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    bool flag = false;
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = true;
            break;
        }
        else
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "The number is not prime." << endl;
    }
    else
    {
        cout << "The number is prime." << endl;
    }
}