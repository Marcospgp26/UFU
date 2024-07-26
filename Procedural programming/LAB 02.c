1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero_1,numero_2;
    printf("insira dois números\n");
    scanf("%f\n %f", &numero_1, &numero_2);

    if(numero_1 > numero_2)
    {
        printf("O numero %f eh maior que o numero %f", numero_1, numero_2);
    }
    else if(numero_1 < numero_2)
    {
        printf("O numero %f eh maior que o numero %f", numero_2, numero_1);
    }
    else
    {
        printf("Os dois numeros sao iguais!!!");
    }
    return 0;
}

2
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero, raiz;
    printf("Por favor, insira um numero para calcular a raiz dele.\n");
    scanf("%f", &numero);

    if(numero >= 0)
    {
       raiz = sqrt(numero);
       printf("A raiz do numero eh: %f", raiz);

    }
    else
    {
        printf("esse numero eh invalido");
    }
    return 0;
}

3
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero, raiz, quadrado;
    printf("Insira um numero real.\n");
    scanf("%f", &numero);

    if(numero >= 0)
    {
        raiz = sqrt(numero);
        printf("A raiz do numero eh: %f", raiz);
    }
    else
    {
        quadrado = numero * numero;
        printf("O quadrado do numero eh: %f", quadrado);
    }
    return 0;
}

4
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero, quadrado, raiz;
    printf("Por favor insira um numero positivo\n");
    scanf("%f", &numero);

    if(numero >= 0)
    {
        raiz = sqrt(numero);
        quadrado = numero * numero;
        printf(" a raiz desse numero eh %f e o quadrado dele eh: %f", raiz, quadrado);
    }
    else
    {
        printf("O numero não eh positivo!!!!!!!!");
    }

    return 0;
}

5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero, verificacao;
    printf("Isira um numero inteiro.\n");
    scanf("%i", &numero);

    verificacao = numero % 2;
    if(verificacao != 0)
    {
        printf("O numero %i eh impar", numero);
    }
    else
    {
        printf("O numero %i eh par", numero);
    }
    return 0;
}
6
#include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
    int numero1, numero2, diferenca;
    printf("Insira dois numeros inteiros.\n");
    scanf("%i %i", &numero1, &numero2);

    if(numero1 > numero2)
    {
        diferenca = numero1 - numero2;
        printf("O maior numero eh %i\n A diferenca entre eles eh: %i", numero1, diferenca);
    }
    else if(numero1 < numero2)
    {
        diferenca = numero2 - numero1;
        printf("O maior numero eh %i\n A diferenca entre eles eh: %i", numero2, diferenca);
    }
    else
    {
        diferenca = numero2 - numero1;
        printf("Os dois numero sao iguais\n A diferenca entre eles eh 0", numero2, diferenca);
    }
    return 0;
    }
7
#include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
    int numero1, numero2;
    printf("Digite 2 numeros\n");
    scanf("%i\n %i", &numero1, &numero2);

    if(numero1 > numero2)
    {
        printf("O maior numero eh:  %i", numero1);
    }
    else if (numero1 < numero2)
    {
        printf("O maior numero eh: %i", numero2);
    }
    else
    {
        printf("Numeros iguais");
    }
    return 0;
    }
8
#include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
    float nota1, nota2, media;
    printf("insira duas notas\n");
    scanf("%f %f", &nota1, &nota2);

    if((nota1 >= 0.0) && (nota1 <= 10.0) && (nota2 >= 0.0) && (nota2 <= 10.0))
    {
        media = (nota1 + nota2) / 2;
        printf("A media das notas eh: %f", media);
    }
    else
    {
        printf("As notas sao invalidas");
    }
    return 0;
    }

9
#include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
    float salario, prestacao;
    printf("Insira o salario e a prestacao nessa ordem.\n");
    scanf("%f %f", &salario, &prestacao);

    if(prestacao > salario + (20 * salario / 100))
    {
        printf("Emprestimo nao concedido.\n");
    }
    else
    {
        printf("Emprestimo concedido");
    }
    return 0;
    }

