#include <iostream>
#include <math.h>
using namespace std;

float power(float a1, int n1)
{
    float x1;
    x1 = 1;
    for (int i = 1; i <= n1; i++)
    {
        x1 *= a1;
    }
    return x1;
}

int main()
{
    float a, Result;
    int n;
    cout << "a = ";
    cin >> a;
    cout << "n = ";
    cin >> n;
    Result = power(a, n);
    cout << "Result = " << Result;
}