#include <iostream>
#include <utility>

using namespace std;
int main()
{
    int a ,b ,c;
    cin >> a >> b >> c;
    if(a>b)swap(a,b);
    if(a>c)swap(a,c);
    if(a>b)swap(a,b);
    cout << a << b << c << endl;
}