10
#include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
    float h, pesoideal;
    char S;

    printf("Voce eh homem ou mulher?\n Para mulher digite m\n Para homem digite h\n");
    scanf("%c", &S);

    printf("Digite sua altura\n");
    scanf("%f", &h);

    if((S == 'H') || (S == 'h'))
    {
        pesoideal = (72.7 * h) - 58;
        printf("Seu peso ideal eh: %f", pesoideal);
    }
    else if((S == 'M') || (S == 'm'))
    {
        pesoideal = (62.1 * h) - 44.7;
        printf("Seu peso ideal eh: %f", pesoideal);
    }
    else
    {
        printf("Por favor, insira seu sexo");
    }
    return 0;
    }

11
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero, resto, soma_algarismos = 0;
    printf("Por favor, digite um número inteiro.\n");
    scanf("%i", &numero);

    if(numero >= 0)
    {
        while(numero > 0)
        {
            resto = numero % 10;
            soma_algarismos = soma_algarismos + resto;
            numero = numero / 10;
        }
        printf("A soma dos algarismo eh: %i", soma_algarismos);
    }
    else
    {
        printf("Numero Invalido.\n");
    }
    return 0;
}

12
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero;
    float logaritmo;
    printf("Por favor digite um numero inteiro positivo para calcular seu logaritmo.\n");
    scanf("%i", &numero);

    if(numero < 0)
    {
        printf("Numero invalido");
    }
    else
    {
        logaritmo = log(numero);
        printf("O logaritmo de %i eh %f", numero, logaritmo);
    }
    return 0;
}

13
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float prova_1, prova_2, prova_3, media;
    printf("Por favor, adicione duas notas com peso 1 e uma com peso 2 nessa ordem,\n");
    scanf("%f\n %f\n %f", &prova_1, &prova_2, &prova_3);

    media = (prova_1 + prova_2 + (prova_3 * 2)) / 3;
    if(media >= 60)
    {
        printf("Aluno aprovado!!!");
    }
    else
    {
        printf("Aluno reprovado.");
    }
    return 0;
}

14
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float Trabalho_lab, avaliacao_semestral, exame_final, media;
    printf("Coloque as notas do trabalho de labortario, da avaliação semestral e do exame final nessa ordem, lembre-se que as notas estao entre 0 e 10\n");
    scanf("%f\n %f\n %f", Trabalho_lab, avaliacao_semestral, media);

    if((Trabalho_lab >= 0) && (Trabalho_lab <= 10) && (avaliacao_semestral >= 0) && (Trabalho_lab <= 10) && (exame_final >= 0) && (exame_final <= 10))
    {
        media = (Trabalho_lab * 2 + avaliacao_semestral * 3 + exame_final *5)/3;

    }
    return 0;
}

15
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float Trabalho_lab, avaliacao_semestral, exame_final, media;
    printf("Coloque as notas do trabalho de laboratorio, da avaliacao semestral e do exame final nessa ordem, lembre-se que as notas estao entre 0 e 10\n");
    scanf("%f\n %f\n %f", &Trabalho_lab, &avaliacao_semestral, &media);

    if((Trabalho_lab >= 0) && (Trabalho_lab <= 10) && (avaliacao_semestral >= 0) && (avaliacao_semestral <= 10) && (exame_final >= 0) && (exame_final <= 10))
    {
        media = (Trabalho_lab * 2 + avaliacao_semestral * 3 + exame_final *5)/10;

        if((media >= 0) && (media <= 2.9))
        {
            printf("Aluno reprovado");
        }
        else if((media >= 3)&& (media <= 4.9))
        {
            printf("O aluno fara recuperacao.");
        }
        else
        printf("O aluno foi aprovado");

    }
    else
    {
        printf("Valores incorretos, por favor reeinserir os valores");
    }


    return 0;
}

