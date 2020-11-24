#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    float s = 0;
    cout << "n = ";
    cin >> n;
    if (n <= 0)
    {
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        long long int factorial1 = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial1 = factorial1 * j;
        }
        s += pow(factorial1, -1);
        cout << "i = " << i << ", s = " << s << endl;
    }
    cout << "s = " << s;
}