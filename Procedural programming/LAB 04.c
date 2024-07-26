EXERCÍCIO 1

#include <stdio.h>
int dobro(int a);

int main()
{
    int num, n2;
    printf("Insira um numero inteiro ]: \n");
    scanf("%i", &num);

    n2 = dobro(num);

    printf("O numero eh: %i", n2);
    return 0;
}

int dobro(int a)
{
    return 2 * a;
}


EXERCÍCIO 2
#include <stdio.h>

void data(int x, int y, int z);

int main()
{
    int dia, mes, ano;
    printf("Insira um dia: \n");
    scanf("%i", &dia);

    printf("Insira um mes: \n");
    scanf("%i", &mes);

    printf("Insira um ano: \n");
    scanf("%i", &ano);


    data(dia, mes, ano);

    return 0;
}

void data(int x, int y, int z)
{
    switch(y)
        {

        case 1:
            printf("%i de Janeiro de %i", x, z);
            break;
        case 2:
            printf(" %i de Fevereiro de %i", x, z);
            break;
        case 3:
            printf("%i de Marco de %i", x, z);
            break;
        case 4:
            printf(" %i de Abril de %i", x, z);
            break;
        case 5:
            printf(" %i de Maio de %i", x, z);
            break;
        case 6:
            printf(" %i de Junho de %i",x, z);
            break;
        case 7:
            printf(" %i de Julho de %i", x, z);
            break;
        case 8:
            printf("%i de Agosto de %i", x, z);
            break;
        case 9:
            printf("%i de Setembro de %i", x, z);
            break;
        case 10:
            printf("%i de Outubro de %i", x, z);
            break;
        case 11:
            printf("%i de Novembro de %i", x, z);
            break;
        case 12:
            printf(" %i de Dezembro de %i", x, z);
        }

}

EXERCÍCIO 3
#include <stdio.h>

int verif(int x);

int main()
{
    int num;
    printf("Insira um numero: \n");
    scanf("%i", &num);

    verif(num);

    if((verif(num))== 1)
    {
        printf("E positivo");
    }

    if((verif(num))== 0)
    {
        printf("E zero");
    }
    if((verif(num)) == -1)
    {
        printf("E negativo");
    }
    return 0;
}

int verif(int x)
{
    if(x == 0)
        return 0;
    else if(x > 0)
        return 1;
    else
        return -1;
}

EXERCÍCIO 4:
#include <stdio.h>
#include <math.h>

int verif(int a);

int main()
{
    int num, n2;
    printf("Insira um numero: \n");
    scanf("%i", &num);

    n2 = verif(num);
    if(n2 && (num > 0))
        printf("Eh um quadrado perfeito!!!");
    else
        printf("Nao eh um quadrado perfeito");
    return 0;
}

