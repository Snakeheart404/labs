#include <iostream>

using namespace std;

int main()
{
    float x; //Координата х даної точки
    float y; //Координата у даної точки
    bool res; //Належність точки заштрихованій частині площини

    cout << "Enter x and y:" << endl;
    cin >> x >> y;

    if ((y >= abs(x)) && (y < 1))
        res = true;
    else res = false;

    cout << "Result: " << res << endl;

    system("pause");
}
