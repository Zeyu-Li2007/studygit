#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    int k , i;
    cin >> k;
    a = 0;
    for ( i = 1; a <= k ; i++ ) a += 1.0 / i;
    cout << i - 1 << endl;//此时i已经经过i++处理，应当减1
    return 0;
}