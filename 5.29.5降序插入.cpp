#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int insert(int a[],int n,int x)
{
    int b = n; //保证x小于所有数时的输出
    for(int i = 0;i < n;i++)
    {
        if(x > a[i])
        {
            b = i;
            break; //缺少break会一直赋值到最后一个数，因为是降序
        }
    }
    for(int i = n;i > b;i--)
    {
        a[i] = a[i-1];
    }
    a[b] = x;
    return b + 1;
}



int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int n;
    int arr[100];

    cout << "请输入原降序数列的数据个数(<20)：";
    cin >> n;

    cout << "请输入" << n << "个数(降序)：" << endl;
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }

    for(int i=1;i<=2;i++)
    {
        cout << "******************************" << endl;
        int input;
        cout << "请输入欲插入的第" << i << "个数：";
        cin >> input;
        int c = insert(arr,n,input);

        cout << "插入在第" << c << "个位置" << endl;
        cout << "插入第" << i << "个数之后的数据序列为：" << endl;
        for(int j = 0;j <= n;j++)
        {
            cout << arr[j] << " "; 
        }
        cout << endl; 
        n++; //缺少会导致位置不够
    }

    system("pause");
    return 0;
}