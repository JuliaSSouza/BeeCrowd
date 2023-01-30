#include <stdio.h>

int main(){

int N, max, entrou[1001], saiu[1001], total;

int ultrapassou = 0;  

scanf("%d %d ", &N, &max);

for(int i = 0; i < N; ++i){
scanf("%d %d", &saiu[i], &entrou[i]);

total += entrou[i] - saiu[i];
 
if(total > max){
   printf("S\n");
   ultrapassou = 1;
  break;
  }
}

if(!ultrapassou)  
printf("N\n");

    return 0;
}
 