#include <stdio.h>

int main(){
    int numeros[100], i, count_numeros[100], j, n, numero, maior;

    scanf("%d", &n);

    for(int i = 0; i < n; ++i){
        scanf("%d", &numeros[i]);
        count_numeros[i] = 1;
    }

    for(int i = 0; i < n; ++i){
        // printf("Analisando o numero da posicao %d: %d", i, numeros[i]);
        numero = numeros[i];
        for(int j = 0; j < n; ++j){
            if(j != i){
                if(numero == numeros[j]){
                    count_numeros[i] += 1;
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d possui %d repeticoes\n", numeros[i], count_numeros[i]);
    }

    maior = count_numeros[0];

for(int i = 0; i < n; ++i){
    if(count_numeros[i] > maior){
        maior = count_numeros[i];
    }
}
    //esse da segmentation fault
    printf("%d\n", count_numeros[i]);

    //esse imprime a quantidade de repetições e não o número que mais se repetiu
  printf("%d\n", maior);

  
    return 0;
}