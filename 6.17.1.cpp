#include<iostream>
#include<cstdlib>
using namespace std;
void gcd_lcm(int x,int y,int &divisor,int &multiple){
    int a = x;
    int b = y;
    int r;

    while(y != 0){
        r = x % y;
        x = y;
        y = r;
    }

    divisor = x;
    multiple = a * b / divisor;
}

int main(){
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int a,b,c,d;
    
    cout << "请输入两个正整数：";
    cin >> a >> b;

    gcd_lcm(a,b,c,d);

    cout << "正整数" << a << "和" << b << "的最大公约数为" << c << "，最小公倍数为" << d << endl;

    system("pause");
}