int verif(int a)
{
    int inteiro;
    float real;
    real = sqrt(a);
    inteiro = sqrt(a);

    if(real == inteiro)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

EXERCÍCIO 5:
#include <stdio.h>
#include <math.h>

#define pi 3.1415

float volume(float a);

int main()
{
    float raio, vol;
    printf("Insira um raio: \n");
    scanf("%f", &raio);

    vol = volume(raio);

    printf("O volume eh: %f \n", vol);

    return 0;
}

float volume(float a)
{
    float b;
    b = (4 * (pi * (a * a * a)))/ 3.0;
    return b;
}

EXERCÍCIO 6:
#include <stdio.h>

int tempo(int a, int b, int c);

int main()
{
    int hora, min, seg, conversao;
    printf("Insira um hora, minuto e segundo: \n");
    scanf("%i \n %i \n %i", &hora, &min, &seg);

    conversao = tempo(hora, min, seg);

    printf("O periodo de tempo eh: %i segundos \n", conversao);
    return 0;
}

int tempo(int a, int b, int c)
{
    int conversao;
    conversao = (a * 3600) + (b * 60) + c;
    return conversao;
}

EXERCÍCIO 7:
#include <stdio.h>

float conversao (float a);

int main()
{
    float C, result;
    printf("Insira um valor em graus celcius: \n");
    scanf("%f", &C);

    result =  conversao (C);
    printf("A conversao de %f graus celcius em farenheint eh: %f", C, result);


    return 0;
}

float conversao (float a)
{
    float b;
    b = a * (9.0 / 5.0) + 32;
    return b;
}

EXERCÍCIO 8:
#include <stdio.h>
#include <math.h>


float calculo(float a, float b);

int main()
{
    float cat1, cat2, hipot;
    printf("Insira  os dois catetos: \n");
    scanf("%f \n %f", &cat1, &cat2);

    hipot = calculo(cat1, cat2);

    printf("A hipotenusa eh: %f \n", hipot);
    return 0;
}
float calculo(float a, float b)
{
    float c, d;

    c = (a * a) + (b * b);
    d = sqrt(c);
    return d;
}

EXERCÍCIO 9:
#include <stdio.h>
#define pi 3.141592

float calculo(float a, float b);

int main()
{
    float altura, raio, volume;
    printf("Insir a altura e o raio do clinidro: \n");
    scanf("%f \n %f", &altura,  &raio);

    volume = calculo(raio, altura);
    printf("O volume eh: %f \n",volume);

}

float calculo(float a, float b)
{
    float c;
    c = pi * (a * a) * b;
    return c;
}

EXERCÍCIO 10:
#include <stdio.h>

void comparar(int a, int b);

int main()
{
    int num1, num2;
    printf("Insira um numero: \n");
    scanf("%i %i", &num1, &num2);

    comparar(num1, num2);
    return 0;
}

void comparar(int a, int b)
{
    if(a == b)
        printf("Eles sao iguais");
    else if(a > b)
        printf("%i eh maior que %i", a, b);
    else
        printf("%i eh maior que %i", b, a);
}

EXERCÍCIO 11:
#include <stdio.h>

float equac(float a, float b, float c, char d);

int main()
{
    float nota1, nota2, nota3, media;
    char par;

    printf("Inisra as 3 notas:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    do
    {
        printf("Insira o tipo de media a ser realizada:\n (A) para Media Aritmetica \n (P) para Media Ponderada \n ");
        par = getchar();

        if((par == 'P') || (par == 'p') || (par == 'A') || (par == 'a'))
        {
            break;
        }
        else
        {
            printf("Escolha uma opcao valida \n \n");
            continue;
        }
    }while((par != 'a') && (par != 'A') && (par != 'p') && (par != 'P'));

    media = equac(nota1, nota2, nota3, par);

    if((par == 'a') || (par == 'A'))
        printf("A media aritmética eh: %f", media);

    else if((par == 'p') || (par == 'P'))
        printf("A media ponderada eh: %f", media);





    return 0;
}

float equac(float a, float b, float c, char d)
{
    float result;
    if((d == 'a') || (d == 'A'))
    {
        return result = (a + b + c) / 3;
    }
    else if((d == 'p') || (d == 'P'))
    {
        return result = ((5* a) + (3 * b) + (2 * c))/3;
    }
}

EXERCÍCIO 12:
#include <stdio.h>

void algarismo(int a);

int main()
{
    int num;
    printf("Insira um numero: \n");
    scanf("%i", &num);

    algarismo(num);

    return 0;
}

void algarismo(int a)
{
    int resto, soma = 0;
    if(a < 0)
    {
        printf("Numero Invalido");
    }
    else
    {
        while(a != 0)
        {
            resto = a % 10;
            soma += resto;
            a = a / 10;
        }
        printf("A soma dos algarismos eh: %i \n", soma);
    }
}

EXERCÍCIO 13:
#include <stdio.h>

float calculo(float a, float b, char c);

int main()
{
    //definir variáveis
    float num1, num2, result;
    char simb;

    //inserir os numeros para realizar as operacoes
    printf("Insira dois numeros: \n");
    scanf("%f %f", &num1, &num2);

    do{
        //escolha da operacao
        printf("Digite qual operaco vc quer realizar entre esses dois numeros: \n");
        printf("(+) Adição \n (-) Subtracao \n (*) Multiplicacao \n (/) Divisao \n");
        scanf("%c", &simb);

        if((simb != '+') && (simb != '-') && (simb != '*') && (simb != '/'))
            printf("Escolha invalida \n \n");

    }while((simb != '+') && (simb != '-') && (simb != '*') && (simb != '/'));

    if((num2 == 0 ) && (simb == '/'))
    {
        printf("Impossivel realizar a operacao");
    }
    else
    {
        result = calculo(num1, num2, simb);
        printf("O resultado eh : %f", result);
    }
}

float calculo(float a, float b, char c)
{
    float d;
    switch(c)
    {
        case '+':
            d = a +b;
            break;
        case '-':
            d = a - b;
            break;
        case '*':
            d = a * b;
            break;
        case '/':
            d = a / b;
    }
    return d;
}

EXERCÍCIO 14:
#include <stdio.h>

void result(float dist, float qnt);

int main()
{
    // desclaração de variaveis
    float distancia, quantidade;

    //inserção de dados
    printf("Indique a distancia percorrida e a quantia de litros consumida nessa distancia: \n");
    scanf("%f %f", &distancia, &quantidade);

    //cahamar a função
    result(distancia, quantidade);
    return 0;
}

void result(float dist, float qnt)
{
    //declaração da variavel de consumo0
    float consumo;

    consumo = dist / qnt;

    if(consumo < 8)
        printf("Venda o carro");
    else if((consumo >= 8) && (consumo <= 14))
        printf("Econômico");
    else
        printf("Super economico!!");

}

EXERCÍCIO 15:
#include <stdio.h>

void verif(l1, l2, l3); //funcao de verificacao se eh um triangulo
void classific(l1, l2, l3); //funcao de classificacao do triangulo

int main()
{
    //declaração de variaveis
    int lado1, lado2, lado3;
    printf("Insira os 3 lados do triangulo: \n");
    scanf("%i %i %i", &lado1, &lado2, &lado3); //comunicacao com o usuário
    
    if((lado 1 <= 0) || (lado2 <= 0) || (lado3 <= 0)) //verificar se os lados existem
    {
        printf("Medidas inexistentes");
    }
    else
    {
        verif(lado1, lado2, lado3); //chamando a função de verificação
    }

    return 0;
}

void verif(l1, l2, l3)
{
    if((l1 < (l2 + l3)) && (l2 < (l1 + l3)) && (l3 < (l2 + l1))) //verificando se eh um triangulo
    {
        printf("Eh um triangulo \n");
        classific(l1, l2, l3); //chamando a funcao de classificacao
    }
    else
    {
        printf("Nao eh um triangulo \n");
    }
}

void classific(l1, l2 ,l3)
{
    if((l1 == l2) && (l1 == l3) && (l2 == l3)) //verificar se eh equilatero
    {
        printf("Eh um triangulo equilatero!");
    }
    else if((l1 != l2) && (l1 != l3) && (l2 != l3)) //verificar se eh escaleno
    {
        printf("Eh um triangulo escaleno!");
    }
    else
    {
        printf("Eh um triangulo isoceles!"); //verificar se eh isóceles
    }
}

EXERCÍCIO 16:
#include <stdio.h>

void linha(n);

int main()
{
    //declaração de variáveis
    int numero;

    //comunicação com o usuário
    printf("Insira um numero de sinais de = para formar a linha: \n");
    scanf("%i", &numero);

    if(numero <= 0)
    {
        printf("Quantidade inexistente.");
    }
    else
    {
        linha(numero);
    }

    return 0;
}

void linha(n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("=");
    }
}

EXERCÍCIO 17:
#include <stdio.h>

void soma(int n1, int n2);

int main()
{
    //declaração de variáveis
    int num1, num2;

    //comnicação como usuário
    printf("Insira dois numeros inteiros POSITIVOS: \n");
    scanf("%i %i", &num1, &num2);

    //verificando se os numeros são positivos
    if((num1 >= 0) && (num2 >= 0))
    {
        //chamando a função soma
        soma(num1, num2);
    }
    else
    {
        printf("Numeros invalidos.");
    }

    return 0;
}

void soma(int n1, int n2)
{
    int par, soma = 0;
    for(par = (n1 + 1); par < n2; par++)
    {
        soma = soma + par;
    }
    printf("A soma eh: %i", soma);
}

EXERCÍCIO 18:
#include <stdio.h>

float exponencial(int x, int z);

int main()
{
    //declaração de variáveis
    int x, z;
    float result;
    //comunicação com o usuário
    printf("Insira dois numeros inteiros: \n");
    scanf("%i %i", &x, &z);

    result = exponencial(x, z);

    printf("O resultado eh:%f \n",result);

    return 0;
}

float exponencial(int x, int z)
{
    int par;
    float resultado = 1;
    //verificando se z > 0
    if(z > 0)
    {
        for(par = 0; par < z; par++)
        {
            resultado = resultado * x;
        }
    }
    //verificando se z = 0;
    else if(z == 0)
    {
        resultado = 1;
    }
    //se z < 0
    else if (z < 0)
    {
        for(par = 0; par > z; par --)
        {
            resultado = resultado * (1 /(float) x);
        }
    }
    return resultado;
}

EXERCÍCIO 19:
#include <stdio.h>

int fatorial(int numero); //declaração da função

int main()
{
    //declaração das variáveis na main
    int num, result;

    //interação com o usuário
    do{
        printf("Insira um numero inteiro positivo para calcular seu fatorial: \n");
        scanf("%i", &num);
        if(num < 0)
        {
            printf("Numero invalido (menor que zero). \n \n");
        }

    }while(num < 0);

    //chamar  função fatorial
    result = fatorial(num);

    //imprimir o resultado
    printf("O fatorial de %i eh %i \n", num, result);

    return 0;
}

int fatorial(int numero)
{
    int resultado;
    if(numero == 0)
    {
        return 1;
    }
    else
    {
       resultado = numero * (fatorial(numero - 1));
       return resultado;
    }
}

EXERCÍCIO 20:
#include <stdio.h>

int quant(int num); //declarar a função

int main()
{
    //declarando as variáveis
    int numero, resultado;

    //comunicar com o usuário
    do{
        printf("Insira um numero maior ou iogual a zero: \n");
        scanf("%i", &numero);

        //verificar se o numero é válido
        if(numero < 0)
        {
            printf("Numero INVÁLIDO (negativo");
        }

    }while(numero < 0);

    //chamar a função quant (calcula a quantidade de numeros primos)
    resultado = quant(numero);

    printf("%i", resultado);
    return 0;
}

int quant(int num)
{
    //declarando variáveis de loop
    int i, k, div = 0;
    //declarar a variável de retorno
    int quantia = 0;

    for(i = 2; i < num; i++)
    {
        //verificando se i esta entre os menores primos
        if((i == 2) || (i == 3) || (i == 5))
        {
            quantia = quantia + 1;
            continue;
        }

        //verificando se i eh divisível pelos menores primos
        else if(((i % 2) == 0) || ((i % 3) == 0) || ((i % 5) == 0))
        {
            continue;
        }

        //verificar os demais numeros (verificar o resto da divisão do numero por anteriores a ele);

        for(k = 7; k < (i / 2); k + 2)
        {
            if((i % k) != 0)
            {
                div = div + 1;
                break;
            }
        }
        
        //verificar se div = 0, (caso T = primo)
        if(div == 0)
        {
            quantia = quantia + 1;
        }

        div = 0;
    }
    //retorno do resultado
    return quantia;
}

EXERCÍCIO 21:
#include <stdio.h>

//declaração da função piramide
void piramide(int linhas);

int main()
{
    //declaração de variáveis
    int num;

    //comunicação com o usuário
    do{
        printf("Insira um numero positivo que representa as linhas da meia piramide: \n");
        scanf("%i", &num);

        //resposta caso numero seja invalido
        if(num < 0)
        {
            printf("Numero negativo ou muito grande (INVALIDO). \n \n");
        }

    }while(num < 0);

    //chamar a função que imprimirá a piramide
    piramide(num);

    return 0;
}

void piramide(int linhas)
{
    //declarar as variáveis de quantia de linhas e colunas
    int quantia_l, quantia_c;

    //imprimir a piramide
    for(quantia_l = 1; quantia_l <= linhas; quantia_l++)
    {
        for(quantia_c = 0; quantia_c < quantia_l; quantia_c++)
        {
            printf("!");
        }
        printf("\n");
    }
}

EXERCÍCIO 23:
#include <stdio.h>

void triangulo(int altura, int largura);

int main()
{
    int largura, altura;

    do{
        printf("Insira um numero que sera a largura do triangulo: \n");
        scanf("%i", &largura);

        if(largura<= 1)
        {
            printf("Lagura invalida(precisa ser maior que 1) \n \n");
        }
    }while(largura <= 1);

    altura = (2 *largura) - 1;

    triangulo(altura, largura);

    return 0;
}

void triangulo(int altura, int largura)
{
    int par_largura, par_numero, metade;
    metade = (altura /2);

    for(par_largura = 0; par_largura <= metade; par_largura++)
    {
        for(par_numero = 0; par_numero <= par_largura; par_numero++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(; metade > 0;metade--)
    {
        for(par_numero = 0; par_numero < metade; par_numero++)
        {
            printf("*");
        }
        printf("\n");
    }

}

EXERCÍCIO 24:
#include <stdio.h>

void triangulo(int altura, int largura);

int main()
{
    int altura, largura;

    do{
        printf("Insira uma altura maior que um \n");
        scanf("%i", &altura);

        if(altura <= 1)
        {
            printf("Altura invalida (menor ou igual a um)");
            printf("\n \n");
        }
    }while(altura <= 1);

    largura = (2 * altura) - 1;

    triangulo(altura, largura);

    return 0;
}

void triangulo(int altura, int largura)
{
    int i, k, j, metade, espaco;
    metade = largura / 2;

    for(i = 0; i < altura; i++)
    {
        espaco = metade - i;

        while(espaco > 0)
        {
            printf(" ");
            espaco--;
        }

        for(k = 0; k<= i; k++)
        {
            printf("*");
        }

        for(j = 0; j < i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
