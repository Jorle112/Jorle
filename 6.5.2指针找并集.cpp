#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int a[10], b[10], c[100];
    int m, n;
    int len = 0;
    
    cout << "请输入数组a的个数m：";
    cin >> m;
    cout << "请输入数组a的" << m << "个数：" << endl;
    for (int i = 0; i < m; i++) {
        cin >> *(a + i); //等价于a[i]
    }
    
    cout << "请输入数组b的个数n：";
    cin >> n;
    cout << "请输入数组b的" << n << "个数：" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(b + i);
    }
    
    for (int i = 0; i < m; i++) {
        *(c + len) = *(a + i);
        len++;
    }

    for (int i = 0; i < n; i++) {  //在b中循环查找
        int *p = a;
        int found = 0;
        
        for (int j = 0; j < m; j++) {  //遍历a中的数看是否与b对应
            if (*p == *(b + i)) {
                found = 1;
                break;
            }
            p++;
        }
        
        if (found == 0) {
            *(c + len) = *(b + i);
            len++;
        }
    }
    
    cout << "并集为：" << endl;
    for (int i = 0; i < len; i++) {
        cout << *(c + i) << " ";
    }
    cout << endl;
    
    system("pause");
    return 0;
}
