#include<iostream>
#include<cstdlib>
using namespace std;

int c(int n,int m){
    if(m == 0 || m == n){
        return 1;
    }

    return c(n-1,m) + c(n-1,m-1);
}

int main(){
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int n,m;
    cout << "请按从大到小的顺序输入两个正整数：";
    cin >> n >> m;

    int result = c(n,m);

    cout << n << "选" << m << "的组合数为：" << result << endl;;

    system("pause");
    return 0;
}