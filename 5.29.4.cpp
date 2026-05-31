#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
void sort(int a[],int n)
{
    for(int i=0;i < n - 1;i++) //最后一个不用排
    {
        for(int j=0;j < n - i - 1;j++) //已经排好的不用排
        {
            if(a[j] < a[j+1])
            swap(a[j],a[j+1]);
        }
    }

}

int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int n;
    int arr[100];
    cout << "请输入数组的实际长度：";
    cin >> n;

    cout << "请输入待排序的数：" << endl;
    for(int i=0;i < n;i++)
    {
        cin >> arr[i];
    }

    sort(arr,n);

    cout << "排序后的结果为：" << endl;
    for(int i = 0;i < n;i++)
    {
        cout << setw(4) << arr[i];
    }
    cout << endl;

    system("pause");
    return 0;
}