#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];
    for( int i = 0; i < n ; i++ ){
        cin >> a[i];
    }
    int ans = 1;
    int temp = 1;
    for( int i = 0; i < n-1 ; i++){
        if(a[i] + 1 == a[i + 1]){
            temp++;
            ans= max(ans,temp);
        }
        else{temp= 1;}

    }
    cout << ans << endl;
    return 0;
}