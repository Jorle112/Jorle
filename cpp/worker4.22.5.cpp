#include<iostream>
#include<cstdlib>
using namespace std;

bool result(int a) //子函数判断true or false
{
    int ge,shi,bai;
    bool isright = true;

        ge = a % 10;
        shi = a / 10 % 10;
        bai = a / 100;
        if(a == ge*ge*ge + shi*shi*shi + bai*bai*bai)
        {
            isright = true;
            return isright;
        }
        else
        {
            isright = false;
            return isright;
        }
}

int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int m,n;
    int total = 0;
    cout << "请依次输入数字m，n(n>m>0)：" << endl;
    cin >> m >> n;    

    
    for(int i = m;i < n;i++)
    {
        if(result(i) == true) //调用子函数
        {
            total = total + i;
        }
        else
        {
            continue;
        }
    }

    cout << m << "~" << n << "之间所有水仙花数之和为：" << total << endl;

    system("pause");
    return 0;
}