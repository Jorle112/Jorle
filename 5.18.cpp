#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
bool prime(int a) 
{
    bool flag = true;
    for(int i = 2;i * i < a;i++)
    {
        if(a % i == 0)
        flag = false; 
    }
    return flag;
}
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int arra[10];
    int arrb[10];
    int down1 = 0,down2 = 0;
    int time = 0;

    cout << "请输入10个正整数：" << endl;
    for(int i = 0;i < 10;i++)
    {
        cin >> arra[i];
    }

    int max = arra[0];
    int min = arra[0];

    for(int i = 0;i < 10;i++)
    {
        if(arra[i] > max)
        {
            max = arra[i];
            down1 = i;
        }
        if(arra[i] < min)
        {
            min = arra[i];
            down2 = i;
        }
    }

    cout << "数组中的最大值为：" << max << "，其下标为" << down1 << endl;
    cout << "数组中的最小值为：" << min << "，其下标为" << down2 << endl;

    for(int i = 0;i < 10;i++)
    {
        if(prime(arra[i]))
        {
            arrb[time] = arra[i]; 
            time = time + 1;
        }
    }

    cout << "素数为：";

    for(int i = time - 1;i >= 0;i--) //倒序输出，下标范围是 [0, time-1]
    {
        cout << setw(4) << arrb[i];
    }
    cout << endl;

    system("pause");
    return 0;
}
