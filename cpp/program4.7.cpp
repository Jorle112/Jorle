#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    int number,student,i = 1,p = 1;
    int id,Chinese,math,English;

    cout << "请输入班级数量：" ;
    cin >> number;
    do
    {
        cout << "===========================" << endl;
        cout << "请输入" << i << "班的学生数量：";
        cin >> student;

        do
        {
            cout << "请输入第" << p << "个学生的学号、语文、数学、英语成绩：" << endl;
            cin >> id >> Chinese >> math >> English;
            
            if(Chinese > math && Chinese > English) //同时满足
            {
                cout << "学生" << id << "语文成绩好！语文成绩为：" << Chinese << endl;
            }
            else if(math > Chinese && math > English)
            {
                cout << "学生" << id << "数学成绩好！数学成绩为：" << math << endl;
            }
            else
            { 
                cout << "学生" << id << "英语成绩好！英语成绩为：" << English << endl;
            }  
            p = p + 1;
        }while(p <= student);
        
        i = i + 1;
        p = 1; //初始化p
    }while(i <= number);
    
    system("pause");

    return 0;
}