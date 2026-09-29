#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int e,f;
    e = c - a;
    f = d - b;
    if (f>=60){
        e++;
        f-=60;
    }
    if (f<0)
    {
        e--;
        f+=60;
    }
    cout << "小鱼一共游了" << e << "小时" << f << "分钟";
    return 0;
}
