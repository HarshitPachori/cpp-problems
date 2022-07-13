#include <iostream>
using namespace std;
main()
{
    int n1, n2, n3;
    cout << "Enter three numbers: " << endl;
    cin >> n1 >> n2 >> n3;
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            cout << "Max: " << n1 << endl;
        }
        else
        {
            cout << "Max: " << n3 << endl;
        }
    }
    else
    {
        if (n2 > n3)
        {
            cout << "Max: " << n2 << endl;
        }
        else
        {
            cout << "Max: " << n3 << endl;
        }
    }
}