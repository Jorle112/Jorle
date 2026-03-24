#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int year; //确保整数输入
    cout << "请输入工龄：" ;
    cin >> year;
    if(year >= 0 && year < 1) //外层
    {
        cout << "年休假为0天" << endl;
    }
    else{  //内层
    if(year >= 1 && year <=5)
    {
        cout << "年休假为7天" << endl;
    }
    else if(year > 5 && year <= 10)  //else if确保只进行一次判断
    {
        cout << "年休假为14天" << endl;
    }
    else if(year > 10 && year <=20)
    {
        cout << "年休假为21天" << endl;
    }
    else if(year > 20)
    {
        cout << "年休假为28天" << endl;
    }
    else
    {
        cout << "输入数据有误" << endl;
    }
    }

    system("pause");

    return 0;
}

