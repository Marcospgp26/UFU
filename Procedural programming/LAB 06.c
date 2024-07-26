EXERCÍCIO 1:
#include <stdio.h>
#include <string.h>

struct horario
{
    int hora, minuto, segundo;
};

struct data
{
    int dia, mes, ano;
};

struct compromisso{
    int data;
    float horario;
    char descricao[1000];
};

int main()
{
    return 0;
}

EXERCÍCIO 2:
#include <stdio.h>
#include <string.h>

struct Claudiney{
    char nome[10000];
    int idade;
    char endereco[10000];
};

typedef struct Claudiney Claudiney;

int main()
{
    Claudiney c;
    printf("Insira um nome: \n");
    setbuf(stdin, NULL);
    fgets(c.nome, 10000, stdin);

    printf("Insira uma idade: \n");
    scanf("%i", &c.idade);

    printf("Insira um endereco: \n");
    setbuf(stdin, NULL);
    fgets(c.endereco, 10000, stdin);

    printf("%s%i\n%s", c.nome, c.idade, c.endereco);
    return 0;
}

EXERCÍCIO 3:
#include <stdio.h>
#include <string.h>

struct escola{
    char nome[1000];
    int matricula;
    char curso[1000];
};

typedef struct escola esc;

int main()
{
    esc alunos[5];
    int i, k;
    for(i = 0; i < 5; i++)
    {
        printf("Insira o nome, matricula e curso do aluno (aluno %i de 5): \n", i + 1);
        setbuf(stdin, NULL);
        gets(alunos[i].nome);
        scanf("%i", &alunos[i].matricula);
        setbuf(stdin, NULL);
        gets(alunos[i].curso);
    }
    for(i = 0; i < 5; i ++)
    {
        printf("%s \t %i \t %s", alunos[i].nome, alunos[i].matricula, alunos[i].curso);
        printf("\n");
    }
    return 0;
}

EXERCÍCIO 4:
#include <stdio.h>
#include <string.h>

struct curso
{
    char nome[1000];
    int matricula;
    int n1, n2, n3;
};

typedef struct curso cs;

int main()
{
    cs alunos[5];
    int i, maior = 0, menor, media[5];

    for(i = 0; i < 5; i++)
    {
        printf("Insira o nome do aluno (aluno %i de 5): ", i + 1);
        setbuf(stdin, NULL);
        fgets(alunos[i].nome, 1000, stdin);
        printf("Insira a matricula do aluno (aluno %i de 5): ", i + 1);
        scanf("%i", &alunos[i].matricula);
        printf("Insira a nota das tres provas do aluno (aluno %i de 5):", i + 1);
        scanf("%i %i %i", &alunos[i].n1, &alunos[i].n2, &alunos[i].n3);
    }

    //b
    for(i = 0; i < 5; i++)
    {
        if(alunos[i].n1 > alunos[maior].n1)
        {
            maior = i;
        }
    }
    printf("O aluno com maior nota eh o %s \n", alunos[maior].nome);

    //c
    for(i = 0; i < 5; i++)
    {
        media[i] = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3;
    }
    for(i = 0; i < 5; i++)
    {
        if(i == 0)
        {
            maior = 0;
            menor = 0;
        }
        else if(media[i] > media[maior])
        {
            maior = i;
        }
        else if(media[i] < media[menor])
        {
            menor = i;
        }
    }
    printf("O aluno com maior media geral foi o %s \n", alunos[maior].nome);
    //d
    printf("O aluno com menor media geral foi o %s \n", alunos[menor].nome);

    //e
    for(i = 0; i < 5; i++)
    {
        if(media[i] >= 6)
        {
            printf("O aluno %s foi APROVADO\n \n", alunos[i].nome);
        }
        else
        {
            printf("O aluno %s foi REPROVADO \n \n", alunos[i].nome);
        }

    }

    return 0;
}

EXERCÍCIO 5:
#include <stdio.h>

struct vetor
{
    float a;
    float b;
    float c;
};

typedef struct vetor vetor;

