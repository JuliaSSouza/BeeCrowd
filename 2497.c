#include <stdio.h>

int main(){

   int N, i = 0;

  while(N != -1){
    scanf("%d", &N);
    i++;

     printf("Experiment %d: %d full cycle(s)\n", i, N/2);    
  }
  
    return 0;
}