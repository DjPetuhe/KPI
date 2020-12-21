#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int size, minimal, maximal, i, j, k, l;
    float sum;
    cout << "Enter the size of the arrey : "; //Вводим параметры массива
    cin >> size;
    cout << "Enter the minimum possible value : ";
    cin >> minimal;
    cout << "Enter the maximum possible value : ";
    cin >> maximal;
    float Y[size - 1];
    if (minimal > maximal)
    {
        cout << "Wron input";
        return 0;
    }
    cout << "Unsorted arrey :  ";
    for (int i = 0; i < size; i++) //Генерируем и выводим несортированный масив
    {
        Y[i] = (rand() % ((maximal - minimal) * 100 + 1) + minimal * 100) / 100.0;
        cout << Y[i] << "  ";
    }
    for (j = 0; j < size; j++) //Сортируем массив
    {
        l = j;
        for (k = j; k < size; k++)
        {
            if (Y[l] < Y[k])
            {
                l = k;
            }
        }
        swap(Y[j], Y[l]);
    }
    cout << endl //Выводим сортированный массив
         << "Sorted arrey :  ";
    for (int i = 0; i < size; i++)
    {
        cout << Y[i] << "  ";
    }
    sum = 0;
    for (int i = 0; i < size; i++) //Находим сумму чисел на парных позициях
    {
        if (i % 2 != 0)
        {
            sum += Y[i];
        }
    }
    cout << endl
         << "Sum of the elements that are in paired position : " << sum;
}
