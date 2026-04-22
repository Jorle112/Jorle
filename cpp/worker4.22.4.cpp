#include<iostream>
#include<cstdlib>
using namespace std;

int result1(int num1,int num2)
{
    int temp;
    while(num2 != 0) //辗转相除法求最大公约数
    {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }

    return num1;
}

int result2(int num1,int num2)
{
    int result;
    int total = num1 * num2;
    int a = result1(num1,num2); //调用子函数1

    result = total / a; //最小公倍数=总数/最大公约数
    return result; 
}

int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int a,b;
    cout << "请输入两个正整数：";
    cin >> a >> b;

    int i = result1(a,b);
    int j = result2(a,b);

    cout << "最大公约数是：" << i << endl;
    cout << "最小公倍数是：" << j << endl;

    system("pause");
    return 0;
}