16
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero;
    printf("Digite um numero correspondente a um mes.\n");
    scanf("%d", &numero);

    switch(numero)
    {
        case 1:
            printf("Janeiro");
            break;
        case 2:
            printf("Fevereiro");
            break;
        case 3:
            printf("Marco");
            break;
        case 4:
            printf("Abril");
            break;
        case 5:
            printf("Maio");
            break;
        case 6:
            printf("Junho");
            break;
        case 7:
            printf("Julho");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Setembro");
            break;
        case 10:
            printf("Outubro");
            break;
        case 11:
            printf("Novembro");
            break;
        case 12:
            printf("Dezembro");
            break;
        default:
            printf("Valor invalido");
            break;
    }
return 0;
}

17
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float bM,bm,h, area;
    /*sendo bM(Base Maior)
    bm(Base menor)
    h (altura) */
    do
    {
        printf("Insira a base maior\n");
        scanf("%f", &bM);
        if (bM == 0)
        {
            printf("Valor invalido! \n \n");
        }
    }while(bM == 0);

    do
    {
        printf("Insira a base menor\n");
        scanf("%f", &bm);
        if (bm ==0)
        {
            printf("Valor invalido! \n \n");

        }
    }while (bm == 0);

    printf("Insira a altura\n");
    scanf("%f", &h);

    area = (bM + bm) * h /2;

    printf("A area do trapezio eh: %f", area);
    
    return 0;
}

18
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num1, num2,resultado;
    int operacao;
    do
    {
        printf("Escolha sua operacao:\n (1) Adicao\n (2) Subtracao\n (3) Multiplicacao\n (4) Divisao\n");
        scanf("%i", &operacao);

        if((operacao < 1) || (operacao > 4))
        {
            printf("Resultado invalido \n \n");
        }

    }while((operacao < 1) || (operacao > 4));

    printf("Insira dois valores:\n");
    scanf("%f \n %f", &num1, &num2);

    switch(operacao)
    {
        case 1:
            resultado = num1 + num2;
            break;
        case 2:
            resultado = num1 - num2;
            break;
        case 3:
            resultado = num1 * num2;
            break;
        case 4:
            resultado = num1 /(float) num2;
    }
    printf("O resultado da operacao eh: %f", resultado);
    return 0;
}

19
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    do
    {
        printf("Insira um numero divisivel por 3 ou 5. Inteiros divisiveis por 3 e 5 ao mesmo tempo ao serao admitidos.\n");
        scanf("%i", &num);
        if(num % 15 == 0)
        {
            printf("Numero divisivel por 3 e 5 ao mesmo tempo. Digite outro numero.\n \n");
        }
    }while(num % 15 == 0);
    if(num % 3 == 0)
    {
        printf("Numero divisivel por 3!!!\n");
    }
    else
    {
        printf("Numero indivisivel por 3.\n");
    }
    if(num % 5 == 0)
    {
        printf("Numero divisivel por 5!!!\n");
    }
    else
    {
        printf("Numero indivisivel por 5.\n");
    }
    return 0;
}

20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float lado_1, lado_2, lado_3;
    printf("Insira tres medidas de lado de um triangulo:\n");
    scanf("%f\n %f\n %f", &lado_1, &lado_2, &lado_3);

    if((lado_1 < lado_2 + lado_3) && (lado_2 < lado_1 + lado_3) && (lado_3 < lado_1 + lado_2))
    {

        if((lado_1 == lado_2) && (lado_1 == lado_3) && (lado_2 == lado_3))
        {
            printf("Eh um triangulo equilatero!!\n");
        }

        else if((lado_1 == lado_2) || (lado_1 == lado_3) || (lado_2 == lado_3))
        {
            printf("Eh um triangulo isoceles!!!\n");
        }
        else
        {
            printf("Eh um triangulo escaleno!!!\n");
        }
    }
    else
    {
        printf("Nao eh um triangulo!!!\n");
    }
    return 0;
}

