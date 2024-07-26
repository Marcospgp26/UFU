1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, valor;
    for(i = 1; i <= 5; i++)
    {
        valor = i * 3;
        printf("%i ", valor);
    }
    return 0;
}

2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    //for
    printf("USANDO FOR \n \n");

    for(i = 1; i <= 100; i++)
    {
        printf("%i ", i);
    }
    i = 1;

    printf("\n \n WHILE \n \n");

    //while
    while(i <= 100)
    {
        printf("%i ", i);
        i++;
    }

    i = 1;

    //so-while
    printf("\n \n USANDO DO-WHILE \n \n");

    do{
        printf("%i ", i);
        i++;
    }while(i <= 100);
    return 0;
}

3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;

    while(i >= 0)
    {
        printf("%i ", i);
        i--;
    }
    printf("\n FIM!!!");

    return 0;
}

4
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int num =0;

        while(num <= 100000)
        {
            printf("%i ", num);
            num = num + 1000;
        }
        return 0;

    }

5
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int verif;
    float valor, soma = 0;

    for(verif = 1; verif <= 10; verif++)
    {
        printf("Insira um valor numerico. Este eh o valor %i / 10\n", verif);
        scanf("%f", &valor);

        soma = soma + valor;
    }
    printf("A soma eh: %f", soma);

    return 0;
}

6
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float media , soma = 0, num;

    for(i = 1; i <= 10; i++)
    {
        printf("Insira um numero inteiro. Esse eh o numero %i/10 \n", i);
        scanf("%f",&num);

        soma = soma + num;
    }
    media = soma / 10;
    printf("A media eh: %f", media);
    return 0;

}

7
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float media , soma = 0, num;

    for(i = 1; i <= 10; i++)
    {
        printf("Insira um numero inteiro. Esse eh o numero %i/10 \n", i);
        scanf("%f",&num);

        if(num < 0)
        {
            num = (-1) * num;
        }

        soma = soma + num;
    }
    media = soma / 10;
    printf("A media eh: %f", media);
    return 0;

}

8
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float num1, num, maior,menor;
    printf("Insira um numero. Esse eh o numero 1/10\n");
    scanf("%f", &num1);

    menor = num1;
    maior = num1;

    for(i = 2; i <= 10; i++)
    {
        printf("Insira um numero. Esse eh o numero %i/10\n", i);
        scanf("%f", &num);

        if(num <= menor)
        {
            menor = num;
        }

        if(num >= maior)
        {
            maior = num;
        }
    }

    printf("O menor numero eh: %f\n O maior numero eh: %f", menor, maior);

    return 0;
}


9
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int N, impar = 1;
        printf("Por favor, insira um numero inteiro positivo.\n");
        scanf("%i", &N);

        if(N < 0)
        {
            printf("Numero invalido.\n");
        }

        else
        {
            while(N !=0)
            {
                printf("%i ", impar);
                impar = impar + 2;
                N --;
            }
        }
        return 0;

    }

10
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int i, pares, soma = 0;
        for(i =0; i < 50; i ++)
        {
            pares = 2 + (2 * i);
            soma = soma + pares;

        }
        printf("%i ", soma);
        return 0;

    }

11
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int N, numero = 0;
        printf("Insira um numero inteiro positivo:\n");
        scanf("%i", &N);

        if(N < 0)
        {
            printf("Numero invalido");
        }
        else
        {
            while(N != -1)
            {
                printf("%i ", numero);
                numero = numero + 1;
                N--;
            }
        }
        return 0;

    }
    
12 
#include <stdio.h>

int main()
{
    int soma = 0, verif, num, metade;
    printf("Insira um numero inteiro \n");
    scanf("%i", &num);

    metade = num / 2;

    for(verif = 1; verif <= metade; verif++)
    {
        if (( num % verif) == 0)
        {
            soma = soma + verif;
        }
        else
        {
            continue;
        }
    }
    printf("A soma eh: %i", soma);
    return 0;

}
13
#include <stdio.h>

int main()
{
    int verif, soma = 0;
    for(verif = 1; verif < 1000; verif++)
    {
        if(((verif % 3) == 0) || ((verif % 5) == 0))
        {
            soma = soma + verif;
        }
        else
        {
            continue;
        }
    }
    printf("A soma eh: %i", soma);
    return 0;

}

14
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int d1, d2, usuario;
    srand(time(NULL));
    printf("Quantas vezes quer jogar o dado? \n");
    scanf("%i", &usuario);

    while (usuario != 0)
    {
        d1= (rand() % 5) + 1;
        d2= (rand() % 5) + 1;
        if(d1 == d2)
            printf("Dados iguais (%i) e (%i) \n", d1, d2);
        else if(d1 > d2)
            printf("O dado d1 (%i) eh maior que d2 (%i) \n", d1, d2);
        else if(d2 > d1)
            printf("O dado d2 (%i) eh maior que d1 (%i) \n", d2, d1);
        usuario--;
    }
    return 0;

}

15
#include <stdio.h>
#include <math.h>

int main()
{
    float quadrado, cubo, raiz, valor;
    do
    {
        printf("Insira um numero - se for negativo ou zero o programa fechará \n");
        scanf("%f", &valor);
        if(valor <= 0)
        {
            break;
        }
        quadrado = valor * valor;
        cubo = valor * valor * valor;
        raiz = sqrt(valor);
        printf("O quadrado eh: %f O cubo eh: %f A raiz eh: %f \n \n", quadrado, cubo, raiz);
    }while(valor > 0);
    return 0;
}

16
#include <stdio.h>
#include <math.h>

