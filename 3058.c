#include <stdio.h>

int main(){

int N, preco[1001];
scanf("%d", &N);

double ans[1001], gramas[1001], menor;

for(int i = 0; i < N; i++){
scanf("%lf %d", &gramas[i], &preco[i]);

ans[i] = preco[i]/gramas[i]; 
}

menor = ans[0];

for(int i = 0; i < N; i++){
  if(ans[i] < menor)
    menor = ans[i];
}

  printf("%.2f\n", menor);

    return 0;
}
  