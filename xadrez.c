#include<stdio.h>

int main(){
int passostorre, passosbispo, passosrainha;

printf("DIGITE O NUMERO DE PASSOS PARA A TORRE!\n");
scanf("%d", &passostorre);
printf("DIGITE O NUMERO DE PASSOS PARA O BISPO!\n");
scanf("%d", &passosbispo);
printf("DIGITE O NUMERO DE PASSOS PARA A RAINHA!\n");
scanf("%d", &passosrainha);

//MOVIMENTACAO DA TORRE - HORIZONTAL//

printf("\nMOVIMENTO DA TORRE!\n");

for (int i = 0; i < passostorre; i++)
{
    printf("DIREITA\n"); 
}

//MOVIMENTACAO DO BISPO - DIAGONAL//

printf("\nMOVIMENTO DO BISPO!\n");

int i = 0;

while (i < passosbispo)
{
    printf("CIMA, DIREITA!\n");
    i++;
}

// MOVIMENTACAO DA RAINHA - TODAS AS DIRECOES//

printf("\nMOVIMENTO DA RAINHA!\n");

int j = 0;

do
{
    printf("ESQUERDA!\n");
    j++;

} while (j < passosrainha);

return 0;

}