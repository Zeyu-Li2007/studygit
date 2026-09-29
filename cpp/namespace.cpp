#include <iostream>
using namespace std;

namespace Li
{
    int age = 18;
    void fun()
        {
            cout << age << endl;
        }
    namespace sub_Li
    {
        void fun()
        {
            cout << "handsome" << endl;
        }
    }
}

int main()
{
    Li::fun();
    system("pause");
    return 0;
}

