#include<iostream>
#include<cstdlib>
using namespace std;
void move(int *p,int m,int n){
    n = n % m;
    for(int i = 0;i < n;i++){
        int temp = *p;
        for(int j = 0;j < m - 1;j++){
            *(p+j) = *(p+j+1);
        }
        *(p+m-1) = temp;
    }
}

int main(){
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int m,n;
    int a[100];

    cout << "请输入数据个数m：";
    cin >> m;

    for(int i = 0;i < m;i++){
        if(i == 0 || i == 1){
            a[i] = 1;
        }else{
            a[i] = a[i-1] + a[i-2];
        }
    }

    cout << "移动前的数据为：" << endl;
    for(int i = 0;i < m;i++){
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "请输入左移的位数n：";
    cin >> n;

    move(a,m,n);

    cout << "移动后的数据为：" << endl;
    for(int i = 0;i < m;i++){
        cout << a[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}