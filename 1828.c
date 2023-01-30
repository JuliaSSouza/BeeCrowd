#include <stdio.h>
#include <string.h>

int main ()
{
  int n;
  char sheldon[256], raj[256];

  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    scanf("%s %s", sheldon, raj);
    
    if (strcmp(sheldon, raj) == 0)
      printf("Caso #3: De novo!\n");
    else if (strcmp(sheldon, "Spock") == 0 && strcmp(raj, "pedra") == 0)
      printf("Caso #1: Bazinga!\n");
    else if (strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "Spock") == 0)
      printf("Caso #1: Bazinga!\n");
    else if (strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "lagarto") == 0)
      printf("Caso #1: Bazinga!\n");
    else if (strcmp(sheldon, "papel") == 0 && strcmp(raj, "Spock") == 0)
      printf("Caso #1: Bazinga!\n");
    else if (strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "papel") == 0)
      printf("Caso #1: Bazinga!\n");
    else if (strcmp(sheldon, "papel") == 0 && strcmp(raj, "pedra") == 0)
      printf("Caso #1: Bazinga!\n");
    else if (strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "papel") == 0)
      printf("Caso #1: Bazinga!\n");
    else if (strcmp(sheldon, "pedra") == 0 && strcmp(raj, "lagarto") == 0)
      printf("Caso #1: Bazinga!\n");
    else if (strcmp(sheldon, "Spock") == 0 && strcmp(raj, "tesoura") == 0)
      printf("Caso #1: Bazinga!\n");
    else if (strcmp(sheldon, "pedra") == 0 && strcmp(raj, "tesoura") == 0)
      printf("Caso #1: Bazinga!\n");
    else
      printf("Caso #2: Raj trapaceou!\n");
    }
    
    return 0;
}