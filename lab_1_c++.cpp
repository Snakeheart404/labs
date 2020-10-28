#include <iostream>

using namespace std;

int main()
{
    int n; //тризначне число
    int first_n; //перша цифра зліва
    int res; //число з приписаною першою цифрою в кінці

    cout << "Enter a three-digit number:" << endl;
    cin >> n;

    first_n = n / 100;
    n = n % 100;
    res = n * 10 + first_n;

    cout << "Result: " << res << endl;

    system("pause");
}
