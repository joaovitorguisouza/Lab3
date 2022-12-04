/**
* Arquivo: somatorio.c
* Autor: Joao Vitor Guimaraes de Souza
* Matrícula: 12111EBI030
* Criado em: 04/12/2022
*/

#include <stdio.h>

float soma(float * v, int t);

int main(void) {
    int n;
    printf("Numero de elementos? ");
    scanf("%d", &n);
    float v[n];
    for(int i = 0; i < n; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%f", v + i);
    }
    printf("%g ", v[0]);
    for(int i = 1; i < n; i++)
        printf("+ %g ", v[i]);
    printf("= %g\n", soma(v, n));
    return 0;
}

float soma(float * v, int t) {
    float s = 0;
    for(int i = 0; i < t; i++) 
        s += v[i];
    return s;
}