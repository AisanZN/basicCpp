#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "enter num1 " << endl;
    cin >> num1;
    cout << "enter num2" << endl;
    cin >> num2;
    cout << "Is the first number greater than the second number or are the two numbers equal?" << ((num1 > num2) || (num1 == num2));
    return 0;
}