#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;
    double x,y;
    cout << "请输入x的值：";
    cin >> x;

    if(x<0){
        y = x;
    }
    else {   // else 框架
        if(x < 10){
        y = 2*x - 1;
    }
    else{
        y = 3*x - 1;
    }
    }

    cout << "y=" << y << endl;

    system("pause");
   
    return 0;
}