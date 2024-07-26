EX1
#include <stdio.h>
#include <stdlib.h>

void alt(int *p, int *q);

int main()
{
    int a, b;
    int *p_a = &a, *p_b = &b;

    printf("Insira dois valores inteiros: \n");
    scanf("%i %i", p_a, p_b);

    alt(p_a, p_b);

    printf("Os valores alternados sao: %i %i", *p_a, *p_b);
    return 0;
}

void alt(int *p, int *q)
{
    int c;

    c = *q;

    *q = *p;
    *p = c;
}
EX2
 #include <stdio.h>
#include <stdlib.h>

void maior(int *p, int *q);

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    printf("Insira dois numeros inteiros: \n");
    scanf("%i %i", pa, pb);

    printf("Conteudo inseridos: %i e %i", *pa, *pb);

    maior(pa, pb);

    printf("O maior numero eh: %i\nO menor numero eh: %i", *pa, *pb);
    return 0;
}

void maior(int *p, int *q)
{
    int aux;

    if(*p < *q)
    {
        aux = *p;
        *p = *q;
        *q = aux;
    }
}
EX3
#include <stdio.h>

void soma(int *p, int *q);

int main()
{
    int A, B;

    printf("Insira dois numeros inteiros: \n");
    scanf("%i %i", &A, &B);

    printf("Valores inseridos: %i e %i\n", A, B);

    soma(&A, &B);

    printf("A soma eh: %i\nO valor de B eh: %i", A, B);
    return 0;
}

void soma(int *p, int *q)
{
    *p += *q;
}
EX4
#include <stdio.h>

int ord(int *p, int *q, int *r);

int main()
{
    int a, b, c, verif;

    printf("Insira tres numeros inteiros: \n");
    scanf("%i %i %i", &a, &b, &c);

    verif = ord(&a, &b, &c);

    printf("A funcao retornou: %i\nOrdem nova: %i %i %i", verif, a,b,c);
}


int ord(int *p, int *q, int *r)
{
    int aux1, aux2;
    if((*p == *q) && (*q == *r))
    {
        return 1;
    }
    else
    {
        if((*p < *r) && (*r < *q))
        {
            aux1 = *r;
            *r = *q;
            *q = aux1;
        }
        else if((*q < *p) && (*p < *r))
        {
            aux1 = *p;

            *p = *q;
            *q = aux1;
        }
        else if((*q < *r) && (*r < *p))
        {
            aux1 = *r;
            aux2 = *p;

            *p = *q;
            *q = aux1;
            *r = aux2;
        }
        else if((*r < *q) && (*q < *p))
        {
            aux1 = *p;
            *p = *r;
            *r = aux1;
        }
        else if((*r < *p) && (*p < *q))
        {
            aux1 = *p;
            aux2 = *q;

            *p = *r;
            *q = aux1;
            *r = aux2;
        }
        return 0;
    }
}
EX5
#include <stdio.h>

void frac(float num, int *inteiro, float *frac);

int main()
{
    float num, real;
    int inteiro;

    printf("Insira um numero real para separarmos a parte fracionaria da inteira: ");
    scanf("%f", &num);

    frac(num, &inteiro, &real);

    printf("O numero %f tem como parte inteira %i e parte fracionaria %f", num, inteiro, real);
    return 0;
}


void frac(float num, int *inteiro, float *frac)
{
    *inteiro = (int) num;
    *frac = num - *inteiro;
}
EX6
#include <stdio.h>
#define pi 3.14

void calc_esfera(float R, float *area, float *volume);

int main()
{
    float r, area, volume;

    printf("insira o raio da esfera: \n");
    scanf("%f", &r);

    calc_esfera(r, &area, &volume);

    printf("A area da esfera de raio %f eh %f\nJa o volume eh: %f", r, area, volume);
    return 0;
}

void calc_esfera(float R, float *area, float *volume)
{
    *area = 4 * pi * R * R;
    *volume = (4 * pi * R * R *R) / 3;
}
EX7
#include <stdio.h>

void num(int *vet, int n, int *max, int *quant);

