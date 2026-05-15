#include<iostream> //删除最大值
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int n;
    int arr[20];

    cout << "请输入数组元素的个数(n<=20)：";
    cin >> n;

    cout << "请输入" << n << "个数组元素：" << endl;
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }

    cout << "删除最大元素之后的数组为：" << endl;

    for(int j = 0;j < n-1;j++)
    {
        if(arr[j] > arr[j+1])
        {
            swap(arr[j],arr[j+1]);   
        }
        cout << arr[j] << " ";
    }

    system("pause");
    return 0;
}