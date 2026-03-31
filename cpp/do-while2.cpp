#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    double pay;
    int i = 0;
    double tax = 0;
    double total = 0;

    do
    {
        total = total + tax; //计算总缴税

        i = i + 1; //循环加一表示第几个职工
        cout << "请输入第" << i << "位职工的工资（负数结束）：";
        cin >> pay;

        if(pay >= 0 && pay <= 5000) //判断符合条件进入程序
        {
            tax == tax;

            cout << "第" << i << "位职工的工资为：" << pay << ",缴税额为：" << tax << endl;

            cout << "**************************************" << endl;
        }
        else if(pay > 5000 && pay <= 8000)
        {
            tax = (pay-5000)*0.03;

            cout << "第" << i << "位职工的工资为：" << pay << ",缴税额为：" << tax << endl;

            cout << "**************************************" << endl;
        }
        else if(pay > 8000 && pay <= 17000)
        {
            tax = (pay-8000)*0.1 + 3000*0.03;

            cout << "第" << i << "位职工的工资为：" << pay << ",缴税额为：" << tax << endl;

            cout << "**************************************" << endl;
        }
        else if(pay > 17000)
        {
            tax = (pay-17000)*0.2 + 9000*0.1 + 3000*0.03;

            cout << "第" << i << "位职工的工资为：" << pay << ",缴税额为：" << tax << endl;

            cout << "**************************************" << endl;
        }
        else
        {
            cout << endl ;
        }


    }while(pay <= 30000 && pay >= 0); //do-while使程序重复运行

    cout << "职工总人数为：" << i-1 << ",总缴税额为：" << total << endl; //i-1为总人数

    system("pause");

    return 0;
}