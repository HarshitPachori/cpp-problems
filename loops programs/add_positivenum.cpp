#include <iostream>
using namespace std;
main()
{
    int num;
    int sum = 0;
    cout << "Enter a number: " << endl;
    cin >> num;
    while (num >= 0)
    {
        sum += num;
        cin >> num;
    }
    cout << "Sum is : " << sum << endl;
}