21
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num1, num2, resultado;
    int operacao;
    printf("Por favor escolha dois numeros:\n ");
    scanf("%f\n %f", &num1, &num2);

    do
    {
        printf("Escolha uma operacao para realizar usando os dois numeros:\n 1- Soma deles\n 2-Diferenca do maior para o menor\n 3-Produto deles\n 4-Divisao deles\n");
        scanf("%i", &operacao);

        if ((operacao < 1 ) || (operacao > 4))
            printf("Por favor, escolha uma opcao valida.\n \n");

    }while((operacao < 1) || (operacao > 4));

    //operacao 1
    if(operacao == 1)
    {
        resultado = num1 + num2;
        printf("O resultado da operacao eh: %f", resultado);
    }

    //operacao 2
    else if(operacao == 2)
    {

        if(num1 > num2)
        resultado = num1 - num2;

        else
        resultado =  num2 - num1;

        printf("O resultado da operacao eh: %f", resultado);
    }

    //operacao 3
    else if(operacao == 3)
    {
        resultado = num1 * num2;
        printf("O resultado da operacao eh: %f", resultado);
    }

    //operacao 4
    else
    {
        if(num2 != 0)
        {
            resultado = num1 /(float) num2;
            printf("O resultado da operacao eh: %f", resultado);
        }

        else
            printf("Impossivel realizar a divisao (o denominador eh 0)");
    }

    return 0;
}

22
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade, tempo_de_servico;
    printf("Por favor, insira a a idade e o tempo de servico, nessa ordem!\n");
    scanf("%i\n %i", &idade, &tempo_de_servico);

    if((idade >= 65) || (tempo_de_servico >= 30))
    {
        printf("Pode se aposentar!!!");
    }


    else if((idade >= 60) && (idade < 65) && (tempo_de_servico >= 25))
    {
        printf("Pode se aposentar!!!!");
    }

    else
    {
        printf("Nao pode se aposentar");
    }
    return 0;
}

23
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int ano;
    printf("Insira um ano que desejar.\n");
    scanf("%i", &ano);

    if((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0)))
    {
        printf("O ano %i eh bissexto", ano);
    }
    else
    {
        printf("O ano %i nao eh bissexto", ano);
    }

    return 0;
}

24
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int estado;
    float valor,preco_final;
    printf("Por favor, insira o valor do produto.\n");
    scanf("%f", &valor);

    printf("Escolha um estado para o envio:\n (1)- MG\n (2)- SP\n (3)- RJ\n (4)- MS\n");
    scanf("%i", &estado);

    switch(estado)
    {
        case 1:
            preco_final = 1.07 * valor;
            printf("O preco final eh: %f\n", preco_final);
            break;

        case 2:
            preco_final = 1.12 * valor;
            printf("O preco final eh: %f\n", preco_final);
            break;

        case 3:
            preco_final = 1.15 * valor;
            printf("O preco final eh: %f\n", preco_final);
            break;

        case 4:
            preco_final = 1.08 * valor;
            printf("O preco final eh: %f\n", preco_final);
            break;

        default:
            printf("ERRO ESTADO INVALIDO!!!!");

    }

    return 0;
}

25
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta, raiz1, raiz2;
    printf("Por favor, insira valores para as variaveis a, b e c nessa ordem para formar uma equacao de segundo grau.\n");
    scanf("%f\n %f\n %f", &a, &b, &c);

    if( a == 0)
    {
        printf("Nao eh uma equacao de segundo grau\n");
    }
    else
    {
        delta = (b * b) - (4 * a *c);

        if(delta < 0)
        {
            printf("A equacao nao possui raizes reais\n");
        }
        else if (delta == 0)
        {
            raiz1 = ((-1 * b) + sqrt(delta)) / (2 * a);
            printf("A equacao possui uma raiz real, sendo ela %f \n", raiz1);
        }
        else
        {
            raiz1 = ((-1 * b) + sqrt(delta)) / (2 * a);
            raiz2 = ((-1 * b) - sqrt(delta)) / (2 * a);
            printf("A equacao possui duas raizes rais, sendo elas %f e %f \n", raiz1, raiz2);
        }
    }

    return 0;
}

