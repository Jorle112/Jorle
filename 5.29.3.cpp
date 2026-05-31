#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
double count(double score[],int n)
{
    double flag = 0; //确定几个及格
    double result;
    double a = n;
    for(int i=0;i < n;i++)
    {
        if(score[i] >= 60)
        flag++;
    }
    result = flag / a;
    return result;
}

int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int n;
    double score[40];
    cout << "请输入学生人数n(n<=40)：";
    cin >> n;

    cout << "请输入" << n << "个学生的《程序设计》成绩：" << endl;
    for(int i = 0;i < n;i++)
    {
        cin >> score[i];
    }

    double result = count(score,n) * 100;

    cout << "《程序设计》课程的及格率为：" << result << "%" << endl;

    system("pause");
    return 0;
}