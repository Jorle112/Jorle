#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int n;
    cout << "请输入职工人数：";
    cin >> n;

    int a[10];
    int salary[10][3];
    int sum[10] = {0};
    int mon[10] = {0};


    cout << "请输入" << n << "个职工的编号及1到3月的工资：" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = 0; j < 3; j++) {
            cin >> salary[i][j];
            sum[i] += salary[i][j];
            mon[j] += salary[i][j];
        }
    }

    int avg[3];
    for(int i = 0;i<3;i++){
        avg[i] = mon[i] / n;
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += sum[i];
    }
    int avg1 = total / n;


    cout << "每月的平均工资及每个职工的季度工资和为：" << endl;
    cout << setw(12) << "职工号"<< setw(12) << "1月工资"<< setw(11) << "2月工资"<< setw(11) << "3月工资"<< setw(10) << "季度和" << endl;
    
    for (int i = 0; i < n; i++) {
        cout << setw(8) << a[i];
        for (int j = 0; j < 3; j++) {
            cout << setw(8) << salary[i][j];
        }
        cout << setw(8) << sum[i] << endl;
    }

    cout << setw(12) << "平均值";
    for (int i = 0; i < 3; i++) {
        cout << setw(8) << avg[i];
    }
    cout << setw(7) << avg1 << endl;

    system("pause");
    return 0;
}   