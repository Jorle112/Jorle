#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    char a;
    cout << "请输入一个字符"  << endl;
    cin >> a;

    if(a >= '0' && a <= '9'){  // &&表示且
        cout << "你输入的是一个数字。" << endl;
    }
    else {
        if(a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')   //||表示或
    {
        cout << "你输入的是一个字母。" << endl;
    }
        else
        {
            cout << "你输入的是非数字、非字母。" << endl;

        }
    }

    system("pause");

    return 0;
    }