int main()
{
    vetor v[2], soma;
    int i;
    for(i = 0; i < 2; i++)
    {
        printf("Insira uma coordenada x do vetor (vetor %i de 2):", i + 1);
        scanf("%f", &v[i].a);
        printf("Insira uma coordenada y do vetor (vetor %i de 2):", i + 1);
        scanf("%f", &v[i].b);
        printf("Insira uma coordenada z do vetor (vetor %i de 2):", i + 1);
        scanf("%f", &v[i].c);
    }
    soma.a = (v[0].a + v[1].a);
    soma.b = (v[0].b + v[1].b);
    soma.c = (v[0].c + v[1].c);
    printf("O resultado da soma eh: %f %f %f",soma.a,soma.b,soma.c);

    return 0;
}

EXERCÍCIO 6:
#include <stdio.h>
#include <string.h>

struct curso
{
    int matricula;
    char nome[1000];
    int codigo;
    float Nota1;
    float Nota2;
};

typedef struct curso curso;

int main()
{
    curso turma[10];
    int i;
    float media;
    for(i = 0; i < 10; i++)
    {
        printf("\n \nInformacoes acerca do aluno %i de 10\n", i + 1);

        printf("Insira a matriucla do aluno:");
        setbuf(stdin,NULL);
        scanf("%i", &turma[i].matricula);

        printf("Insira o nome do aluno: \n");
        setbuf(stdin,NULL);
        gets(turma[i].nome);

        printf("Insira o codigo da materia: ");
        setbuf(stdin,NULL);
        scanf("%i", &turma[i].codigo);

        printf("Insira a nota da primeira prova: ");
        setbuf(stdin,NULL);
        scanf("%f", &turma[i].Nota1);

        printf("Insira a nota da segunda prova: ");
        setbuf(stdin,NULL);
        scanf("%f", &turma[i].Nota2);
    }
    for(i = 0; i < 10; i++)
    {
        media = (turma[i].Nota1 + 2 * (turma[i].Nota2))/3;
        printf("Aluno: %s \t  Media: %f \n", turma[i].nome, media);
    }

    return 0;
}

EXERCÍCIO 7:
#include <stdio.h>
#include <math.h>

struct ponto_polar
{
    double r;
    double a;
};
typedef struct ponto_polar pp;

double pc_x(double a, double r);
double pc_y(double a, double r);

int main()
{
    pp ponto;
    double x, y;
    printf("Insira o argumento do ponto polar: ");
    scanf("%lf", &ponto.a);
    printf("Insira o raio do ponto polar: ");
    scanf("%lf", &ponto.r);


    x = pc_x(ponto.a,ponto.r);
    y = pc_y(ponto.a,ponto.r);
    printf("O ponto no plano cartesiano eh: (%0.2lf,%0.2lf)", x, y);
    return 0;
}

double pc_x(double a, double r)
{
    return r * cos(a);
}
double pc_y(double a, double r)
{
    return r * sin(a);
}

EXERCÍCIO 8:
#include <stdio.h>
#include <string.h>

struct funcionario
{
    char nome[1000], sexo,nascimento[10],cargo[30];
    int idade, CPF, codigo;
    float salario;
};
typedef struct funcionario fun;

int main()
{
    fun trab;
    printf("Insira o nome do funcionario: ");
    setbuf(stdin, NULL);
    fgets(trab.nome, 1000, stdin);

    printf("Insira a idade do funcionario: ");
    scanf("%i", &trab.idade);

    printf("Insira o sexo do funcionario (M/F):");
    do{
        setbuf(stdin, NULL);
        scanf("%c", &trab.sexo);

        if((trab.sexo == 'm') || (trab.sexo == 'f'))
        {
            trab.sexo = trab.sexo - 32;
        }

        if((trab.sexo != 'M') && (trab.sexo != 'F'))
        {
            printf("Sexo invalido. Reinsira (sexos aceitos M e F) \n \n");
        }
    }while((trab.sexo != 'M') && (trab.sexo != 'F'));

    printf("Insira o CPF do funcionario: ");
    scanf("%i", &trab.CPF);

    printf("Insira a data de nascimento (coloque / apos dia e mes): ");
    setbuf(stdin, NULL);
    gets(trab.nascimento);

    printf("Insira o codigo do setor onde ele trabalha (0-99): ");
    do{
        setbuf(stdin,NULL);
        scanf("%i", &trab.codigo);
        if((trab.codigo < 0) || (trab.codigo > 99))
        {
            printf("Codigo inexistente (menor que 0 ou maior que 99), por favor reinsira ele. \n \n");
        }
    }while((trab.codigo < 0) || (trab.codigo > 99));

    printf("Insira o cargo que o trabalhador ocupa: \n");
    setbuf(stdin,NULL);
    gets(trab.cargo);

    printf("Insira o salario do trabalhador: ");
    scanf("%f", &trab.salario);

    printf("DADOS DO TRABALHADOR:\n\nNOME: %s\nIDADE: %i\nSEXO: %c\nCPF: %i\nDATA DE NASCIMENTO: %s\nCODIGO DO SETOR: %i\nCARGO QUE OCUPA: %s\nSALARIO: %f\n",trab.nome,trab.idade,trab.sexo,trab.CPF,trab.nascimento,trab.codigo,trab.cargo,trab.salario);
    return 0;
}

