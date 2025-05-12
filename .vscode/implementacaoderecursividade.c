#include <stdio.h>
            //MOVIMENTO DA TORRE.
void moverTorre(int casas){
    if (casas > 0)
    {
    printf("Direita\n");
    moverTorre(casas - 1);    }
    
}

           //MOVIMENTO DE BISPO.
void moverbispo(int casas){
    if (casas > 0)
    {
    printf("cima/direita\n");
    moverbispo(casas - 1);    }
    
}

           //MOVIMENTO DA RAINHA.
       void moverRainha(int casas){
    if (casas > 0)
    {
    printf("Esquerda\n");
    moverRainha(casas - 1);    }
    
} 

           //MOVIMENTO DO CAVALO.
   void moverCavalo(int casas){
    if (casas > 0)
    {
    printf("Cima\n");
    moverCavalo(casas - 1); 
     if (casas > 1)
    {
    printf("Direita\n");
    }
    

    }
     
     
    
    
}


       int main(){
       printf("MOVIMENTO DA TORRE\n");
       moverTorre(5);
       printf("MOVIMENTO DO BISPO\n");
       moverbispo(5);
       printf("MOVIMENTO DA RAINHA\n");
       moverRainha(8);
       printf("MOVIMNETO DO CAVALO\n");
       moverCavalo(2);
       
       
       
       
       }

    
        
