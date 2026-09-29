#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N = 0;
    string putin , addup;
    while(cin >> putin){
        if (N == 0)N = putin.size();
        addup += putin;
    }
    cout << N;
    char s = '0';
    int n = 0;
    for(int i = 0; i < addup.size(); i++)
    {
        if(addup[i] == s){n++;}
        else{
            cout << " " << n;
            s = addup[i];
            n = 1;
        }
    }
    cout << " " << endl;
    return 0;
}