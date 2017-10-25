#include "stdio.h"
int main(void) {
char str[200];
char sym = str[0];
int m = 0;
int k=0;
scanf("%s",&str);
for (int i = 0; i < strlen(str) ; i++) {
    for (int j = 0; j < strlen(str) ; j++) {
      if (j == i) j++;
      if (str[i] == str[j]) k++;
    }
    if (k>m){ 
    k=m;sym=str[i];
    }
    if (k=1){
    sym=str[i];
    }
}
printf("%c",sym);
}
