#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int price;
    int quantity;
    cout << "请输入客户购买笔袋的数量：";
    cin >> quantity;
    
    int a = quantity / 50; //整除使范围变成具体的值

    switch(a)
    {
        case 0:
        price = 38;
        break;

        case 1:
        price = 35;
        break;

        case 2:
        case 3:
        price = 32;
        break;

        case 4:
        case 5:
        price = 30;
        break;

        default:
        price = 28;
        break;
    }

    int total = price * quantity;
    cout << "客户购买总金额为：" << total <<endl;

    system("pause");

    return 0;

}