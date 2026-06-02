#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    const int M = 10;
    int x[M][M] = {0};
    int m;

    cout << "请输入m值：" ;
    cin >> m;

    
    for(int i = 0;i<m;i++){
        int count = m;
        for(int j=0;j<m-i;j++){
            x[i][j] = i + 1;
            if(j > 0){
                x[i][j] = x[i][j-1] + count;
                count--;
            }
        }
    }

    for(int i = 0;i<m;i++){
        for(int j=0;j<m-i;j++){
            cout << setw(4) << x[i][j];
        }
        cout << endl;
    }

    int a = 4;
    int count = 0;
    cout << "倒三角输出：" << endl;
    for(int i = 0;i<m;i++){
        if(i>0){
        for(int k = 0;k<(i+1)*4;k++){
            cout << " ";
        }
    }
    else{
        cout << "    ";
    }
        for(int j=0;j<m-i;j++){
            if(j>0){
                cout << setw(8) << x[i][j];
            }
            else{
                cout <<  x[i][j];
            }
        }
        cout << endl;
    }

    system("pause");
    return 0;
}