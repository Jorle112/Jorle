#include<stdio.h>
int main(){
  volatile int password=0;
  char input[8];
  
  printf("--侦察内存地形--\n");
  printf("输入框的地址:%p\n",input);
  printf("密码的地址:%p\n",&password);
  
  long long dist=(long long)&password-(long long)input;
  printf("距离为:%lld字节\n",dist);
  return 0;
}
