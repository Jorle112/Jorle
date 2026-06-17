#include<iostream>
#include<cstdlib>
using namespace std;
bool isright(int year){
    return(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void MonthDay(int year,int num,int &month,int &day){
    int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    if(isright(year)){
        arr[2] = 29;
    }

    int a = 1;

    while(num > arr[a]){
        num -= arr[a];
        a ++;
    }

    month = a;
    day = num;
}

int main(){
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;
    
    int year, num;
    int month, day;
    
    cout << "请输入一个年份：";
    cin >> year;
    cout << "今天是" << year << "年的第几天：";
    cin >> num;
    
    MonthDay(year, num, month, day);
    
    cout << year << "年的第" << num << "天是" << month << "月" << day << "号" << endl;
    
    system("pause");

    return 0;
}