int main()
{
    float resultado, num1, num2;
    int opcao;
    do
    {
        printf("Escolha um opcao: \n");
        printf(" Adicao (opcao 1) \n  Subtracao (opcao 2) \n Multiplicacao (opcao 3) \n  Divisao (opcao 4). \n  Saida (opcao 5) \n");
        scanf("%i", &opcao);

        switch(opcao)
        {
            case 1:
                printf("Insira dois numeros: \n");
                scanf("%f", &num1);
                scanf("%f", &num2);
                resultado = num1 + num2;
                printf("O resultado eh: %f \n \n ", resultado);
                break;
            case 2:
                printf("Insira dois numeros: \n");
                scanf("%f", &num1);
                scanf("%f", &num2);
                if(num1 >= num2)
                {
                    resultado = num1 - num2;
                    printf("O resultado eh: %f \n \n ", resultado);
                }
                else
                {
                    resultado = num2 - num1;
                    printf("O resultado eh: %f \n \n ", resultado);
                }
                break;
            case 3:
                printf("Insira dois numeros: \n");
                scanf("%f", &num1);
                scanf("%f", &num2);
                resultado = num1 * num2;
                printf("O resultado eh: %f", resultado);
                break;
            case 4:
                printf("Insira dois numeros: \n");
                scanf("%f", &num1);
                scanf("%f", &num2);
                if(num2 != 0)
                {
                    resultado = num1 / num2;
                    printf("O resultado eh: %f \n \n ", resultado);
                }
                else
                {
                    printf("Impossivel dividir. \n \n");
                    break;
                }
                break;
            case 5:
                break;
            default:
                printf("Opcao inexistente \n \n");
        }
    }while(opcao != 5);
    return 0;
}

17
#include <stdio.h>
#include <math.h>

int main()
{
  float chico = 1.5, ze = 1.1, anos = 0;
  while(chico > ze)
  {
      chico = chico + 0.02;
      ze = ze + 0.03;
      anos++;
  }
  printf("Serao necessarios %f anos", anos);
  return 0;
}

18
#include <stdio.h>
#include <math.h>

int main()
{
    double sal = 2000, aumento = 1.5;
    int ai, af = 26;//anos desde 1997 até 2023

    for(ai = 1; ai <= af; ai++)
    {
        sal = sal + sal + sal * aumento;
        aumento = aumento * 2;
    }
    printf("O salario final eh de: %lf", sal);
    return 0;
}

19

#include <stdio.h>

int main()
{
    int saque, cem, cinq, vinte, dez, cinco, dois, um;
    printf("Isira um valor para o saque: \n");
    scanf("%i", &saque);

    if(saque <= 0)
    {
        printf("Numero muito baixo / inválido");
    }
    else
    {
        cem = saque / 100;
        cinq = (saque % 100) / 50;
        vinte = ((saque % 100) % 50) / 20;
        dez = (((saque % 100) % 50) % 20) / 10;
        cinco = ((((saque % 100) % 50) % 20) % 10) / 5;
        dois = (((((saque % 100) % 50) % 20) % 10) % 5) / 2;
        um = (((((saque % 100) % 50) % 20) % 10) % 5) % 2;
        printf("Deve ser entregue: \n %i notas de cem reais  \n %i notas de 50 reais \n %i notas de vinte reais \n %i notas de dez reais \n %i notas de cinco reais \n %i notas de dois reais \n %i notas de um real.", cem, cinq, vinte, dez, cinco, dois, um);
    }
    return 0;
}

20
#include <stdio.h>

int main()
{
    int num, cont, primo, soma = 3;

    for(num = 3; num < 2000000; num++)
    {
        for(cont = 2; cont < num; cont++)
        {
            if((num % cont) == 0)
            {
                primo = 0;
                break;
            }
            else
            {
                primo = 1;
                continue;
            }
        }
        if(primo == 1)
        {
            soma = soma + num;
        }
        else
        {
            continue;
        }
    }
    printf("A soma eh: %i \n", soma);
    return 0;
}

21
#include <stdio.h>

int main()
{
    int num, cont, primo, soma = 0,a, b;

    printf("Insira dois numeros: \n");
    scanf("%i %i", &a, &b);

    for(num = (a + 1); num < b; num++)
    {
        for(cont = 2; cont < num; cont++)
        {
            if((num % cont) == 0)
            {
                primo = 0;
                break;
            }
            else
            {
                primo = 1;
                continue;
            }
        }
        if(primo == 1)
        {
            soma++;
        }
        else
        {
            continue;
        }
    }
    printf("O total de numeros primos eh: %i \n", soma);
    return 0;
}

22


#include <stdio.h>

int main()
{
    int num1 = 999, num2 = 999, resultado, verif = 0;
    int a6, a5, a4, a3, a2, a1;

    while(num1 >= 100)
    {
        while(num2 >= 100)
        {
            resultado = num1 * num2;
            a6 = resultado / 100000;
            a5 = (resultado % 100000) /10000 ;
            a4 = (resultado % 10000) /1000;
            a3 = (resultado % 1000) /100;
            a2 = (resultado % 100) /10;
            a1 = resultado % 10;

            if((a6 == a1) && (a5 == a2) && (a4 == a3))
            {
                verif = 1;
                break;
            }
            num2--;

        }
        num2 = 999;
        num1--;
        if(verif == 1)
        {
            break;
        }
    }
    printf("O maior palindromo eh: %i", resultado);
    return 0;
}



23
#include <stdio.h>

int main()
{
    int n, num = 1, i, j;
    printf("Insita um numero \n");
    scanf("%i", &n);

    for(i = 0; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%i ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
