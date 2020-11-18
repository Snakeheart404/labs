#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>

using namespace std;

int main() {
    double e;
    cout << "Enter the calculation accuracy = ";
    cin >> e; //введення точності обчислень

    double h; //висота кожного прямокутника
    double s; //поточне наближення інтегралу
    double Res; //кінцевий результат (наближене значення інтегралу)
    double s0; //попереднє наближення інтегралу

    int n = 1; //кількість відрізків, на яку ми розбиваємо відрізок інтегрування
    h = M_PI / n;
    s = h * log(2 + sin(M_PI / 2 *  n));
    do {
        s0 = s; //попереднє наближення інтегралу
        n = 2 * n;
        s = 0.0;
        h = M_PI / n;
        for (int i = 1; i <= n; i++) 
        {
            double x = h * log(2 + sin(i * M_PI / n - M_PI / 2 * n)); //аргумент х
            s += x;
        }
    } while (fabs(s - s0) >= e); 

    Res = s;
    
    cout << "Integral = " << Res << endl;
    system("pause");
}