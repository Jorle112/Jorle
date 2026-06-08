#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int a[10];
    int n;
    cout << "10个10到100间的随机整数为：" << endl;

    srand(time(0));
    for(int i = 0;i < 10;i++){
        a[i] = rand() % 91 + 10;
        cout << a[i] << "  ";
    }
    cout << endl;

    for(int i = 0;i < 9;i++){
        for(int j = 0;j < 9-i;j++){
            if(a[j] < a[j+1])
            swap(a[j],a[j+1]);
        }
    }

    cout << "按从大到小排列的结果为：" << endl;
    for (int i = 0; i < 10; i++) {
        cout << a[i] << "  ";
    }
    cout << endl;

    int b;
    cout << "请输入要查找的数：";
    cin >> b;

    int left = 0,right = 9;
    int mid;
    int found = 0;

    while(left <= right){
        mid = (left + right) / 2;
        if(a[mid] == b){
            found = 1;
            break;
        }else if(a[mid] > b){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }

    if(found){
        cout << b << "在第" << mid + 1 << "个位置。" << endl;
    }

    system("pause");
    return 0;
}