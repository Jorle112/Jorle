#include<iostream>
#include<cstdlib>
using namespace std;

int result(int num1,int num2) //定义子函数接收整数，输出整数
{
    int result = 1;
    for(int i = 1;i <= num2;i++)
    {
        result = result*num1;
    }

    return result;
}

int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int a , b;
    cout << "求a的b次方与b的a次方的和,请输入a、b：";
    cin >> a >> b ;

    int ab,ba,abba;

    ab = result(a,b);
    ba = result(b,a);

    abba = ab + ba;

    cout << a << "的" << b << "次方为：" << ab << endl;
    cout << b << "的" << a << "次方为：" << ba << endl;
    cout << a << "的" << b << "次方与" << b << "的" << a << "次方的和为：" << abba << endl;

    system("pause");
    return 0;
}