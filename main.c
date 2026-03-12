#include <stdio.h>
#include <stdlib.h>

int main()
{
    int termos[10];
    int i;

    printf("Digite o primeiro termo: ");
    scanf("%d", &termos[0]);
    printf("Digite o segundo termo: ");
    scanf("%d", &termos[1]);
    
    for (i = 2; i < 10; i++) {
        
        int posicao = i + 1; 

        if (posicao % 2 != 0) {
            termos[i] = termos[i - 1] + termos[i - 2];
        } else {
            termos[i] = termos[i - 1] - termos[i - 2];
        }
    }

    printf("\nSerie de Fettuccine: ");
    for (i = 0; i < 10; i++) {
        printf("%d", termos[i]);
        if (i < 9) printf(", "); 
    }
    printf("\n");
    return 0;
}
