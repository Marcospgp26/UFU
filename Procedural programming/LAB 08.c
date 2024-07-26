Exercício 1:
a) x = 10;
b) y = 20;
c) &x = 1000;
d) &y = 1004;
e) p1 = 1004;
f) p2 = 1004;
g) *p1 * *p2 = 400;
h) *(&x) = 10;
i) &(*p2) = 1004;

Exercício 2:
#include <stdio.h>

int main()
{
    int i, *i1;
    float r, *r1;
    char c, *c1;

    i1 = &i;
    r1 = &r;
    c1 = &c;

    printf("Insira um numero inteiro, um numero real e um caractere nessa ordem: ");
    scanf("%i %f %c", &i, &r, &c);
    printf("Inteiro: %i \n Real: %f \n char: %c \n", i, r, c);

    *i1 += 32;
    *r1 += 2.5;
    *c1 += 32;
    printf("Inteiro: %i \n Real: %f \n char: %c \n", i, r, c);
    return 0;
}

Exercício 3:
#include <stdio.h>

int main()
{
    int i, j;

    if(&i > &j)
    {
        printf("O endereco do maior eh: %p", &i);
    }
    else
    {
        printf("O endereco do maior eh: %p", &j);
    }
    return 0;
}

Exercício 4:
#include <stdio.h>

int main()
{
    int i, j;
    printf("Insira dois numeros inteiros:\n ");
    scanf("%i %i", &i, &j);

    if(&i > &j)
    {
        printf("O conteudo do maior endereco eh: %i", i);
    }
    else
    {
        printf("O conteudo do maior endereco eh: %i", j);
    }
    return 0;
}

Exercício 5:

#include <stdio.h>

int main()
{
    int A, B, *p, *q;

    printf("Insira dois numeros inteiros: ");
    scanf("%i %i", &A, &B);

    p = &A;
    q = &B;

    *p = 2 * (*p);
    *q = 2 * (*q);

    printf("A soma eh: %i", *p  + * q);
    return 0;
}

Exercício 6:
#include <stdio.h>

int main()
{
    int A, B, soma;
    int *p1, *p2;
    p1 = &A;
    p2 = &B;

    printf("Insira dois numeros inteiros: \n");
    scanf("%i %i", p1, p2);

    printf("Soma: %i \n", *p1 + *p2);
    printf("Subtracao: %i \n", *p1 - *p2);
    printf("MUltiplicacao: %i \n", *p1 * *p2);
    if(*p2 == 0)
    {
        printf("Impossivel dividir.");
    }
    else
    {
        printf("Divisao: %f \n", (float)*p1 / *p2);
    }
    return 0;
}

Exercício 7
#include <stdio.h>

int main()
{
    int a, b, c;
    int *p1, *p2, *p3;

    p1 = &a;
    p2 = &b;
    p3 = &c;

    printf("Insira tres numeros inteiros: ");
    scanf("%i %i %i", p1,p2,p3);

    if((*p1 <= *p2) && (*p2 <= *p3))
    {
        printf("%i %p \n %i %p \n %i %p \n", *p1, p1, *p2, p2, *p3, p3);
    }
    else if((*p1 <= *p3) && (*p3 <= *p2))
    {
        printf("%i %p \n %i %p \n %i %p \n", *p1, p1, *p3, p3, *p2, p2);
    }
    else if((*p2 <= *p3) && (*p3 <= *p1))
    {
        printf("%i %p \n %i %p \n %i %p \n", *p2, p2, *p3, p3, *p1, p1);
    }
    else if((*p2 <= *p1) && (*p1 <= *p3))
    {
        printf("%i %p \n %i %p \n %i %p \n", *p2, p2, *p1, p1, *p3, p3);
    }
    else if((*p3 <= *p2) && (*p2 <= *p1))
    {
        printf("%i %p \n %i %p \n %i %p \n", *p3, p3, *p2, p2, *p1, p1);
    }
    else if((*p3 <= *p1) && (*p1 <= *p2))
    {
        printf("%i %p \n %i %p \n %i %p \n", *p3, p3, *p1, p1, *p2, p2);
    }
    return 0;
}

Exercício 8:
#include <stdio.h>

int main()
{
    int vet[6],i, *p;
    p = vet;

    for(i = 0; i < 6; i++)
    {
        printf("Insira um numero: ");
        scanf("%i", &vet[i]);
        printf("\n");
    }

    for(i = 0; i < 6; i++)
    {
        printf("Numero (%i de 6): ", i + 1);
        printf("%i", *(p + i));
        printf("\nEndereco de memoria: ");
        printf("%i", p + i);
        printf("\n \n");
    }
    return 0;
}

