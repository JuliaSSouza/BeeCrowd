#include <stdio.h>
#include <string.h>

int main()
{
    int N;
     scanf ("%d", &N);

    int xs[N + 1];

    for (int i = 1; i <= N; ++i)
         scanf("%d", &xs[i]);

   // sitios já atacados
    int as[N + 1];
    memset(as, 0, sizeof as);

    int pos = 1;

   while (1 <= pos && pos <= N)
   {
        as[pos] = 1;
        int dir = xs[pos] % 2 == 0 ? -1: 1;

        if (xs[pos] > 0)
             --xs[pos];

        pos += dir;
   }
    long long nao_roubados = 0, atacados = 0;

 for (int i = 1; i <= N; ++i)
    {
        atacados += as[i];
        nao_roubados += xs[i];
    }
 
 printf("%lld %lld\n", atacados, nao_roubados);

 return 0;
}
                  