EXERCÍCIO 09:
#include <stdio.h>

struct num
{
    int real;
    int imag;
};

typedef struct num num;

num op(num a, num b, int i);

int main()
{
    //declaração de variáveis
    num z, w, soma,sub, prod;

    //inserindo o primeiro numero:
    printf("Insira a parte real do primeiro numero: ");
    scanf("%i", &z.real);
    printf("Insira a parte imaginaria do primeiro numero: ");
    scanf("%i", &z.imag);

    //inserindo o segundo numero:
    printf("Insira a parte real do segundo numero: ");
    scanf("%i", &w.real);
    printf("Insira a parte imaginaria do segundo numero: ");
    scanf("%i", &w.imag);

    //realizando a soma:
    soma = op(z, w, 1);
    printf("O resultado da soma eh: %i %ii\n", soma.real, soma.imag);
    //realizando subtracao
    sub = op(z, w, 2);
    printf("O resultado da subtracao eh: %i %ii\n", sub.real, sub.imag);
    //realizando multp
    prod = op(z, w, 3);
    printf("O resultado do produto eh: %i %ii\n", prod.real, prod.imag);
    return 0;
}

num op(num a, num b, int i)
{
    num result;

    switch(i)
    {
    case 1:
        result.real = a.real + b.real;
        result.imag = a.imag + b.imag;
        break;
    case 2:
        result.real = a.real - b.real;
        result.imag = a.imag - b.imag;
        break;
    case 3:
        result.real = ((a.real * b.real) - (a.imag * b.imag));
        result.imag = ((a.real * b.imag) + (b.real * a.imag));
        break;
    }
    return result;
}

EXERCÍCIO 10:
#include <stdio.h>

struct dado
{
    char nome[50], end[50],tel[50];
};

int main()
{
    struct dado pes[5], aux;
    int i, j, k, l, m, verif;

    for( i = 0; i < 5; i++)
    {
        printf("Pessoa %i de 5 \n \n", i + 1);

        printf("Insira seu nome: ");
        setbuf(stdin,NULL);
        gets(pes[i].nome);

        printf("Insira seu endereco: ");
        setbuf(stdin,NULL);
        gets(pes[i].end);

        printf("Insira seu telefone: ");
        setbuf(stdin,NULL);
        gets(pes[i].tel);
        printf("\n \n");
    }

    for(i = 0; i < 5; i++)
    {
        //incial
        aux = pes[i];
        //anteriores
        for(j = 0; j < i; j++)
        {
            //cada caractere
            for(k = 0; k < 50; k++)
            {
                //caso que tem que mudar tudo :D
                if(pes[i].nome[k] < pes[j].nome[k])
                {
                    for(l = i; l > j; l--)
                    {
                        pes[l] = pes[l - 1];
                    }
                    pes[j] = aux;
                    break;
                }
                if(pes[i].nome[k] > pes[j].nome[k])
                {
                    break;
                }
            }
        }
    }

    for(i = 0; i < 5; i++)
    {
        printf("%s\n", pes[i].nome);
    }
    return 0;
}


