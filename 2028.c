#include <stdio.h>

int main(){
    int N, test = 1;

    while(scanf("%d", &N) != EOF){

        int size = 1 + N*(N + 1)/2;

        printf("Caso %d: %d numero%s\n", test++, size, (size == 1 ? "" : "s"));

        printf("0");

        for(int i = 1; i <= N; ++i)
            for(int k =0; k < i; ++k)
              printf(" %d", i);

        printf("\n\n");      
    }
    return 0;
}