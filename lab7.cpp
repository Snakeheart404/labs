#include<iostream>

using namespace std;

//=========Прототипи функцій============
void fillArrayA(char A[], int number); // прототип функції, що заповнює перший масив
void fillArrayB(char B[], int number); // прототип функції, що заповнює другий масив
void outArray(char A[], int number); // прототип функції для виведення масивів
void makeArrayC(char A[], char B[], char C[], int number, int* size); // прототип функції, що шукає спільні елементи перших двох масивів і заповнює ними третій масив
double arithmeticMean(char C[], int* size); // прототип функції для знаходження середнього арифметичного елементів третього масиву, коди яких більше 55

//=========Головна функція============
int main() {
    int const size = 10; // розмір першого та другого масивів
    char A[size], B[size]; // перший і другий масив
    char C[10]; // третій масив
    int C_size = 0; // розмір третього масиву 
    int* pC_size = &C_size; // покажчик на розмір третього масиву 
    fillArrayA(A, size);
    fillArrayB(B, size);
    cout << "First array: " << endl;
    outArray(A, size);
    cout << "Second array: " << endl;
    outArray(B, size);
    makeArrayC(A, B, C, size, pC_size);
    cout << "Third array: "<< endl;
    outArray(C, C_size);
    double mean = arithmeticMean(C, pC_size);

    cout << "Arithmetic mean: " << mean;


    return 0;
}

//=========Визначення функцій============

void fillArrayA(char A[], int number) // функція, що заповнює перший масив
{
    for (int i = 0; i < number; i++) {
        A[i] = char(45 + 2 * i);
    }
}

void fillArrayB(char B[], int number) // функція, що заповнює другий масив
{
    for (int i = 0; i < number; i++) {
        B[i] = char(61 - 2 * i);
    }
}

void outArray(char A[], int number) // функція для виведення масивів
{
    for (int i = 0; i < number; i++) {
        cout << A[i] << endl;
    }
}

void makeArrayC(char A[], char B[], char C[], int number, int* size) // функція, що шукає спільні елементи перших двох масивів і заповнює ними третій масив
{
    for (int j = 0; j < number; j++) {
        for (int k = 0; k < number; k++) {
            if (A[j] == B[k])
            {
                C[*size] = A[j];
                *size += 1;
            }
        }
    }
}

double arithmeticMean(char C[], int* size) // функція для знаходження середнього арифметичного елементів третього масиву, коди яких більше 55
{
    int counter = 0;
    int sum = 0;
    for (int i = 0; i < *size; i++) {
        if (C[i] > 55) {
            sum += C[i]; // сума елементів масиву, коди яких більше 55
            counter++; // кількість елементів масиву, коди яких більше 55
        }

    }
    double result = double(sum) / double(counter); // здійснюється явне приведення типів, ми не можемо працювати з цілими числами, бо заздалегідь не знаємо, чи буде середнє арифметичне цілим числом
    return result;
}
