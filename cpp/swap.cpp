#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , s = 0;
    cin >> n;
    if(n < 0){n = -n; cout << "-";}
    while(n != 0)s = s * 10 + n % 10,n /= 10;
    cout << s << endl;
    return 0;
}