EXERCÍCIO 11:
#include <stdio.h>
#include <string.h>

struct sala
{
    char nome[1000];
    int mat;
    float med;
};

typedef struct sala sal;

int main()
{
    sal aluno[10];
    sal acima[10], abaixo[10];
    int i, k = 0, l = 0, menos = 0, mais = 0;

    for(i = 0; i < 10; i++)
    {
        printf("Aluno %i de 10. \n", i + 1);

        printf("Insira o nome do aluno: ");
        setbuf(stdin,NULL);
        gets(aluno[i].nome);

        printf("Insira a matricula: ");
        setbuf(stdin,NULL);
        scanf("%i", &aluno[i].mat);

        printf("Insira a media: ");
        setbuf(stdin, NULL);
        scanf("%f", &aluno[i].med);

        if((aluno[i].med) >= 5)
        {
            acima[k] = aluno[i];
            mais++;
            k++;
        }
        else
        {
            abaixo[l] = aluno[i];
            menos++;
            l++;
        }
        printf("\n \n");
    }
    printf("Alunos acima da media: \n");
    for(i = 0; i < mais; i++)
    {
        printf("%s \t %i \t %f \n", acima[i].nome, acima[i].mat, acima[i].med);
    }
    printf("Alunos abaixo da media: \n");
    for(i = 0; i < menos; i++)
    {
        printf("%s \t %i \t %f \n", abaixo[i].nome, abaixo[i].mat, abaixo[i].med);
    }
    return 0;
}

EXERCÍCIO 12:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct baralho
{
    //Numero 1 - Copas. Numero 2- Ouros. Numero 3-Paus. Numero 4-Espadas;
    int naipe;

    //Numero 1- 1, Numero 2 - 2, Numero 3 -3, Numero 4 -4, Numero 5 -5, Numero 6 -6, Numero 7 -7, Numero 8 - 8, Numero 9 -9, Numero 10 - 10, Numero 11 - Valete, Numero 12 - Dama, Numero 13 - Rei
    int valores;
};
typedef struct baralho baralho;

int main()
{
    baralho jog[2][3];
    int i, k, l, m;
    srand(time(NULL));

    for(i = 0; i < 2; i++)
    {
        for(k = 0; k < 3; k++)
        {
            volta:
            jog[i][k].naipe = (rand() % 4) + 1;
            jog[i][k].valores = (rand() % 13) + 1;
            for(l = 0; l <= i; l++)
            {
                for(m = 0; m < k; m++)
                {
                    if((jog[i][k].naipe == jog[l][m].naipe) && (jog[i][k].valores == jog[l][m].valores))
                    {
                        goto volta;
                    }
                }
            }
        }
    }

    printf("Jogador 1: \n");

    for(i = 0; i < 2; i++)
    {
        for(k = 0; k < 3; k++)
        {
            switch(jog[i][k].valores)
            {
            case 1:
                printf("Um de ");
                break;
            case 2:
                printf("Dois de ");
                break;
            case 3:
                printf("Tres de ");
                break;
            case 4:
                printf("Quatro de ");
                break;
            case 5:
                printf("Cinco de ");
                break;
            case 6:
                printf("Seis de ");
                break;
            case 7:
                printf("Sete de ");
                break;
            case 8:
                printf("Oito de ");
                break;
            case 9:
                printf("Nove de ");
                break;
            case 10:
                printf("Dez de ");
                break;
            case 11:
                printf("Valete de ");
                break;
            case 12:
                printf("Dama de ");
                break;
            case 13:
                printf("Rei de ");
                break;

            }
            switch(jog[i][k].naipe)
            {
            case 1:
                printf("Copas \n");
                break;
            case 2:
                printf("Ouros \n");
                break;
            case 3:
                printf("Paus \n");
                break;
            case 4:
                printf("Espadas \n");
                break;
            }
        }
        if((i == 1) && (k == 3))
        {
            break;
        }
        printf("\n \nJogador 2: \n");
    }
    return 0;
}
EXERCÍCIO 13:
#include <stdio.h>

struct nascimento
{
    int dia,mes,ano;
};

