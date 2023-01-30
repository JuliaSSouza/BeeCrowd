#include <stdio.h>

  int main() {

  long long int fs[100];

    fs[0] = 0;
    fs[1] = 1;

    for(int i = 2; i < 100; i++)
      fs[i] = fs[i - 1] + fs[i - 2];
  

    int T, N;
  scanf("%d", &T);

  for(int i = 0; i < T; i++){
      scanf("%d", &N);
      printf("Fib(%d) = %lld\n", N, fs[N]);
}
     return 0; 
   
  }