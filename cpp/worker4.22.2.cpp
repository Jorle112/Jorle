#include<iostream>
#include<cstdlib>
#include<ctime> // 加入随机时间
using namespace std;

int result(int num1, int num2,char op) //构造一个子函数接收数字和符号
{
    int result = 0;
    if(op == '+')
    {
        result = num1 + num2;
    }
    else if(op == '-')
    {
        result = num1 - num2;
    }
    else if(op == '*')
    {
        result = num1 * num2;
    }

    return result;
}

int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    srand(time(0)); //随机题目

    int a = rand() % 10 + 1; //1~10 原本是0~9
    int b = rand() % 10 + 1; 

    int opcode = rand() % 3; //随机0~2
    char op;

    if(opcode == 0)
    {
        op = '+';
    }
    else if(opcode == 1)
    {
        op = '-';
    }
    else if(opcode == 2)
    {
        op = '*';
    }
    
    int in;
    cout << "请计算" << a << op << b << "=";
    cin >> in;

    int answer = result(a,b,op);

    if(answer == in)
    {
        cout << "计算准确！" << endl;
    }
    else
    {
        cout << "计算错误！" << a << op << b << "=" << answer << endl;
    }

    system("pause");
    return 0;
}
