#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int abc(int arr[], int n, int a, int &b) 
{
    int left = 0, right = n - 1;
    b = 0; 

    while (left <= right)  //折半查找
    {
        int mid = left + (right - left) / 2;
        b++;  

        if (arr[mid] == a) 
        {
            return mid + 1; 
        }
        else if (a > arr[mid]) 
        {
            right = mid - 1;
        }
        else 
        { 
            left = mid + 1;
        }
    }
    return -1;  
}

int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int arr[20];
    int n,a;
    cout << "请输入数组元素个数(n<=20)：";
    cin >> n;

    cout << "请按照降序输入" << n << "个元素：" << endl;
    for(int i=0;i < n;i++)
    {
        cin >> arr[i];
    }

    int c;
    do
    {
        cout << "***********************************************" << endl;
        cout << "请输入需要查找的数据：";
        cin >> a;

        int b;
        int flag = abc(arr,n,a,b);

        if(flag != -1)
        {
            cout << "查找成功！该数在第" << flag << "个位置" << endl;
            cout << "查找" << a << "总共比较：" << b << "次" << endl;
        }
        else 
        {
            cout << "查无此数！" << endl;
            cout << "查找" << a << "总共比较：" << b << "次" << endl;
        }

        cout << "如需继续查找请输入1，如需退出请输入其他整数：";
        cin >> c;

    } while (c == 1);
    
  