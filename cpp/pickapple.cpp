#include <bits/stdc++.h>
using namespace std;

int main()
{
    int height[20], H , sum = 0;
    for(int i = 0; i < 10; i++)cin >> height[i];//输入时不能用endl
    cin >> H;
    for(int i = 0;i < 10; i++){//每个函数内部定义的变量不能通用
        if(height[i] <= (H + 30))sum++;
    }
    cout << sum << endl;
}