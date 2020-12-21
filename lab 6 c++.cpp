#include <iostream>
using namespace std;
//=========Прототипи функцій============
int first_d(int); // прототип функції, що знаходить першу цифру натурального числа
int sum_first_d(int, int, int); // прототип функції, що знаходить суму трьох чисел

//=========Головна функція============
int main()
{
    cout << "Enter a, b, c:" << endl;
    int a, b, c; //3 натуральних ненульових числа
    cin >> a >> b >> c;

    int Result = 0; //сума перших цифр заданих чисел
    int c1 = first_d(a); //перша цифра числа а
    int c2 = first_d(b); //перша цифра числа b
    int c3 = first_d(c); //перша цифра числа c

    Result = sum_first_d(c1, c2, c3);
    cout << "Sum:" << Result << endl; 

    system("pause");
}
//=========Визначення функцій============
int first_d(int a)
{
    int res = a;
    while ((res / 10) > 0)
    {
        res = res / 10;
    }

    return res;
}

int sum_first_d(int a, int b, int c)
{
    int res = a + b + c;
    return res;
}