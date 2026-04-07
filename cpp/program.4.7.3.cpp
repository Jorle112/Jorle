#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int number1,number2;
    int temp,d;
    int count = 0;

    cout << "请按从小到大的顺序输入两个正整数：" << endl;
    cin >> number1 >> number2 ;

    cout << number1 << "到" << number2 << "之间各位数字之和为7的数有：" << endl; //先文字后输出

    for(int a = number1; a <= number2; a++)
    {
        int temp = a;
        int b = 0;
        while(temp > 0) //循环求和
        {
            b = b + temp % 10; // 末尾求和
            temp = temp / 10; //减一位
        }
        if(b == 7)
        {
            cout << a << "\t"; // \t对齐
            count ++; // 计数
            if(count % 5 == 0)
            {
                cout << endl; // 间距
            }
        }
    }
    if(count % 5 != 0)
    {
        cout << endl; //不满5依旧换行
    }

    system("pause");

    return 0;
}