26
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float km, litros, consumo;
    printf("Insira uma distancia em Km e a quantidade de litros de gasolina consumido pelo carro nesse trajeto. Coloque os valores nessa ordem.\n");
    scanf("%f\n %f", &km, &litros);

    consumo = km / litros;

    if(consumo < 8)
    {
        printf("Venda o carro!\n");
    }
    else if((consumo >= 8) && (consumo <= 14))
    {
        printf("Carro economico!\n");
    }
    else
    {
        printf("Carro Super economico!!!\n");
    }

    return 0;
}

27
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade, caso;
    printf("Por favor, insira a idade do nadador.\n");
    scanf("%i", &idade);

    //Vou converter as prossibilidades em cases (só para acostumar com switch mesmo).

    if(idade < 5){caso = 1;}
    if((idade >= 5 ) && (idade <= 7)){caso = 2;}
    if((idade >= 8) && (idade <= 10)){caso = 3;}
    if((idade >= 11) && (idade <= 13)){caso = 4;}
    if((idade >= 14) && (idade <= 17)){caso = 5;}

    switch(caso)
    {
        case 1:
            printf("A crianca nao tem idade para nadar.\n");
            break;
        case 2:
            printf("O nadador esta na categoria Infantil A.\n");
            break;
        case 3:
            printf("O nadador esta na cetegoria Infantil B.\n");
            break;
        case 4:
            printf("O nadador esta na categoria juvenil A.\n");
            break;
        case 5:
            printf("O nadador esta na categoria juvenil B.\n");
            break;
        default:
            printf("O nadador esta na categoria senior.\n");
            break;

    }
    return 0;
}

28 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y, z, multp, resultado, raiz;
    int escolha;
    printf("Insira tres valores.\n");
    scanf("%f\n %f\n %f", &x, &y, &z);

    do
    {
        printf("Selecione uma opcao de media:\n (1) - geometrica\n (2) - Ponderada\n (3) - Harmonica\n (4) - aritmetica.\n");
        scanf("%i", &escolha);

        if((escolha < 1) || (escolha > 4))
        printf("Por favor escolha um valor aceito.\n \n");
    }while ((escolha < 1 ) || (escolha > 4));

    switch(escolha)
    {
        case 1:
            multp = x * y * z;
            resultado = cbrt(multp);
            break;
        case 2:
            multp = (1 * x) + (2 * y) + (3 * z);
            if(multp >= 0)
            {
                resultado = multp / 3;
            }
            else
            {
                resultado = (-1 * multp) / 3;
            }
            break;
        case 3:
            multp = ( 1 / x) + (1 / y) + ( 1 / z);
            resultado = 1 / multp;
            break;
        case 4:
            resultado = ( x + y + z) / 3;
            break;
    }
    printf("O resultado da operacao eh: %f", resultado);
    return 0;
}

29
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int num1, num2, soma, acertos = 0, erros = 0;
    int quest;

    srand(time(NULL));

    for(quest = 1; quest <= 5; quest++)
    {
        printf("Digite o resultado da soma entre os dois numeros :)\n");

        num1 = 1 + (rand() % 100);
        num2 = 1 + (rand() % 100);
        printf(" %i\n %i\n \n", num1, num2);
        scanf("%i", &soma);

        (soma == num1 + num2) ? (acertos++) : (erros++);

        if(soma != num1 + num2)
            printf("Resposta da questao %i errada\n \n", quest);
        else
            printf("Resposta da questao %i certa!!!!\n \n", quest);

        printf("Total de erros: %i\n", erros);
        printf("Total de acertos: %i\n", acertos);
    }

    return 0;
}

30
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3;
    printf("Digite 3 numeros:\n");
    scanf("%f\n %f\n %f", &num1, &num2, &num3);

    if((num1 >= num2) && (num2 >= num3 ))
        printf("%f %f %f", num3, num2, num1);
    else if((num1 >= num3) && (num3 >= num2 ))
        printf("%f %f %f", num2, num3, num1);

    else if((num2 >= num3) &&(num3 >= num1))
        printf("%f %f %f", num1, num3, num2);
    else if((num2 >= num1) && (num1 >= num3))
        printf("%f %f %f", num3, num1, num2);

    else if((num3 >= num1) && (num1 >= num2))
        printf("%f %f %f", num2, num1, num3);
    else if((num3 >= num2) && (num2 >= num1))
        printf("%f %f %f", num1, num2, num3);
    
    return 0;
}

