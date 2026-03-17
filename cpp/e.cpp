#include<iostream>
using namespace std;
int main()
{
    cout <<"2025110167 王家乐" << endl;
    char zm; //定义字母
    cout <<"请输入一个小写字母：";
    cin >> zm; //存数据到zm里

    cout << "输入的小写字母是：" << zm <<",其ASCII码是：" << int(zm) << endl; //整型输出ASCII码

    cout << "对应的大写字母是：" << char(int(zm)-32) << ",其ASCII码是：" << int(char(int(zm)-32)) << endl;  //大小写之间差32

    system("pause");

    return 0;
} 