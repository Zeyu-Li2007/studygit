#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, n;
    int sum = 0;
    cin >> x >> n;
    for(int i = 0;i <= n;i++){
        if(x != 6 && x != 7){
            sum += 250;
        }
        x++;
        if(x>7)x=1;
    }
    cout << "小鱼游了" << sum << "千米" << endl;
}