31
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso;
    int verif;
    printf("Por favor, insira sua altura.\n");
    scanf("%f", &altura);

    printf("Por favor insira seu peso.\n");
    scanf("%f", &peso);

    //colocando valores para os switches
    if (altura < 1.20){verif = 1;}
    else if ((altura >= 1.20 ) && (altura <= 1.70)){verif = 2;}
    else if (altura > 1.70){verif = 3;}

    if(peso <= 60)
    {
        switch(verif)
        {
            case 1:
                printf("Classificacao A");
                break;
            case 2:
                printf("Classificacao B");
                break;
            case 3:
                printf("Classificacao C");
                break;

        }
    }
    else if((peso > 60) && (peso <= 90))
    {
        switch(verif)
        {
            case 1:
                printf("Classificacao D");
                break;
            case 2:
                printf("Classificacao E");
                break;
            case 3:
                printf("Classificacao F");
                break;
        }
    }
    else
    {
        switch(verif)
        {
            case 1:
                printf("Classificacao G");
                break;
            case 2:
                printf("Classificacao H");
                break;
            case 3:
                printf("Classificacao I");
                break;
        }
    }
    return 0;
}

32
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod;
    float conta = 0;

    do{
        //escolha do cardapio
        printf("Por favor escolha seu pedido com base nos codigos:\n Codigo 100 -- Cachorro quente (preco 1.20)\n Codigo 101 -- Bauru Simples (preco 1.30)\n Codigo 102 -- Bauru com Ovo (preco 1.50)\n Codigo 103 -- Hamburguer (preco 1.20)\n Codigo 104 -- Cheeseburguer (preco 1.70)\n Codigo 105 -- Suco (preco 2.20)\n Codigo 106 -- Refrigerante (preco 1.00)\n Para parar de realizar pedidos basta digitar um codigo que nao esta presente no cardapio\n");
        scanf("%i", &cod);

        switch(cod)
        {
            case 100:
                conta = conta + 1.2;
                break;
            case 101:
                conta = conta + 1.3;
                break;
            case 102:
                conta = conta + 1.5;
                break;
            case 103:
                conta = conta + 1.2;
                break;
            case 104:
                conta = conta + 1.7;
                break;
            case 105:
                conta = conta + 2.2;
                break;
            case 106:
                conta = conta + 1;
                break;
        }
        if((cod >= 100) && (cod <= 106))
           printf("Pedido registrado!!!!\n \n");


    }while((cod >= 100) && (cod <= 106));

    printf("Obrigado por comer no nosso restaurante.\n A conta eh de %f reais", conta);

    return 0;
}

33
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Pa, Pn; //Pn é o preco ovo e Pa o preco antigo
    int verif;

    printf("Insira o preco antigo.\n");
    scanf("%f", &Pa);

    if(Pa <= 50)
    {
        Pn = 1.05 * Pa;
    }
    else if((Pa > 50) && (Pa <= 100))
    {
        Pn = 1.1 * Pa;
    }
    else
    {
        Pn = 1.15 * Pa;
    }

    if(Pn <= 80) {verif = 1;}
    else if((Pn > 80) && (Pn <= 120)) {verif = 2;}
    else if ((Pn > 120) && (Pn <= 200)) {verif = 3;}
    else {verif = 4;}

    switch(verif)
    {
        case 1:
            printf("O preco novo eh: %f . Barato", Pn);
            break;
        case 2:
            printf("O preco novo eh: %f . Normal", Pn);
            break;
        case 3:
            printf("O preco novo eh: %f . Caro", Pn);
            break;
        case 4:
            printf("O preco novo eh: %f . Muito Caro", Pn);
            break;
    }
    
    return 0;
}

