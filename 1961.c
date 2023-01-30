#include <stdio.h>

int main(){

int hsapo, qtde_canos, hcanos[qtde_canos];
int dif;
int count = 0;
  
scanf("%d %d", &hsapo, &qtde_canos);

    for(int i = 0; i < qtde_canos; i++){
  
      scanf("%d", &hcanos[i]);
  }

  for(int i = 1; i < qtde_canos; i++){
    
    if(hcanos[i] > hcanos[i - 1])
     dif = hcanos[i] - hcanos[i - 1];
  else  
     dif = hcanos[i - 1] - hcanos[i];
 
  if(dif <= hsapo)
            count++;
    }
  
  
    if(count == qtde_canos-1)
    {printf("YOU WIN\n");}

    else
   { printf("GAME OVER\n");}

return 0;
}
 