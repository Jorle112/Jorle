#include<iostream>
using namespace std;
#define day 7
int main()
{ 
    
    cout << "一周有" << day << "天" << endl;
    //day = 8;错误哦

    const int month = 12;

    cout << "一年有" << month << "个月" << endl;
    //month不能变哦

    system("pause");

    return 0;
}