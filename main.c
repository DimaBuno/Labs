#include "stdio.h"

struct city {
 char *name;
 int population;
 int square;
};
int Density (int pop, int sqr){
  int k= pop/sqr;
  return(k);
}   
   
int main(void) {
  
  char n;
  struct city c[3];
  int d;
  int s=0;
  
  for(int i=0;i<3;i++){
    printf("Введіть назву міста: \n");
    scanf("%s",&c[i].name);
    printf("Введіть кількість населення: \n");
    scanf("%d",&c[i].population);
    printf("Введіть площу міста: \n");
    scanf("%d",&c[i].square);
    }
  }
  
  for (int i=0;i<3;i++){
    d=Density(c[i].population,c[i].square);
    if (s<d){
      s=d;
      n = c[i].name;
    }
  }
  
  printf("%s", n);
}