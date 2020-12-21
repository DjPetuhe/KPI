#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int p = 2, n;
    bool z, j;
    cout << "n = ";
    cin >> n;
    while (pow(2, p) - 1 <= n)
    {
        int mers = pow(2, p) - 1;
        z = 1;
        for (int k = 2; k < mers; k++)
        {
            if (mers % k == 0)
            {
                z = 0;
            }
        }
        if (z == 1)
        {
            cout << "mers = " << mers << endl;
        }
        j = 0;
        while (j == 0)
        {
            p += 1;
            j = 1;
            for (int i = 2; i < p; i++)
            {
                if (p % i == 0)
                {
                    j = 0;
                }
            }
        }
    }
}