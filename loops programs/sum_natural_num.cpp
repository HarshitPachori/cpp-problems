#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
}