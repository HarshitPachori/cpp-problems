#include <iostream>
using namespace std;
main()
{
    int n1, n2;
    int max, min;
    cout << "Enter two numbers: " << endl;
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        max = n1;
        min = n2;
    }
    else
    {
        max = n2;
        min = n1;
    }
    cout << "The maximum number is: " << max << endl;
    cout << "The minimum number is: " << min << endl;
}
