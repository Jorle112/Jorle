#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    cout << "******新一局******" << endl;
    cout << "   1.    出剪子   " << endl;
    cout << "   2.    出石头   " << endl;
    cout << "   3.    出布     " << endl;
    cout << "******************" << endl;

    int a, b;
    cout << "请输入甲的选择(1~3):";
    cin >> a;
    cout << "请输入乙的选择(1~3):";
    cin >> b;

    switch(a)
    {
        case 1:
            switch(b)
            { 
            case 1:
            cout << "结果为：平局" << endl;
            break;
            
            case 2:
            cout << "结果为：乙胜" << endl;
            break;

            case 3:
            cout << "结果为：甲胜" << endl;
            break;
            }
        break;

        case 2:
            switch(b)
            {
            case 1:
            cout << "结果为：甲胜" << endl;    
            break;

            case 2:
            cout << "结果为：平局" << endl;
            break;

            case 3:
            cout << "结果为：乙胜" << endl;
            break;
            } 
        break;    
            
        case 3:
            switch(b)
            {
            case 1:
            cout << "结果为：乙胜" << endl;    
            break;

            case 2:
            cout << "结果为：甲胜" << endl;
            break;

            case 3:
            cout << "结果为：平局" << endl;
            break;
            }
        break;        
    }



    system("pause");

    return 0;

}