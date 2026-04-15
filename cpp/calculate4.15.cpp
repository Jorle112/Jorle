#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    double increase;
    double result = 100;
    int times = 1;
    cout << "请输入年增长率：";
    cin >> increase;

    do
    {
        result = result * (1 + increase);

        cout << times << "年后的产值为：" << result << endl;
        times = times + 1;
    } while (result <= 200);

    cout << "需要" << times-1 << "年" << endl;

    system("pause");
    return 0;
}