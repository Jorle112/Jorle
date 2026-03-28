#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int a,b,c;
    cout << "请输入三角形的三条边长：";
    cin >> a >> b >> c;

    if(a+b<=c || a+c<=b || b+c<=a || a-b>=c || a-c>=b || b-c>=a) //判断是否为三角形，用||（或），满足一个判断就不是三角形啦
    {
        cout << "不能构成三角形" << endl;
    }
    else if(a==b && b==c) //&&，严格相等为等边
    {
        cout << "可以构成等边三角形" << endl;
    }
    else if( a==b || b==c || a==c) //满足一个为等腰
    {
        cout << "可以构成等腰三角形" << endl;
    }
    else //其余为普通
    {
        cout << "可以构成一般三角形" << endl;
    }

    system("pause");

    return 0;
}