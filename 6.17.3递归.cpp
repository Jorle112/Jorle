#include<iostream>
#include<cstdlib>
using namespace std;

int f(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }

    return f(n - 1) + 2 * f(n - 2);
}

int main() {
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int n;
    
    cout << "请输入数列项的序号：";
    cin >> n;
    
    int result = f(n);
    
    cout << "数列的第" << n << "项为：" << result << endl;
    
    system("pause");
    return 0;
}
