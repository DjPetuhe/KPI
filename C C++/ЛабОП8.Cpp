#include <iostream>
using namespace std;

void matrix_generation(int **matrix, int &n);

void find_vector(int **matrix, int *vector, int &n);

void out(int *vector, int &n);

void delete_matrix(int **matrix, int *vector, int &n);

int main()
{
    int n;
    int smallest;
    int **matrix = new int *[50];
    for (int i = 0; i < 50; i++)
    {
        matrix[i] = new int[50];
    }
    int *vector = new int[50];
    matrix_generation(matrix, n);
    find_vector(matrix, vector, n);
    out(vector, n);
    delete_matrix(matrix, vector, n);
}

void matrix_generation(int **matrix, int &n)
{
    cout << "Enter the size of the square matrix (n x n) (1 <= n <= 50!):";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << i + 1 << " ";
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = rand() % 201 - 100;
            cout << matrix[i][j] << " ";
        }
    }
}

void find_vector(int **matrix, int *vector, int &n)
{
    for (int i = 0; i < n; i++)
    {
        int smallest = matrix[i][0];
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] < matrix[i][smallest])
            {
                smallest = j;
            }
        }
        for (int j = 0; j < n; j++)
        {
            vector[i] += matrix[i][j] * matrix[j][smallest];
        }
    }
}

void out(int *vector, int &n)
{
    cout << endl
         << "vector = {  ";
    for (int i = 0; i < n; i++)
    {
        cout << vector[i] << "  ";
    }
    cout << "}";
}

void delete_matrix(int **matrix, int *vector, int &n)
{
    for (int i = 0; i < 50; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    delete[] vector;
}