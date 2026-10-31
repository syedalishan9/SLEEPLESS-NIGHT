#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "enter num1  ";
    cin >> num1;
    cout << " enter num2 ";
    cin >> num2;
    cout << " enter num3 ";
    cin >> num3;
    if (num1 % 2 != 0) {
        if (num1 % 5 == 0) {
            cout << num1 << " is odd and divisible by 5\n";
        }
    }
        if (num2 % 2 != 0) {
            if (num2 % 5 == 0) {
                cout << num2 << " is odd and divisible by 5\n";
            }
        }
        if (num3 % 2 != 0) {
            if (num3 % 5 == 0) {
                cout << num3 << " is odd and divisible by 5\n";
            }
        }
    return 0;
}



