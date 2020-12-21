#include <iostream>
#include <stdio.h>
using namespace std;

void matrix_inicial(int **matrix);

void matrix_out(int **matrix);

void inicial_array(int **matrix, int *array);

void array_shell_sort(int *array);

void array_out(int *array);

void matrix_delete(int **matrix, int *array);

int main()
{
    int **matrix = new int *[5];
    for (int i = 0; i < 5; i++)
    {
        matrix[i] = new int[8];
    }
    int *array = new int[5];
    matrix_inicial(matrix);
    matrix_out(matrix);
    inicial_array(matrix, array);
    array_out(array);
    array_shell_sort(array);
    array_out(array);
    matrix_delete(matrix, array);
}

//Ініціалізація матриці
void matrix_inicial(int **matrix)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            matrix[i][j] = rand() % 201 - 100;
        }
    }
}

//Вивід матриці
void matrix_out(int **matrix)
{
    cout << "Matrix: \n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        cout << endl;
    }
}

//Ініціалізція масива
void inicial_array(int **matrix, int *array)
{
    int smaller;
    for (int i = 0; i < 5; i++)
    {
        smaller = matrix[i][0];
        for (int j = 0; j < 8; j++)
        {
            if (matrix[i][j] < smaller)
            {
                smaller = matrix[i][j];
            }
        }
        array[i] = smaller;
    }
}

//Сортуємо масив методом Шелла
void array_shell_sort(int *array)
{
    for (int gap = 5 / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < 5; i++)
        {
            for (int j = i - gap; j >= 0 && array[j + gap] < array[j]; j -= gap)
            {
                swap(array[j + gap], array[j]);
            }
        }
    }
}

//Виводимо масив
void array_out(int *array)
{
    cout << "Array:\n";
    for (int i = 0; i < 5; i++)
    {
        printf("%4d", array[i]);
    }
    cout << endl;
}

//Видаляэмо динамічну пам'ять
void matrix_delete(int **matrix, int *array)
{
    for (int i = 0; i < 5; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    delete[] array;
}