struct dados
{
    char nome[50];
    char end[50];
    struct nascimento nasc;
    char cidade[50];
    char CEP[50];
    char mail[50];
};

int verif(int dia, int mes, int ano);

int main()
{
    struct dados a;
    int i,verif_m = 0, erro_n, erro_c = 1, erro_m = 1;

    printf("Insira seu nome: ");
    setbuf(stdin,NULL);
    fgets(a.nome, 50, stdin);

    printf("Insira seu endereco: ");
    setbuf(stdin,NULL);
    fgets(a.end, 50, stdin);

    printf("Insira sua data de nascimento (dia/mes/ano): ");
    scanf("%i %i %i",&a.nasc.dia,&a.nasc.mes,&a.nasc.ano);
    erro_n = verif(a.nasc.dia,a.nasc.mes,a.nasc.ano);

    printf("Insira sua cidade: ");
    setbuf(stdin,NULL);
    fgets(a.cidade, 50, stdin);

    printf("Insira seu CEP(somente numeros sao aceitos): ");
    setbuf(stdin,NULL);
    fgets(a.CEP, 50, stdin);

    for(i = 0; a.CEP[i] != '\n'; i++)
    {
        if((a.CEP[i] < '0') || (a.CEP[i] > '9'))
        {
            erro_c = 0;
        }
    }

    printf("Insira seu email: ");
    setbuf(stdin,NULL);
    fgets(a.mail, 50, stdin);

    for(i = 0; a.mail[i] != '\n'; i++)
    {
        if((a.mail[i] == '@') || (a.mail[i] == '.'))
        {
            verif_m++;
        }
        else if(a.mail[i] == ' ')
        {
            erro_m = 0;
        }
    }
    if((erro_m == 1) && (verif_m < 2))
    {
        erro_m = 0;
    }

    if(erro_c == 0)
        printf("CEP INCORRETO \n");
    else
        printf("CEP CORRETO \n");
    if(erro_n == 0)
        printf("DATA DE NASCIMENTO INVALIDA \n");
    else
        printf("DATA DE NASCIMENTO VALIDA \n");
    if(erro_m == 0)
        printf("EMAIL INVALIDO");
    else
        printf("EMAIL VALIDO");
    return 0;
}

int verif(int dia, int mes, int ano)
{
    //verificando se o mes e dia sao corretos (casos gerais)
    if((mes < 1) || (mes > 12))
        return 0;
    if((dia < 1) || (dia > 31))
        return 0;

    //verificando meses com 30 dias
    if((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11))
    {
        if(dia > 30)
            return 0;
        else
            return 1;
    }

    //verificando FEVEREIRO
    if(mes == 2)
    {
        if((ano % 400 == 0) || (((ano % 4) == 0) && ((ano % 100) != 0)))
        {
            if (dia > 29)
                return 0;
            else
                return 1;
        }
        else
        {
            if(dia > 28)
                return 0;
            else
                return 1;
        }
    }

}

EXERCÍCIO 14:
#include <stdio.h>

struct carro
{
    char marca[15];
    int ano;
    float preco;
};

int main()
{
    struct carro a[5];
    int i, j;
    float p;

    for(i =0; i < 5; i++)
    {
        printf("Insira a marca do carro: ");
        setbuf(stdin, NULL);
        gets(a[i].marca);

        printf("Insira o ano do carro: ");
        setbuf(stdin, NULL);
        scanf("%i", &a[i].ano);

        printf("Insira o preco do carro: ");
        setbuf(stdin, NULL);
        scanf("%f", &a[i].preco);
    }

    do
    {
        printf("Insira um preco para ser comparado com o dos carros (insira 0 para terminar o processo): ");
        setbuf(stdin,NULL);
        scanf("%f", &p);

        for(i = 0; i < 5; i++)
        {
            if(a[i].preco < p)
            {
                printf("Marca: %s \n", a[i].marca);
                printf("Ano: %i \n", a[i].ano);
                printf("Preco: %f \n", a[i].preco);
                printf("\n \n");
            }
        }


    }while(p != 0);

    return 0;
}

EXERCÍCIO 15:
#include <stdio.h>

struct livros
{
    char titulo[30], autor[15];
    int ano;
};

