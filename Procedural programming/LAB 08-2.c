EXERCÍCIO 1:
#include <stdio.h>

int main()
{
    float v[10], *p;
    int i;
    p = v;

    for(i = 0; i <10; i++)
    {
        printf("%p", (p +i));
        printf("\n");
    }
}

EXERCÍCIO 2:
#include <stdio.h>


int main()
{
    float m[3][3], *p;
    int i, j, k = 0;
    p = m;
    for(i = 0; i <3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Endereco posicação %i %i : %p \n",i, j, (p + k));
            k++;
        }
    }
    return 0;
}

EXERCÍCIO 3:
#include <stdio.h>

int main()
{
    int a[5], *p,i;
    p = a;
    for(i =0; i <3; i++)
    {
        printf("Insira um numero (numero %i de 3):", i + 1);
        scanf("%i", (p + i));
    }
    for(i = 0; i < 3; i++)
    {
        printf("Dobro (numero %i de 3): %i\n", (i+ 1), 2 * (*(p + i)));
    }
    return 0;
} 

EXERCÍCIO 4:
#include <stdio.h>

int main()
{
    int a[5], *p, i;
    p = a;
    for(i = 0; i <5; i++)
    {
        printf("Insira um numero inteiro (numero %i de 5): ",i + 1);
        scanf("%i",p + i);
    }
    for(i = 0; i<5; i++)
    {
        if((*(p + i)% 2) == 0)
        {
            printf("A posicao de um numero par eh: %p\n",p + i);
        }

    }
    return 0;
}

EXERCÍCIO 5:
#include <stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    char *p1, *p2;
    int i, j = 0, tam, verif= 0, flag = 0;

    p1 = str1;
    p2 = str2;

    printf("Insira a primeira string: \n");
    setbuf(stdin, NULL);
    fgets(str1, 100, stdin);

    printf("Insira a segunda string: \n");
    setbuf(stdin,NULL);
    fgets(str2, 100, stdin);

    tam =strlen(str2);

    for(i = 0; *(p1 + i) != '\0'; i++)
    {
        if(*(p1 + i) == *(p2 + j))
        {
            j++;
        }
        else
        {
            j = 0;
        }

        if((j + 1) == tam)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Eh substring");
    }
    else
    {
        printf("Nao eh substring");
    }
    return 0;
}

EXERCÍCIO 6:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5], val, i;
    int *p, *p_val, *p_i;

    p = v;
    p_val = &val;
    p_i = &i;

    printf("Insira um inteiro para preencher o vetor: ");
    scanf("%i", p_val);


    for(*p_i = 0; (*p_i) < 5; (*p_i)++)
    {
        *(p + (*p_i)) = *p_val;
        printf("%i \n", *(p + (*p_i)));
    }
    return 0;
}

EXERCÍCIO 7:
#include <stdio.h>

int main()
{
    int vet[10], max, min, i;
    int *pv, *pma, *pmi;

    pv = vet;
    pma = &max;
    pmi = &min;

    for(i = 0; i < 10; i++)
    {
        printf("insira um valor para ser armazenado no vetor (valor numero %i de 10): ", i + 1);
        scanf("%i", pv + i);

        if(i == 0)
        {
            *pma = *(pv + i);
            *pmi = *(pv + i);
        }
        else
        {
            if((*(pv + i)) > (*pma))
            {
                *pma = *(pv + i);
            }

            if((*(pv + i)) < (*pmi))
            {
                *pmi = *(pv + i);
            }
        }
    }

    printf("O maior numero eh: %i\nO menor numero eh %i", *pma, *pmi);
    return 0;
}

EXERCÍCIO 8:
#include <stdio.h>

int main()
{
    int *B, **C, ***D;
    int A;

    B = &A;
    C = &B;
    D = &C;

    printf("Insira um numero inteiro: \n");
    scanf("%i", B);

    printf("O do dobro desse numero eh: %i\n", (*B) * 2);
    printf("O triplo desse numero eh: %i\n", (**C) * 3);
    printf("O quadruplo desse numero eh: %i\n", (***D) * 4);

    return 0;

}
