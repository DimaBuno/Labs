#include "stdio.h"
#include "stdlib.h"

int main(void) {
 int matrica[5][5];
 int **p;
 int s=5;
 int Count=0;
 
 p=malloc(sizeof(int)*s);
 for (int i = 0; i < s; i++){
   p[i]=malloc(sizeof(int)*s);
 }
 
 for (int i=0;i<s;i++){
   for (int j = 0; j<s;j++){
     scanf("%d",&matrica[i][j]);
   }
   printf("Новий рядок");
 }
 
 for (int i=0;i<s;i++){
   for (int j = 0; j<s;j++){
     if(matrica[i][j]<100){
       if(matrica[i][j]>9)
       Count++;
     }
   }
 }
 
 printf("\n Count: %d",Count);
}