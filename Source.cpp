#include <iostream>
#include <string.h>
#include <string>

using namespace std;

//=========Визначення функцій============
int countWords(const string& str, const string& delim) // функція для підрахунку слів, що починаються й закінчуються тими самими символами
{
    int count = 0; // кількість слів з однаковими символами

    int start, end = 0; // початковий та кінцевий індекси поточного слова
    // виконувати поки не дійдемо до кінця строки
    while (end < str.size()) {
        start = end;

        // знаходимо початковий індекс додаючи один поки не пропустимо усі пробіли або не дійдемо до кінця string
        while (start < str.size() && (delim.find(str[start]) != string::npos)) {
            start++;
        }

        // знайшли індекс початку слова, індексу кінця присвоюємо початковий індекс
        end = start;
        // знаходимо початковий індекс додаючи один поки не досягнемо пробілу або не дійдемо до кінця string
        while (end < str.size() && (delim.find(str[end]) == string::npos)) {
            end++;
        }
        // ігноруємо пусті string
        if (end - start != 0) {
            // перевіряємо однаковість першого та останнього символів
            if (str[start] == str[end - 1]) {
                // виводимо поточне слово та додаємо один до лічильника слів
                string word = string(str, start, end - start);
                cout << "The word with the same \'" << str[start] << "\' character is: " << word << endl;
                ++count;
            }
        }
    }
    return count;
}

string getStr(string title) // функція для введення строки
{
    string s;
    cout << title;
    getline(cin, s);
    return s;
}