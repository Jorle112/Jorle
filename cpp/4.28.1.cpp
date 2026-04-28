#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int back(int a)
{
    int b;

    int ge = a % 10;
    int shi = a / 10 % 10;
    int bai = a / 100;

    b = ge * 100 + shi * 10 + bai; //计算反序数

    return b;
}

bool isright(int b)
{
    bool flag = true;

    for(int i = 2;i * i <= b;i++) //判断素数0
    {
        if(b % i == 0)
        {
            flag = false;
            break; //break更快跳出
        }
    }

    return flag;
}

int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int number;
    cout << "请输入数据个数：" ;
    cin >> number;

    cout << "随机产生的" << number << "个数中的可逆素数有：" << endl;

    srand(time(0)); //散播随机数，time（0）是现在的时间，根据时间来进行随机

    for(int i = 1;i <= number;i++)
    {
        int a = rand() % 491 + 10; //rand（） % 个数 + 起点
        int b = back(a);

        bool flag1 = isright(a);
        bool flag2 = isright(b);

        if(flag1 == true && flag2 == true) //同时满足
        {
            cout << a << endl;
        }
        else
        continue;
    }

    system("pause");

    return 0;
}