#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int n;
    cout << "请输入矩阵的阶数：";
    cin >> n;

    int a[10][10];
    cout << "请输入" << n << "阶矩阵的元素，两个数之间用空格间隔，每行输完后按回车：" << endl;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j]; // 00->01->02......
        }
    }

    int max = a[0][0];
    int max_x=0,max_y=0;
    for(int i=0;i<n;i++){
        if(a[i][i]>max){
            max = a[i][i];
            max_x=i+1;
            max_y=i+1;
        }
    }

    int min = a[0][n-1];
    int min_x=n-1;
    int min_y=n-1;
    for(int i=0;i<n;i++){
        if(a[i][n-i-1]<min){
            min = a[i][n-i-1];
            min_x=i+1;
            min_y=n-i-1+1;
        }
    }

    cout << "主对角线元素的最大值为：" << max << "，位于第" << max_x << "行，第" << max_y << "列" << endl;
    cout << "次对角线元素的最大值为：" << min << "，位于第" << min_x << "行，第" << min_y << "列" << endl;

    swap(a[max_x-1][max_y-1],a[min_x-1][min_y-1]);

    cout << "互换后的结果矩阵为：" << endl;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cout << setw(4) << a[i][j]; 
        }
        cout << endl;
    }

    system("pause");
    return 0;
}   