int main()
{
    struct livros livro[5];
    char pergunta[30];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Livro %i de 5 \n", i + 1);
        printf("Insira o titulo: ");
        setbuf(stdin,NULL);
        gets(livro[i].titulo);

        printf("Insira o autor: ");
        setbuf(stdin,NULL);
        gets(livro[i].autor);

        printf("Insira o ano:");
        scanf("%i", &livro[i].ano);
        printf("\n");
    }
    printf("Qual livro deseja procurar? (Insira o titulo) \n");
    setbuf(stdin,NULL);
    gets(pergunta);

    for(i = 0; i < 5; i++)
    {
        if(strcmp(pergunta, livro[i].titulo) == 0)
        {
            printf("Nome: %s \n", livro[i].titulo);
            printf("Autor: %s \n", livro[i].autor);
            printf("Ano de publicacao: %i \n", livro[i].ano);
            printf("\n \n");
        }
    }

    return 0;
}

EXERCÍCIO 16:
#include <stdio.h>


struct tempo
{
    int dia;
    int mes;
    int ano;
};
struct agenda
{
    char compromisso[60];
    struct tempo data;
};

int main()
{
    struct agenda marca[5];
    int i, M, A;

    for(i = 0; i < 5; i++)
    {
        printf("Compromisso %i de 5 \n", i + 1);
        printf("Insira o compromisso: ");
        setbuf(stdin,NULL);
        gets(marca[i].compromisso);

        do{
            printf("Insira o dia: ");
            scanf("%i", &marca[i].data.dia);

            if((marca[i].data.dia <= 0) || (marca[i].data.dia > 31))
            {
                printf("Dia invalido. \n");
            }
        }while((marca[i].data.dia <= 0) || (marca[i].data.dia > 31));

        do{
            printf("Insira o mes: ");
            scanf("%i", &marca[i].data.mes);

            if((marca[i].data.mes <= 0) || (marca[i].data.mes > 12))
            {
                printf("Mes invalido. \n");
            }
        }while((marca[i].data.mes <= 0) || (marca[i].data.mes > 12));

        do{
            printf("Insira o ano: ");
            scanf("%i", &marca[i].data.ano);

            if(marca[i].data.ano < 2023)
            {
                printf("Ano invalido. \n");
            }
        }while(marca[i].data.ano < 2023);
        printf("\n");
    }

    do
    {
        printf("Insira o mes: ");
        scanf("%i", &M);

        if(M != 0)
        {
            printf("Insira o ano ");
            scanf("%i", &A);

            printf("Compromissos do mes: \n");

            for(i = 0; i < 5; i++)
            {
                if(marca[i].data.mes == M)
                {
                    printf("%s \n", marca[i].compromisso);
                }
            }
            printf("\n Compromissos do ano: \n");

            for(i = 0; i < 5; i++)
            {
                if(marca[i].data.ano == A)
                {
                    printf("%s \n", marca[i].compromisso);
                }
            }
        }
    }while(M != 0);

    return 0;
}

EXERCÍCIO 17:
#include <stdio.h>

struct eletrodomesticos
{
    char nome[15];
    float potencia;
    float tempo_dia;
};
typedef struct eletrodomesticos eletro;

int main()
{
    //declarando as variaveis
    eletro quant[5];
    int t, i, tempo;
    float consumo = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Eletrodomestico %i de 5 \n", i+ 1);
        printf("Insira o nome do eletrodomestico:");
        setbuf(stdin,NULL);
        fgets(quant[i].nome, 15,stdin);

        printf("Insira a potencia em Kw:");
        scanf("%f", &quant[i].potencia);

        printf("Insira o tempo de uso dele por dia: ");
        scanf("%f", &quant[i].tempo_dia);
    }

    printf("Insira um tempo t em dias: ");
    scanf("%i", &t);

    for(i = 0; i < 5; i++)
    {
        consumo = consumo + (quant[i].potencia * quant[i].tempo_dia * t);
    }

    for(i = 0; i < 5; i++)
    {
        tempo = quant[i].potencia * quant[i].tempo_dia * t;
        printf("Eletrodomestico : %s \n Consumo: %f porcento", quant[i].nome, (tempo / consumo) * 100);
        printf("\n\n");
    }
    return 0;
}

