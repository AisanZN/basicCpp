#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter num (1-12)";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "farvardin";
        break;
    case 2:
        cout << "ordibehesht";
        break;
    case 3:
        cout << "khordad";
        break;
    case 4:
        cout << "tir";
        break;
    case 5:
        cout << "mordad";
        break;
    case 6:
        cout << "sharivar";
        break;
    case 7:
        cout << "mehr";
        break;
    case 8:
        cout << "aban";
        break;
    case 9:
        cout << "azar";
        break;
    case 10:
        cout << "day";
        break;
    case 11:
        cout << "bahman";
        break;
    case 12:
        cout << "esfand";
        break;
    default:
        cout << "invalid input";
        break;
    }
    return 0;
}
