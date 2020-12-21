#include <iostream>
#include <math.h>
using namespace std;

//Функция, которая просчитывает факториал определенного числа.
unsigned long long int factorial(int y)
{
    unsigned long long int factorial1 = 1;
    for (int i = 1; i <= y; i++)
    {
        factorial1 *= i;
    }
    return factorial1;
}

//Функиця, которая просчитывает значение функции от определенного числа.
float function1(float x)
{
    float sum1, sum2;
    for (int k = 0; k <= 5; k++)
    {
        sum1 = pow(x, 2 * k) / factorial(2 * k);
        sum2 = pow(x, 2 * k + 1) / factorial(2 * k + 1);
    }
    return sum1 / sum2;
}

int main()
{
    float a, Y;
    cout << "a = ";
    cin >> a;
    Y = (2 * function1(0.5) - 3 * function1(a - 0.1)) / (5 - function1(4 * a - 1));
    cout << "Y = " << Y << endl;
}