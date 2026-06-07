#include <iostream>
#include <iomanip>
#include<cstdlib>
using namespace std;
int main() {

    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int n;
    cout << "请输入n值(n<10): ";
    cin >> n;
    
    int size = 2 * n - 1;
    int center = n - 1;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int layer = max(abs(i - center), abs(j - center));
            cout << setw(3) << (layer + 1);
        }
        cout << endl;
    }
    
    system("pause");
    return 0;
}