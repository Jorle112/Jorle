#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    double arr[15];
    double total = 0;
    int a = 0;

    cout << "请输入15个实型数：" << endl;
    for(int i = 0;i < 15;i++)
    {
        cin >> arr[i];
    }

    for(int i = 0;i < 15;i++)
    {
        total = total + arr[i];
        cout << setw(10) << arr[i];
        if((i + 1) % 5 == 0) //满5换行
        {
            cout << endl;
        }
    }
    total = total/15.0;

    int left = 0,right = 14; 
    while(left < right)
    { //遇到不满足条件的就截止，交换位置
        while(left < right && arr[left] >= total) //从左往右
        {
            left ++;
        }
        while(left < right && arr[right] < total)
        {
            right --;
        }

        swap(arr[left],arr[right]); //交换
    }

    cout << "调整后的数据为：" << endl;

    for(int i = 0;i < 15;i++)
    {
            cout << setw(10) << arr[i];
            if((i + 1) % 5 == 0)
            {
                cout << endl;
            }
    }
    cout << setw(10) << total << endl;

    system("pause");

    return 0;
}