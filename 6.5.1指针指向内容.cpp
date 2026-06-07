#include <iostream>
#include <cmath>
#include<cstdlib>
using namespace std;
int main() {
    system("chcp 65001");
    cout << "2025110167王家乐" << endl;

    double pi_over_4 = 0.0; 
    double term = 1.0;
    int n = 1;
    int sign = 1;
    
    double *p_pi = &pi_over_4;  
    double *p_term = &term;      

    while (*p_term >= 1e-6) {
        *p_pi += sign * (*p_term);  
        n++;
        sign = -sign; 
        *p_term = 1.0 / (2 * n - 1);
    }
    
    double pi = 4 * (*p_pi);    
    
    cout << "PI的近似值为：" << pi << endl;
    
    system("pause");
    return 0;
}