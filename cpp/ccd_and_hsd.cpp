#include<iostream>
#include<iomanip> //引入工具箱
using namespace std;
double ccd,hsd; //定义摄氏度和华氏度
int main()
{
    cout <<"2025110167 王家乐" << endl;
    cout << "请输入摄氏温度：";
    
    cin >> ccd;  //输入存入摄氏度
    hsd = ccd * 9.0 / 5.0 + 32; //一位小数防止被整除

    cout << fixed << setprecision(1) << "华氏温度为："  << hsd << endl; //固定保留一位小数

    system("pause");

    return 0;   
} 