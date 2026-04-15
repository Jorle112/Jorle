#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int watermelon;
    int day = 1;
    cout << "请输入西瓜总数：";
    cin >> watermelon;

    do
    {
        watermelon = watermelon - watermelon / 2 - 2;
        if(watermelon < 0)
        {
            watermelon = 0;
        }

        cout << "第" << day << "天剩下：" << watermelon << "个" << endl;
        day = day + 1;
    } while (watermelon > 0);

    cout << "需要" << day-1 << "天卖完。" << endl;

    system("pause");
    return 0;
}