34
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;
    int falta, verif;

    //Interacao com o usuário
    printf("Insira a nota do aluno.\n");
    scanf("%f", &nota);

    printf("Insira o numero de faltas do aluno.\n");
    scanf("%i", &falta);

    //Tranformar as notas em valores de verif para o switch
    if((nota <= 10.0) && (nota >= 9.0)) {verif = 1;}
    if((nota <= 8.9) && (nota >= 7.5)) {verif = 2;}
    if((nota <= 7.4) && (nota >= 5.0)) {verif = 3;}
    if((nota <= 4.9) && (nota >= 4)) {verif = 4;}
    if((nota <= 3.9) && (nota >= 0.0)) {verif = 5;}

    //switch
    switch(verif)
    {
        case 1:
            if(falta <= 20)
                printf("A");
            else
                printf("B");
            break;

        case 2:
            if(falta <= 20)
                printf("B");
            else
                printf("C");
            break;

        case 3:
            if(falta <= 20)
                printf("C");
            else
                printf("D");
            break;

        case 4:
            if(falta <= 20)
                printf("D");
            else
                printf("E");
            break;

        case 5:
            if(falta <= 20)
                printf("E");
            else
                printf("E");
            break;
    }
    return 0;
}

35
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //interacao com o usuario
    int ano, mes, dia;
    printf("Insira uma data, colocando dia, mes e ano, nessa ordem.\n");
    scanf("%i\n %i\n %i", &dia, &mes, &ano);

    //verificar se o ano eh bissexto
    if((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0)))
        ano = 2000;

    // meses
    if((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11))
    {
        if((dia >= 0) && (dia <= 30))
            printf("Data valida");
        else
            printf("Data invalida");
    }

    else if(mes == 2)
    {
        if((ano == 2000))
        {
            if((dia >= 0) && (dia <= 29))
                printf("Data valida");
            else
                printf("Data invalida");
        }
        else
            if((dia >= 0) && (dia <= 28))
                printf("Data valida");
            else
                printf("Data invalida");
    }

    else if((mes == 1) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12))
    {
        if((dia >= 0) && (dia <= 31))
            printf("Data valida");
        else
            printf("Data invalida");
    }
    else
        printf("Data invalida");
    return 0;
}


36
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando variaveis
    float valor_venda, comissao;
    int verif;

    //interacao com o usuario
    printf("Insira um valor de venda:\n");
    scanf("%f", &valor_venda);

    //arrumando para os switches
    if(valor_venda >= 100000.00) {verif = 1;}
    else if((valor_venda >= 80000.00) && (valor_venda < 100000.00)) {verif =2;}
    else if((valor_venda >= 60000.00) && (valor_venda < 80000.00)) {verif = 3;}
    else if((valor_venda >= 40000.00) && (valor_venda < 60000.00)) {verif = 4;}
    else if((valor_venda >= 20000.00) && (valor_venda < 40000.00)) {verif = 5;}
    else if(valor_venda < 20000.00) {verif = 6;}

    //comissao
    switch(verif)
    {
        case 1:
            comissao = 700.00 + 0.16 * valor_venda;
            break;
        case 2:
            comissao = 650.00 + 0.14 * valor_venda;
            break;
        case 3:
            comissao = 600.00 + 0.14 * valor_venda;
            break;
        case 4:
            comissao = 550.00 + 0.14 * valor_venda;
            break;
        case 5:
            comissao = 500.00 + 0.14 * valor_venda;
            break;
        case 6:
            comissao = 400.00 + 0.14 * valor_venda;
            break;
    }

    //resultado
    printf("O valor da comissao eh: %f", comissao);

    return 0;
}

