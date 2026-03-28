#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;
    
    double height,weight;
    double BMI ;

    cout << "请输入体重（公斤）：" ;
    cin >> weight ;

    cout << "请输入身高（厘米）：" ;
    cin >> height ;

    BMI = weight / (height / 100*height / 100) ; //计算BMI

    if(BMI < 18.5)
    {
        cout << fixed << setprecision(2) << "BMI=" << BMI << "，偏瘦！" << endl;
    }
    else if(BMI >= 18.5 && BMI < 24)
    {
        cout << fixed << setprecision(2) << "BMI=" << BMI << "，正常！" << endl;
    }
    else if(BMI >= 24 && BMI < 27)
    {
        cout << fixed << setprecision(2) << "BMI=" << BMI << "，偏胖！" << endl;
    }
    else if(BMI >= 27 && BMI < 30)
    {
        cout << fixed << setprecision(2) << "BMI=" << BMI << "，肥胖！" << endl;
    } 
    else if(BMI >= 30 && BMI < 40)
    {
        cout << fixed << setprecision(2) << "BMI=" << BMI << "，重度肥胖！" << endl;
    }
    else
    {
        cout << fixed << setprecision(2) << "BMI=" << BMI << "，极重度肥胖！" << endl;
    }
    
    system("pause");

    return 0;
}
