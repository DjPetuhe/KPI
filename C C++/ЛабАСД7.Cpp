#include <iostream>
using namespace std;

void inicial_both(char *array, char *array2);

void equal(char *array, char *array2, char *array3, int &k, int &sum);

void smaller(char *array3, int k, int sum);

int main()
{
    char array[10] = {}, array2[10] = {}, array3[10] = {};
    int k, sum;
    k = 0;
    sum = 0;
    inicial_both(array, array2);
    equal(array, array2, array3, k, sum);
    smaller(array3, k, sum);
}

//Ініціюємо два масива за умовою.
void inicial_both(char *array, char *array2)
{
    for (int i = 0; i <= 9; i++)
    {
        array[i] = (i + 58);
        array2[i] = (63 - i);
    }
}

//Знаходимо рівні значення двох масивів та суму всіх значень третього масива
void equal(char *array, char *array2, char *array3, int &k, int &sum)
{
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (array[i] == array2[j])
            {
                array3[k] = array[i];
                sum += k;
                k += 1;
            }
        }
    }
}

//Знаходимо та виводимо значення, які меньші ніж середньоарифметичне
void smaller(char *array3, int k, int sum)
{
    for (int i = 0; i < k; i++)
    {
        if (i < sum * 1.0 / k)
        {
            cout << array3[i] << endl;
        }
    }
}