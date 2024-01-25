#include <iostream>
#include <algorithm>

using namespace std;

// void fill_array(int *array, int lenght);
// void print_array(int *array, int lenght);
// bool search_sequence(int *array, int n, int *sequence, int n_s);

int main()
{
  
// Задаємо розмірність матриці m x n та вектора n x 1
int const m = 3; // кількість рядків матриці
int const n = 2; // кількість стовпців матриці

// Задаємо матрицю A як двовимірний масив m x n
double A[m][n] = {{1, 8}, {5, 4}, {99, 2}};

// Задаємо вектор b як одновимірний масив n x 1
double b[n] = {7, 8};

// Задаємо транспоновану матрицю AT як двовимірний масив n x m
double AT[n][m];

// Перебираємо всі елементи матриці A
for (int i = 0; i < m; i++) {
  for (int j = 0; j < n; j++) {
    // Переставляємо місцями індекси рядків і стовпців
    AT[j][i] = A[i][j];
  }
}

// Задаємо результат множення A * b як одновимірний масив m x 1
double Ab[m];

// Перебираємо всі рядки матриці A
for (int i = 0; i < m; i++) {
  // Ініціалізуємо суму як нуль
  double sum = 0;
  // Перебираємо всі стовпці матриці A
  for (int j = 0; j < n; j++) {
    // Додаємо до суми добуток елементів A[i][j] і b[j]
    sum += A[i][j] * b[j];
  }
  // Присвоюємо i-му елементу масиву Ab значення суми
  Ab[i] = sum;
}
for (int i = 0; i < m; i++){
  for (int j = 0; j < n; j++) {
    cout << A[i][j]<< endl;
  }
}
  return 0;
}
