#include <iostream>

using namespace std;

int main()
{
    int x; //власне паліндром
    cout << "Palindromes:" << endl;
   
    for (int i = 1; i <= 9; i++)
    {
        x = i * 1000 + i;
        cout << x << endl;
        for (int j = 1; j <= 9; j++)
        {
            x = i * 1000 + j * 100 + j * 10 + i;
            cout << x << endl;
        }
    }

    system("pause");

}
