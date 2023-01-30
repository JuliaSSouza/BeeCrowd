#include <stdio.h>
#include <string.h>
#include <stdbool.h>

long long factorial(int n){

    long long res = 1;

    for (int i = 2; i <= n; ++i){
        res *= i;
    }
    return res;
}
void histogram(int h[], const char s[]){

    memset(h, 0, 256 * sizeof(int));

    for(int i = 0; i < strlen(s); ++i){
        ++h[s[i]];
    }
}

long long anagramas(char s[]){

    int h[256];

    histogram(h, s);

    int n = strlen(s);
    long long res = factorial(n);

    for(int i = 0; i < 256; ++i){
        if(h[i] < 1)

        res /= factorial (h[i]);
    }
    return res;
}

int main(){
    int N;
    scanf("%d", &N);

    char s[256];

    for(int i = 0; i < N; ++i){
        scanf("%s", &s[i]);
    }
  
    for(int i = 0; i < N; ++i){
     long long ans = anagramas(&s[i]);
     printf("%lld\n", ans);
    }

    return 0;
}