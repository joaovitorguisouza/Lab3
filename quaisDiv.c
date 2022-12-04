#include <stdio.h>

void divisores(int * vetor, int t, int referencia);

int main(void) {
    int p, ref;
    printf("Numero de elementos? ");
    scanf("%d", &p);
    int vetor[p]; 
    for(int i = 0; i < p; i++) {
        printf("%dº elemento: ", i+1);
        scanf("%d", vetor+i);
    }
    printf("Referencia: ");
    scanf("%d", &ref);
    divisores(vetor, p, ref);
    return 0;
}

void divisores(int * vetor, int t, int referencia) {
    for(int i = 0; i < t; i++) {
        printf("%d", vetor[i]);
        if(referencia % vetor[i] == 0)
            printf("#");
        printf(" ");
    }
    printf("\n");
}