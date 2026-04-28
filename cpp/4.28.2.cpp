#include<iostream>
#include<cstdlib>
using namespace std;

void putgraph(int n) //不用输出
{
    for(int i = 1;i <=n;i++)
    {
        int a = n+1-i;
        for(int j = 1;j < i;j++)
        {
            cout << " " ; //打印数字前面的空格
        }
        for(int k = 1;k <= 2*a-1;k++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;
    int n;
    char a;

    do
    {
        cout << "*****************************" << endl;
        cout << "请输入图形的行数(1~9)：" ;
        cin >> n;

        putgraph(n); //直接调用

        cout << "是否继续输入图形？请输入y或n：";
        cin >> a;

    } while (a == 'y');
    
    system("pause");
    return 0;
}