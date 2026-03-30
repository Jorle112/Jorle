#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;
    
    int peaches,days,total;
    cout << "请输入还剩一个桃子时已吃桃天数：";
    cin >> days;

    for(peaches = 1;days >= 1;days --) //循环写条件
    {
        peaches = 2*(peaches + 1);
    }

    cout << "原有桃子数量为" << peaches << "个" << endl;

    system("pause");
    
    return 0;
}