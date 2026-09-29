#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14

int main()
{
    double h , r;
    cin >> h >> r;
    double v = PI*h*r*r;
    double b = 20000/v;
    cout << ceil(b) << endl;
}