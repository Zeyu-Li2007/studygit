//函数
#include <iostream>
using namespace std;
int add(int x, int y)//若数据类型为void则不会将数据返回
{   
    return x + y;
}
//使用
int main()
{
    int sum = add(2,3);
    cin.get();
    cout << sum << endl;
    return 0;
}