#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int m,n;
    cout << "请输入范围m和n：" ;
    cin >> m >> n;

    if(m < n) //换大小
    {
        int temp;
        temp = m;
        m = n;
        n = temp;
    }

    int sum1 = 0;
    int sum2 = 0;

    cout << n << "~" << m << "之间满足条件的素数为：" << endl;

    for(int i = n;i <= m;i++)
    {
        if(i <= 1) //小于1直接跳过
        continue;

        bool issu = true;
        for(int j = 2;j * j <= i;j++) //求素数
        {
            if(i % j == 0)
            {
                issu = false;
                break;
            }
        }

        if(issu)
        {
            int ge = i % 10;

            if(ge == 7 || ge == 3)
            {
                cout << i << "  ";
                sum1 = sum1 + i;

                int shi = i / 10 % 10; //在满足条件的情况下接着满足条件
                if(shi == 6)
                continue;

                sum2 = sum2 + i;
            }
        }
     }

    cout << endl;
    cout << "满足条件的素数和是：" << sum1 << endl;
    cout << "满足条件且十位数不为6的素数和是：" << sum2 << endl;

    system("pause");
    return 0;
}