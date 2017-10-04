#include <stdio.h>

int func(int a) {
  a=(a &(~a+1));
  return a;
}

int main (){
  int x;
   scanf("%d",&x);
  printf("%d", func(x));
}