37
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao de variaveis
    int hc, mc, hs, ms, dur, verif, calc;
    float preco;

    //comunicacao com o usuario
    //horario de entrada e saida
    printf("Adicione o horario de entrada no estacinamento (lembre de colocar hora e minutos).\n");
    scanf("%i\n %i", &hc, &mc);

    printf("Adicione o horario de saida (lembre de colocar hora e minutos).\n");
    scanf("%i\n %i", &hs, &ms);

    //conversao das horas em minutos
    if(hc > hs)
    {
        dur = (60 * (24 - hc + hs)) + ((60 - mc) + ms);
    }
    else if (hc < hs)
    {
        dur = 60 * (hs + hc) + ((60 - mc) + ms);
    }
    else if(hc == hs)
    {
        dur = ((60 - mc) + ms);
    }

    //switch
    if(dur <= 120) {verif = 1;}
    if((dur > 120) && (dur <= 240)) {verif = 2;}
    if(dur > 240) {verif = 3;}

    switch(verif)
        {
            case 1:
                if(dur <= 60)
                {
                    preco = 1;
                }
                else
                {
                    preco = 2;
                }
                break;

            case 2:
                dur = dur - 120;
                calc = dur / 60;
                if(dur % 60 != 0)
                {
                    preco = calc * 1.40 + 3.40;
                }
                else
                {
                    preco = calc * 1.40 + 3;
                }
                break;

            case 3:
                dur = dur - 240;
                calc = dur / 60;

                if( dur % 60 != 0)
                {
                    preco = calc * 2 + 7.8;
                }
                else
                {
                    preco = calc * 2 + 5.8;
                }
        }

        printf("O preco a ser pago eh: %f", preco);


    return 0;
}

38
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;
    printf("Por favor ensira a data de nascimento (dia mes e ano nessa ordem):\n");
    scanf("%i\n %i\n %i", &dia, &mes, &ano);

    if((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12))
    {
        if(((dia >= 1) && (dia <= 31)) && (ano <= 2022))
            printf("Data valida");
        else
            printf("Data invalida");
    }

    else if((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11))
    {
        if(((dia >= 1) && (dia <= 30)) && (ano <= 2022))
            printf("Data valida");
        else
            printf("Data invalida");
    }

    else if(mes == 2)
    {
        if((ano % 400 == 0) || ((ano % 4 != 0) && (ano % 10 == 0)))
        {
            if(((dia >= 1) && (dia <= 29)) && (ano <= 2022))
                printf("Data valida");
            else
                printf("Data invalida");
        }
        else
        {
            if(((dia >= 1) && (dia <= 8)) && (ano <= 2022))
                printf("Data valida");
            else
                printf("Data invalida");
        }
    }
    else
    {
        printf("Data invalida");
    }

    return 0;
}

39
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float si, sf, tempo;
    printf("Insira o salario atual e o tempo de trabalho:\n");
    scanf("%f\n %f", &si, &tempo);

    //verificacao do aumento pelo salario
    if(si <= 500)
        sf =1.25 * si;
    else if((si > 500) && (si <= 1000))
        sf = 1.2 * si;
    else if ((si > 1000) && (si <= 1500))
        sf = 1.15 * si;
    else if ((si > 1500) && (si <= 2000))
        sf = 1.1 * si;

    //verificacao de bonus pelo tempo
    if((tempo >= 1) && (tempo <= 3))
        sf = sf + 100;
    else if((tempo >= 4) && (tempo <= 6))
        sf = sf + 200;
    else if((tempo >= 7) && (tempo <= 10))
        sf = sf + 300;
    else if(tempo > 10)
        sf = sf + 500;

    //resultado
    if((si > 2000) && (tempo < 1))
        printf("Nao havera aumento.\n");
    else
        printf("O novo salario eh de: %f", sf);

    return 0;
}

40
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cc, cf;
    printf("Insira o custo de fabrica:\n");
    scanf("%f",&cf);

    if(cf <= 12000)
        cc = cf + (0.05 * cf);
    else if((cf > 12000) && (cf <= 25000))
        cc = cf + (0.1 * cf) + (0.15 * cf);
    else if(cf > 25000)
        cc = cf + (0.15 * cf) + (0.2 * cf);

    printf("O custo ao consumidor do carro eh: %f\n", cc);

    return 0;
}



