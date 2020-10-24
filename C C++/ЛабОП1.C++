#include <iostream>
#include <math.h>
#include <excpt.h>
using namespace std;

float coor(string str)
{
    cout << str;
    float a;
    cin >> a;
    if (cin.fail())
    {
        cout << "Invalid number.";
        exit(0);
    }
    return a;
}

int main()
{
    float x1, y1, x2, y2, distance;
    x1 = coor("Input x coordinate of the first point: ");
    y1 = coor("Input y coordinate of the first point: ");
    x2 = coor("Input x coordinate of the second point: ");
    y2 = coor("Input y coordinate of the second point: ");
    float x = x2 - x1;
    float y = y2 - y1;
    cout << "Distance = " << round(sqrt(pow(x, 2) + pow(y, 2)) * 100) / 100;
    return 0;
}