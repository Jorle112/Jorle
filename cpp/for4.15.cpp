#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int m,n;
    int a = 0;
    cout << "请输入整数范围m和n：" ;
    cin >> m >> n;

    if(m>n)
    {
        for(int i = n;i <=m;i++)
        {
            if(i % 3 == 2 && i % 5 == 1 && i % 7 == 4)
            {
                a = a + 1;
                cout << i << endl;
            }
        }
    }
    else
    {
        for(int i = m;i <=n;i++)
        {
            if(i % 3 == 2 && i % 5 == 1 && i % 7 == 4)
            {
                a = a + 1;
                cout << i << endl;
            }
        }
    }
    cout << "共有" << a << "个满足条件的整数。" << endl;

    system("pause");
    return 0;
}