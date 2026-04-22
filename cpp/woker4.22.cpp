#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

double calculateY(double x) //定义子函数接收x
{
    double result; //定义结果

    if(x > 0)
    {
        result = sqrt(x); //引用函数
    }
    else if(x == 0)
    {
        result = 0;
    }
    else
    {
        result = fabs(x);
    }

    return result; //返回结果
}

int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    double x,y;
    cout << "请输入x：";
    cin >> x;

    y = calculateY(x); //调用子函数

    cout << "y=" << y << endl;

    system("pause");
    return 0;
}