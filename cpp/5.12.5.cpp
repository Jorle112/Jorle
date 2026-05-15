#include<iostream> //
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

    cout << "请输入" << n << "个待排序的数：" << endl;
    for(int i = 0;i <n;i++)
    {
        cin >> arr[i];
    }

    cout << "排序后的结果为：" << endl;

    for(int i = 0;i < n;i++)
    {
        int max = i; //假设第一个数最大
        for(int j = i + 1;j < n;j++)
        {
            if(arr[j] > arr[max])
            {
                max = j; //最大的下标，这个后面的数也不会大于arr[max]
            }
        }
        swap(arr[i],arr[max]);
    }

    for(int i = 0;i <n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    system("pause");
    return 0;
}