int main()
{
    int n, i, quant, max;

    printf("Insira o tamanho do array que voce deseja: \n");
    scanf("%i",&n);

    int vet[n];

    for(i = 0; i < n; i++)
    {
        printf("Insira um numero inteiro (numero %i de %i): \n", i + 1, n);
        scanf("%i", &vet[i]);
    }

    num(&vet, n, &max, &quant);

    printf("O maior numero (%i) apareceu %i vezes", max, quant);
}

void num(int *vet, int n, int *max, int *quant)
{
    int i;
    *quant = 0;

    for(i = 0; i < n; i++)
    {
        if(i == 0)
        {
            *max = *(vet + i);
        }
        else
        {
            if(*(vet + i) > *max)
            {
                *max = *(vet + i);
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        if(*(vet + i) == *max)
        {
            (*quant)++;
        }
    }
}
EX 8
#include <stdio.h>

int negativos(float *vet, int N);

int main()
{
    int n, i, val;

    printf("Insira o tamanho do array: ");
    scanf("%i", &n);

    float vet[n];

    for(i = 0; i < n ; i++)
    {
        printf("Insira o valor do vetor (valot %i de %i): ", i+ 1, n);
        scanf("%f", (vet + i));
    }

    val = negativos(vet, n);

    printf("Ha %i numeros negativos", val);

    return 0;
}

int negativos(float *vet, int N)
{
    int i, ret = 0;
    for(i = 0; i < N; i++)
    {
        if(vet[i] < 0)
        {
            ret++;
        }
    }
    return ret;
}

EX 9:
#include <stdio.h>


int main()
{
    int n;

    printf("Escolha o tamnaho do seu array de inteiros: ");
    scanf("%i", &n);

    int vet[n], *p;

    p = vet;

    for(int i = 0; i < n; i++)
    {
        printf("Insira um numero para ser adicionado a array(numero %i de %): ", i + 1, n);
        scanf("%i", (p + i));
    }

    for(int i = 0; i < n; i++)
    {
        (*(p + i))++;
        printf("O numero %i adicionaod em 1 eh: %i ", i, *(p + i));
        printf("\n");
    }

    return 0;
}

EX 10:
#include <stdio.h>

int ret(int *vet1, int *vet2, int *vet3, int n1, int n2);

int main()
{
    int i, n1, n2, verif;

    printf("Insira dois numeros, cada um sera o tamanho do array de inteiros (preferencialmente numeros iguias):\n");
    scanf("%i %i", &n1, &n2);

    int v1[n1], v2[n2], v3[n1];

    for(i =0 ; i < n1; i ++)
    {
        printf("Insira um numero para ser armazenado no primeiro vetor (numero %i de %i): ", i +1, n1);
        scanf("%i", (v1 + i));
    }

    for(i =0 ; i < n2; i ++)
    {
        printf("Insira um numero para ser armazenado no segundo vetor (numero %i de %i): ", i +1, n2);
        scanf("%i", (v2 + i));
    }

    verif = ret(v1, v2, v3, n1, n2);

    if(verif == 0)
    {
        printf("Impossivel somar os vetores");
    }
    else
    {
        printf("O vetor somado possui os numeros: ");
        for(i = 0; i < n1; i++)
        {
            printf("%i ", (*(v3 + i)));
        }
    }
    return 0;
}

int ret(int *vet1, int *vet2, int *vet3, int n1, int n2)
{
    int i;
    if(n1 != n2)
    {
        return 0;
    }
    for( i =0; i < n1; i++)
    {
        (*(vet3 + i)) = ((*(vet1 + i)) + (*(vet2 + i)));
    }
    return 1;
}

EX 11:
#include <stdio.h>

int ret(int *vet, int n);

int main()
{
    int n, k, i, maior;

    printf("Insira o numero do vetor de inteiros: ");
    scanf("%i", &n);

    int vet[n];

    for(i = 0; i < n; i++)
    {
        printf("Insira um numero para ser armazenado no vetor (numero %i de %i): ", i + 1, n);
        scanf("%i", (vet + i));
    }

    maior = ret(vet, n);

    printf("Insira o numero de elementos que deve ser impresso por linha");
    scanf("%i", &k);

    for(i = 0; i < n; i++)
    {
        if((i == 0) || ((i % k) == 0))
        {
            printf("\nNumeros: ");
        }
        printf("%i ", vet[i]);
    }
    printf("\nNumero maior: %i", maior);

    return 0;
}

int ret(int *vet, int n)
{
    int retorno, i;
    for( i =0; i < n; i++)
    {
        if(i == 0)
        {
            retorno = vet[i];
        }
        else
        {
            if(vet[i] > retorno)
            {
                retorno = vet[i];
            }
        }

    }
    return retorno;
}

EX 12:
#include <stdio.h>

void ex(int *v, int *max, int *min, int num);

int main()
{
    int n, max, min, i;

    printf("Insira o tamanho do vetor que voce deseja: ");
    scanf("%i", &n);

    int vet[n];

    for( i =0; i < n; i++)
    {
        printf("Insira um numero para ser armazenado no vetor(%i de %i): ", i+ 1, n);
        scanf("%i", (vet + i));
    }

    ex(vet, &max, &min, n);

    printf("O valor maximo eh: %i\nO valor minimo eh: %i", max, min);

    return 0;
}

void ex(int *v, int *max, int *min, int num)
{
    int i;
    for(i = 0; i < num; i++)
    {
        if(i == 0)
        {
            (*max) = (*(v + i));
            (*min) = (*(v + i));
        }
        else
        {
            if((*(v + i)) > (*max))
            {
                (*max) = (*(v + i));
            }
            else if((*(v + i)) < (*min))
            {
                (*min) = (*(v + i));
            }
        }
    }
}

EX 13:
#include <stdio.h>

void q1(float *n1, float *n2);
void q2(float *n1, float *n2, float *ms, float *mp);

int main()
{
    float nota1, nota2, media_simples, media_ponderada;

    q1(&nota1, &nota2);
    q2(&nota1, &nota2, &media_simples, &media_ponderada);

    printf("%f %f", media_simples, media_ponderada);


}

void q1(float *n1, float *n2)
{
    do
    {
        printf("Insira duas notas (entre 0 e 10): ");
        scanf("%f %f", n1, n2);

        if(((*(n2))< 0) || ((*(n1))< 0) || ((*(n2)) > 10) || ((*(n1)) >  10))
        {
            printf("Nota invlaida\n\n");
        }
    }while(((*(n2))< 0) || ((*(n1))< 0) || ((*(n2)) > 10) || ((*(n1)) >  10));
}

void q2(float *n1, float *n2, float *ms, float *mp)
{
    (*(ms)) = (((*(n1)) + (*(n2))) / 2);
    (*(mp)) = (((*(n1)) + (2 * (*(n2)))) / 3);
}

EX 14:
#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2);

int main()
{
    float a, b, c, X1, X2;
    int qnt;

    printf("Insira 3 numeros reais (a, b, c) para fazerem parte da equacao ax^2 + by + cz:\n");
    scanf("%f %f %f", &a, &b, &c);

    while(a == 0)
    {
        printf("Numero invalido (a = 0). Reinsira o numero: ");
        scanf("%i", &a);
    }

    qnt = raizes(a, b, c, &X1, &X2);

    switch(qnt)
    {
    case 0:
        printf("\nA equacao nao possui raizes reais");
        break;
    case 1:
        printf("\nA equacao possui uma raiz real: %f", X1);
        break;
    case 2:
        printf("\nA equacao possui duas raizes reais: %f e %f", X1, X2);
    }
    return 0;
}

int raizes(float A, float B, float C, float *X1, float *X2)
{
    int delt, raiz;
    delt = ((B * B) -(4 * A * C));

    raiz = sqrt(delt);

    if(delt < 0)
    {
        return 0;
    }

    *X1 = (-B + raiz)/ (2 * A);
    *X2 = (-B + raiz)/ (2 * A);

    if(delt == 0)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}




