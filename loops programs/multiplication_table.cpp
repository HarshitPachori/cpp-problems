#include <iostream>
using namespace std;
main()
{
    int num;
    cout << "Enter a number: "<<endl;
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }
}