#include <iostream>
#include <math.h>
#include <excpt.h>
using namespace std;

float input(string str) //Функция проверки подходит ли число условию.
{
    cout << str;
    float a;
    cin >> a;
    if (cin.fail() or a < 0)
    {
        cout << "Invalid number.";
        exit(0);
    }
    return a;
}

int main()
{
    float x, y, z;
    x = input("Input the lenght of the first side:"); //Ввод данных с проверкой через функцию
    y = input("Input the lenght of the second side:");
    z = input("Input the lenght of the third side:");
    if (x < y + z) //Проверка существует ли треугольник с такими сторонами
    {
        if (z < x + y)
        {
            if (y < x + z)
            {
                cout << "Exist";
                return 0;
            }
        }
    }
    cout << "Does not exist";
    return 0;
}