#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;
    cout << "请输入半径：" << endl;
    double r;  //定义半径变量
    cin>>r;
    double bmj = 4*3.14159*r*r; //计算表面积
    double tj = 4.0/3.0*3.14159*r*r*r; //计算体积

    cout << fixed << setprecision(2) << "圆球面积为：" << bmj << endl; //保留两位小数
    cout << fixed << setprecision(4) << "圆球体积为：" << tj << endl;  //保留四位小数

    system("pause");

    return 0;
}