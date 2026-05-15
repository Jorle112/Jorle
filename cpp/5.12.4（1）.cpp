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
    for(int i = 0;i < n;i++) //循环输入
    {
        cin >> arr[i];
    }

    int max = arr[0]; //假设最大是是第一个
    int down = 0;

    for(int  i = 1;i < n;i++)
    {
        if(arr[i] >= max) //发现更大的就替换
        {
            max = arr[i];
            down = i; //标记下标
        }
    }
    
    for(int i = down;i < n-1;i++) //注意n-1
    {
        arr[i] = arr[i+1];
    }

    cout << "删除最大元素之后的数组为：" << endl;
    for(int i = 0;i < n-1;i++)
    {
        cout << arr[i] << " ";
    }

    system("pause");
    return 0;
}
