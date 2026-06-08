#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int a[11];
    cout << "自动生成的10个整数：" << endl;
    for(int i = 0;i < 10;i++){
        if(i == 0 || i == 1){
            a[i] = 1;
        }else{
            a[i] = a[i-1] + a[i-2];
        }
    }

    for(int i = 0;i < 10;i++){
        cout << a[i] << "  ";
    }
    cout << endl;

    cout << "输入待插入的数据：";
    cin >> a[10];

    for(int i = 0;i < 11;i++){
        for(int  j = 0;j < 10-i;j++){
            if(a[j] > a[j+1])
            swap(a[j],a[j+1]);
        }
    }

    cout << "插入后数组序列为：" << endl;
    for(int i = 0;i < 11;i++){
        cout << a[i] << "  ";
    }
    cout << endl;

    double n = 11.0;
    for(int i = 1;i < n;){
        if(a[i] == a[i-1]){
            for(int j = i;j < n-1;j++){
                a[j] = a[j+1];
            }
            n--;
        }else{
        i++;
        }
    }

    double total = 0.0;
    cout << "去重后数组序列为：" << endl;
    for(int i = 0;i < n;i++){
        cout << a[i] << "  ";
        total += a[i];
    }
    cout << endl;

    cout << "数组所有元素平均值为：" << total / n << endl;

    system("pause");
    return 0;
}