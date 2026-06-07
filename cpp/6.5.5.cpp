#include <iostream>
#include <string>
using namespace std;

int main() {
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;
    string str;
    
    cout << "请输入要加密的信息：" << endl;
    getline(cin, str);  
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = (str[i] - 'A' + 21) % 26 + 'A';
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = (str[i] - 'a' + 21) % 26 + 'a';
        }
    }
    
    cout << "加密后的信息为：" << endl;
    cout << str << endl;
    
    system("pause");
    return 0;
}