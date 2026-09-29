//类、类中成员与访问属性
//定义方式
/*
class 类名
{
    访问属性
    类中成员
};
类中成员
1.数据成员 即变量
2.函数成员 即函数
访问属性（在定义时标明）
1.public：公有成员可以在类内和类外直接访问
2.protected：保护成员，类中可以访问，类外不能直接访问
3.private：私有成员，类中可以访问，类外不可以直接访问
*/
#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
private:   
    int age;
    int id;

    void speak()
    {
        cout << "今年我" << age << "岁了" << endl;
    }
};

int main()
{
    Student zhangsan;
    zhangsan.name = "zhangsan";//char不能直接赋值，只有string可以
    cout << zhangsan.name << endl; 

}