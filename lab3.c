#include "stdio.h"
int main(void) {
char str[5];
char sym = str[0];
int m = 0;
int k=0;
scanf("%s",&str);
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (j == i) j++;
      if (str[i] == str[j]) k++;
    }
    if (k>m){ 
    k=m;sym=str[i];
    }
}
printf("%c",sym);
}