#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n; //Кількість коренів n
    double x; //Поточне значення виразу
    double Res; //Шукане значення виразу з n коренів

    cout << "Enter n: ";
    cin >> n;

    x = 0.0;

    for (int i = 0; i < n; i++)
    {
        x = sqrt(2 + x);
    }

    Res = x;

    cout << "Result: " << Res << endl;

    system("pause");

}

