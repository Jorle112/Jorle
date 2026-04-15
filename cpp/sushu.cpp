#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int a,b,num;
    int result = 0;
    cout << "请输入两个正整数：" << endl;
    cin >> a >> b;

    if(a < b) //看情况交换大小，确保a>b
    {
        int temp = 0;
        temp = a;
        a = b;
        b = temp;
    }

    for(int num = b;num <= a;num++) //开始遍历
    {
        if(num <= 1)
        {
            continue;
        }

        bool isright = true; //指示符
        for(int i = 2;i < num ;i++) //判断是否为素数
        {
            if(num % i == 0) //不是素数
            {
                isright = false; //变化标识
                break;
            }
        }

        if(isright) //为true就加
        {
            result = result + num;
        }
    }

    cout << b << "与" << a << "之间所有素数的和为" << result << endl;

    system("pause");
    return 0;
}//第一次用bool