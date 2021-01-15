#include <string.h>
#include <string>
#include <iostream>
#include "string_func.h"

using namespace std;

//=========Головна функція============
int main() {
    string inputString = getStr("Input string: ");

    string delimiters = " "; // вказуємо роздільники 

    int wordsCount = countWords(inputString, delimiters); // підрахунок слів, що починаються й закінчуються тими самими символами
    cout << "Number of words is: " << wordsCount << endl;

    return 0;
}