#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int a;
    int b=0,c=1; //赋值
    int result = 0; //赋值

    cout << "请输入一个二进制整数：";
    cin >> a;

    while(a > 0)
    {
        b = a % 2 * c; //末尾进行计算
        a = a / 10; //前一位
        c = c * 2; //加次方
        result = result + b; //求和
    }
    cout << "转换成十进制是：" << result << endl;

    system("pause");

    return 0;
}