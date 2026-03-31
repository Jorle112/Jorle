#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;
 
    int a=0;
    int number;

    for(number=1;number < 10000; number ++) //10000以内循环一遍
    {
        if(number%3==1 && number%5==2 && number%7==1) //是否满足条件
        {
            a = a + 1; // 满足加一
        }
        else
        {
            a == a; //不满足保持不变
        }
    }

    cout <<"10000以内除以3余1、除以5余2、除以7余1的正整数有" << a << "个" << endl;

    system("pause");

    return 0;
}
