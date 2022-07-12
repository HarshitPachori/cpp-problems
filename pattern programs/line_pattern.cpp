#include <iostream>
using namespace std;
main()
{
    int n, m;
    cout << "Enter the numbers of Horizontal lines:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "#" << endl;
    }
    cout << "Enter the numbers of Vertical lines:" << endl;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cout << "#";
    }
}