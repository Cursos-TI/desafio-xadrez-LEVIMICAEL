#include<stdio.h>

int main(){

//MOVIMENTACAO DA TORRE//

int passostorre = 5;
printf("MOVIMENTO DA TORRE!\n");

for (int i = 0; i < passostorre; i++)
{
    printf("DIREITA\n"); 
}

//MOVIMENTACAO DO BISPO//

int passosbispo = 5;
printf("\nMOVIMENTO DO BISPO!\n");

int i = 0;

while (i < passosbispo)
{
    printf("CIMA, DIREITA!\n");
    i++;
}

// MOVIMENTACAO DA RAINHA//

int passosrainha = 8;
printf("\nMOVIMENTO DA RAINHA!\n");

int j = 0;

do
{
    printf("ESQUERDA!\n");
    j++;

} while (j < passosrainha);

return 0;

}