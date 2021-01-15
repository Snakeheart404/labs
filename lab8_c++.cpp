#include<iostream>

#include <cstdlib>

#include <ctime>

#include <iomanip>

using namespace std;

import array;

//=========Прототипи функцій============
void fillMatrix(int matrix[n][m], int n, int m); // прототип функції для ініціювання двовимірного масиву (матриці n х m) випадковими числами
void outputMatrix(int matrix[n][m], int n, int m); // прототип функції для виведення двовимірного масиву (матриці) 
void fillAray(int matrix[n][m], int array[], int n, int m); //прототип  функції для ініціювання одновимірного масиву максимальними значеннями елементів стовпців двовимірного масиву
void outArray(int array[], int m); //прототип  функції для виведення одновимірного масиву
void bubbleSort(int array[], int m); //прототип  функції для сортування одновимірного масиву обміном (бульбашкою) за спаданням                     

//=========Головна функція============
int main() {

    int n; // кількість рядків і стовпчиків матриці
    cout << "Enter the size of matrix: "; 
    cin >> n;
    int** matrix = generateMatrix(n); // двовимірний масив (матриця)
    fillMatrix(matrix, n, m);
    cout << "Matrix: " << endl;
    outputMatrix(matrix, n, m);
    cout << endl;

    int array[m]; // одновимірний масив
    fillAray(matrix, array, n, m);
    cout << "Unsorted array: " << endl;
    outArray(array, m);
    cout << endl;
    bubbleSort(array, m);
    cout << "Sorted array: " << endl;
    outArray(array, m);
    cout << endl;

    system("pause");
}

//=========Визначення функцій============
int** generateMatrix(int n) {

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    } // функція для ініціювання двовимірного масиву (матриці n х m) випадковими числами
{
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = rand();
        }
    }
}

void outputMatrix(int matrix[n][m], int n, int m) // функція для виведення двовимірного масиву (матриці) 
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(5) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void fillAray(int matrix[n][m], int array[], int n, int m) // функція для ініціювання одновимірного масиву максимальними значеннями елементів стовпців двовимірного масиву
{
    for (int i = 0; i < m; i++) {
        int maxEl = matrix[0][i];
        for (int j = 1; j < n; j++) {
            if (matrix[j][i] > maxEl) maxEl = matrix[j][i];
        }
        array[i] = maxEl;
    }
}

void bubbleSort(int array[], int m) //функція для сортування одновимірного масиву обміном (бульбашкою) за спаданням
{
    int tmp;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (array[j + 1] > array[j]) {
                tmp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = tmp;
            }
        }
    }

}

void outArray(int array[], int m) // функція для виведення одновимірного масиву
{
    for (int i = 0; i < m; i++) {
        cout << array[i] << endl;
    }
}