EXERCÍCIO 18:
#include <stdio.h>

struct voo
{
    int cod_origem;
    int cod_destino;
};

struct aeroporto
{
    int cod;
    int saida;
    int chegada;
};

int main()
{
    //declarando as variaveis
    struct voo a[5];
    struct aeroporto b[5];
    int i;

    //atribuindo valores para os aeroportos
    for(i = 0; i <5; i++)
    {
        b[i].cod = i;
        b[i].saida = 0;
        b[i].chegada = 0;
    }

    for(i = 0; i < 5; i++)
    {
        erro:
        do{
            printf("Insira o codigo do aeroporto de origem do aviao (codigos aceitos somente entre 0 e 4): ");
            scanf("%i", &a[i].cod_origem);

            if((a[i].cod_origem < 0) || (a[i].cod_origem > 4))
            {
                printf("Codigo invalido, reescreva ele \n \n");
            }
        }while((a[i].cod_origem < 0) || (a[i].cod_origem > 4));

        do{
            printf("Insira o codigo do aeroporto de chegada do aviao (codigos aceitos somente entre 0 e 4): ");
            scanf("%i", &a[i].cod_destino);

            if((a[i].cod_destino < 0) || (a[i].cod_destino > 4))
            {
                printf("Codigo invalido, reescreva ele \n \n");
            }
        }while((a[i].cod_destino < 0) || (a[i].cod_destino > 4));

        if(a[i].cod_origem == a[i].cod_destino)
        {
            printf("Ambos os codigos nao podem ser iguais. Reecreva-os: \n \n");
            goto erro;
        }
    }//fim do for
    for(i = 0; i < 5; i++)
        {
            if(a[i].cod_origem == b[i].cod)
            {
                b[i].chegada++;
            }
            if(a[i].cod_destino == b[i].cod)
            {
                b[i].chegada++;
            }
        }
}

EXERCÍCIO 19: NÃO SE FAZ
EXERCÍCIO 20:
#include <stdio.h>

struct dma
{
    int dia;
    int mes;
    int ano;
};

int ver(int dia,int mes, int ano);


int main()
{
    struct dma dia1,dia2;
    int verif;
    float tempo;

    do
    {
        printf("Insira a data do primeiro dia (dia, mes e ano nessa ordem): ");
        scanf("%i %i %i", &dia1.dia,&dia1.mes,&dia1.ano);
        verif = ver(dia1.dia, dia1.mes, dia1.ano);
        if(verif == 0)
        {
            printf("DATA INVALIDA \n");
        }
    }
    while(verif == 0);

    do
    {
        printf("Insira a data do segundo dia (dia, mes e ano nessa ordem): ");
        scanf("%i %i %i", &dia2.dia,&dia2.mes,&dia2.ano);
        verif = ver(dia2.dia, dia2.mes, dia2.ano);
        if(verif == 0)
        {
            printf("DATA INVALIDA \n");
        }
    }
    while(verif == 0);
    //calculando quanto tempo se passou(usando as aproximacoes abençoadas)
    tempo = (dia1.dia + (dia1.mes * 30.4) + (dia1.ano * 365.25)) - (dia2.dia + (dia2.mes * 30.4) + (dia2.ano *365.25));
    if(tempo < 0)
    {
        tempo = -tempo;
    }
    printf("Se passaram %i dias", (int)tempo);
    return 0;

}

int ver(int dia,int mes, int ano)
{
    //verificando os meses
    if((mes < 1) || (mes > 12))
    {
        return 0;
    }

    //verificando dias
    if((dia < 0) || (dia > 31))
    {
        return 0;
    }

    //casos especificos
    if((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11))
    {
        if(dia > 30)
        {
            return 0;
        }
        else
            return 1;
    }

    if(mes == 2)
    {
        if(((ano % 400) == 0) || (((ano % 4) == 0) && ((ano % 100) != 0)))
        {
            if(dia > 29)
                return 0;
            else
                return 1;
        }
        else
        {
            if(dia > 28)
                return 0;
            else
                return 1;
        }
    }
}

