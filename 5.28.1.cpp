#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int n;
    int a = 0;
    cout << "请输入一维数组元素的个数n(n<=50)：";
    cin >> n;

    int arr[50];
    srand(time(0));

    for(int i=0;i < n;i++)
    {
        arr[i] = rand() % 50 + 50;
    }

    cout << "删除偶数之前的一维数组：" << endl;
    for(int i=0;i < n;i++)
    {
       cout  << setw(4) << arr[i];
       if((i + 1) % 6 == 0)
       cout << endl; 
    }

    int arrb[n]; //新数组存放奇数
    for(int i=0;i < n;i++)
    {
        if(arr[i] % 2 != 0)
        {
            arrb[a] = arr[i];
            a++;
        }
    }

    cout << "删除偶数之后的一维数组：" << endl;
     for(int i=0;i < a;i++) //只存了a个奇数
    {
       cout  << setw(4) << arrb[i];
       if((i + 1) % 6 == 0)
       cout << endl; 
    }

    system("pause");
    return 0;
}