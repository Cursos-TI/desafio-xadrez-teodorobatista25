#include <stdio.h>
int main(){
    int t ;
    int b = 1;
    int r =1;
    
             // MOVIMENTO DO XADREZ : TORRE 5 CASAS PARA DIREITA.

    for ( t = 0; t < 5; t++)
    {
    printf("TORRE >> DIREITA\n");
    }
    
             //MOVIMENTO DO XADREZ : BISPO 5 CASAS DIAGONAIS.

    while (b <= 5)
    {
    printf("BISPO >> CIMA, DIREITA\n", b);
    
        
    b++;
    }
             // MOVIMENTO DO XADREZ : RAINHA 8 CASAS PARA ESQUERDA.


   do
   {
    printf("RAINHA >> ESQUERDA\n", r);
    r++;
   } while (r <= 8);
   
    


return 0;
}

