#include<iostream>
#include<cstdlib>
using namespace std;
void prevMonth(int *year, int *month){
    if(*month ==1){
        *month = 12;
        *year = *year - 1;
    }else{
        *month = *month - 1;
    }
}

int main(){
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int  year,month;
    cout << "请输入年和月（以空格分隔）：";
    cin >> year >> month;

    prevMonth(&year, &month); //传地址给指针接收

    cout << "前一个月为：" << year << "年" << month << "月" << endl;

    system("pause");
    return 0;
}