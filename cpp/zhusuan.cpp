#include <iostream>
using namespace std;

bool f[20005];
int main()

{
    int n;
    cin >> n;
    int a[105];
    int sum = 0;
    for(int i = 0; i < n ;i++){
        cin >> a[i];
    }
    for(int i = 0; i < n ;i++){
        for(int j = i + 1; j < n; j++){
            f[a[i] + a[j]]= true;//桶的应用
        }
    }
    for(int i = 0; i < n; i++){
        if(f[a[i]])sum++;
    }
    cout << sum << endl;
    return 0;
}