#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[10000];
    int i = 0;
    a[0] = n;
    int len;
    for(;n != 1;)
    {
        if(n % 2 == 0)
        {
            n /= 2;
        }
        else{n = n * 3 + 1;}
        a[i+1] = n;
        i++;
        len = i;
    }
    reverse(a,a + len + 1);//左闭右开
    for(i = 0; i <= len ; i++){
        cout << a[i] << " ";
    }
    return 0;

}