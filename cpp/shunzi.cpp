#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[10000];
    int a[10000];
    scanf("%s" , s);//输入时会将数字转化为字符串，并输入字符串数组
    int len = strlen(s);//求数组实际长度
    for(int i = 0; i < len; i++){a[i] = s[i] - '0';}//字符串数组转化为数字数组
    int aus = 1;
    int temp = 1;
    for(int i = 0; i < len - 1; i++){
        if(a[i] + 1 == a[i + 1]){
            temp++;}
        else{temp = 1;}
        aus = max(aus , temp);
    }
    cout << aus << endl;
    return 0;
}