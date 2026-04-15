#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int n;
    cout << "请输入n的值(n<10)：";
    cin >> n;

    for(int i = 1;i <= n; i++) //外层循环从1到n
    {
        for(int j = 1;j <= n - i;j++) //内层循环打印n-i个空格
        {
            cout << " " ;
        }
        for(int k = 1;k <= i;k++) //内层循环打印i个数字
        {
            cout << i;
        }
        cout << endl;
    }

    for(int i = n-1;i >= 1;i--) //外层循环从n-1到1
    {
        for(int j = 1;j <= n-i;j++) //内层循环打印n-i个空格
        {
            cout << " " ;
        }
        for(int k = 1;k <= i;k++) //内层循环打印i个数字
        {
            cout << i;
        }
        cout << endl;
    }

    system("pause");
    return 0;
}