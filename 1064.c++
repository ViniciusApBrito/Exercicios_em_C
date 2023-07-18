// problema 1064

#include <stdio.h>
 
int main() {
   float num, soma = 0;
   int qtd = 0;
 
   for(int i =0; i<6; i++){
     scanf("%f", &num);
     if(num > 0){
         qtd++;
         soma += num;
     }
   }
 
   printf("%d valores positivos\n", qtd);
   printf("%.1f\n", soma/qtd);
 
   return 0;
}