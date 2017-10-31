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
  
  char *n;
  struct city c[3];
  int d;
  int s=0;
  
  c[0].name = "Lviv";
  c[0].population = 40;
  c[0].square = 20; //den =2
  
  c[1].name = "Khmelnitsky";
  c[1].population = 100;
  c[1].square = 20; //den =5
  
  c[2].name = "Kyiv";
  c[2].population = 300;
  c[2].square = 30; //den =10
  
  
  for (int i=0;i<3;i++){
    d=Density(c[i].population,c[i].square);
    if (s<d){
      s=d;
      n = c[i].name;
    }
  }
  printf("%s", n);
}