#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , x;
    cin >> x >> n;
    int a = n / 7;
    int b = n % 7;
    int c = a * 250 * 5;
    int d;
    if(b + x <= 6)
    {
        d = b * 250;
    }
    if(b + x > 6 && b + x <= 8)
    {
        d = (6 - x) * 250;
    }
    if(b + x > 8)
    {
        d = (b - 2) * 250;
    }
    int s = c + d;
    cout << "小鱼一共游了" << s << "千米" << endl;
}