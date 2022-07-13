#include <iostream>
using namespace std;
main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    if (age < 18)
        cout << "You are not allowed to vote.";
    else
        cout << "You are allowed to vote.";
}