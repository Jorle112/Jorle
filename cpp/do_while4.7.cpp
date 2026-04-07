#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    cout << "请输入一系列正整数（输入0或负数表示结束）：" << endl;

    int a;
    int odd=0,even=0; //定义奇数偶数

    do
    {
        cin >> a;
        if(a > 0 && a % 2 != 0){ // 输入大于0进行判断
            odd = odd + 1;
        }
        else if(a > 0 && a % 2 == 0)
        {
            even = even + 1;
        }
        else
        {
            
        }
         
    }while(a >= 1);

    cout << "奇数个数为：" << odd << endl;
    cout << "偶数个数为：" << even << endl;

    system("pause");

    return 0;
}