#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout<<"2025110167王家乐"<<endl;
    cout<<"请输入一个三位数："<<endl;
    int num;

    cin>>num;

    int a=num/100; //获取百位数
    int b=num/10%10; //获取十位数
    int c=num%10;  //获取个位数
    int rs = c*100 + b*10 +a; //求逆序数
    int result = rs*2; //逆序数的两倍

    cout<<num<<"的百位是："<<a<<endl;
    cout<<num<<"的十位是："<<b<<endl;
    cout<<num<<"的个位是："<<c<<endl;
    cout<<num<<"的逆序数是："<<rs<<endl;
    cout<<num<<"的逆序数乘以2是："<<result<<endl;

    system("pause");
    return 0;
}