#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int choice,number,result;
    char a;
    int b = 0; //初始化b来做累加
    int place = 1; //初始化place来定位

    do
    {
    cout << "*********************" << endl;
    cout << "    进制转换系统      " << endl;
    cout << "1、八进制转换为十进制  " << endl;
    cout << "2、十进制转换为八进制  " << endl;
    cout << "*********************" << endl;

    cout << "请选择序号1或2：" ;
    cin >> choice;

    cout << "请输入欲转换的数据：" ;
    cin >> number;

    switch(choice)
    {
        case 1:
        result = number/100*(8*8) + number%100/10*(8) + number%100;
        cout << "转换为：" << result << endl;
        break;

        case 2:
        while(number >0)
        {
        int digit = number % 8; //求最后一位
        b = b + digit * place; // 放在对应位置
        
        number = number / 8; //减一位
        place = place * 10;  //加一位继续求新的最后一位
        }
        cout << "转换为：" << b << endl;
        break;

    } 
    cout << "是否继续转换？ y/n:";
    cin >> a;    

    }while(a == 'y'); //字符char

    cout << "谢谢使用！再见！" << endl;

    system("pause");

    return 0;
}