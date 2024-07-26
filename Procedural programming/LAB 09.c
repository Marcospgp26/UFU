EX1:
#include <stdio.h>

int main()
{
        int *p, i;

        p = (int *) calloc(5, sizeof(int));
        for(i = 0; i < 5; i++)
        {
            printf("Insira um numero para ser armazenado no array (numero %i de 5): ", i + 1);
            scanf("%i", (p + i));
        }

        for(i = 0; i < 5; i++)
        {
            printf("Numero %i: %i\n", i + 1, (*(p + i)));
        }

        free(p);
}

EX2:
#include <stdio.h>

int main()
{
        int *p, n, i;

        printf("Insira o numero que sera o tamanho do vetor: ");
        scanf("%i", &n);

        p = (int *) calloc(n, sizeof(int));

        if(p == NULL)
        {
            printf("Memoria insuficiente");
            return 1;
        }

        for(i = 0; i < n; i++)
        {
            printf("Insira um numero (numero %i de %i): ", i + 1, n);
            scanf("%i", (p + i));
        }

        for(i = 0; i < n; i++)
        {
            printf("Numero %i: %i\n", i + 1, (*(p + i)));
        }

        free(p);

        return 0;
}

EX3
#include <stdio.h>

void par_impar(int*p, int n, int*par, int*impar);

int main()
{
    int n, *p, i, par = 0, impar = 0;

    printf("Insira o tamanho do vetor que voce deseja armazenar: ");
    scanf("%i", &n);

    p = (int*) calloc(n,sizeof(int));
    if(p == NULL)
    {
        printf("Memoria insuficiente");
        return 1;
    }

    for(i = 0; i <n; i++)
    {
        printf("Insira um numero no vetor (numero %i de %i): ", i + 1, n);
        scanf("%i", &p[i]);
    }

    par_impar(p, n, &par, &impar);

    printf("%i %i", par, impar);

    free(p);

    return 0;
}

void par_impar(int*p, int n, int*par, int*impar)
{
    int i;
    for(i =0; i < n; i++)
    {
        if(((p[i]) % 2) == 0)
        {
            (*(par))++;
        }
        else
        {
            (*(impar))++;
        }
    }
}

EX4:
#include <stdio.h>
#include <stdlib.h>

void tira_vogal(char *p, int n);

char main()
{
    int n, i;
    char *s;
    printf("Insira o tamanho da sua string: \n");
    scanf("%i", &n);

    s = (char*) calloc(n, sizeof(char));

    printf("Insira a sua string: ");
    setbuf(stdin, NULL);
    fgets((s), n, stdin);

    tira_vogal(s, n);

    printf("A sua string sem vogal eh: %s",s);
}
void tira_vogal(char *p, int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        if((p[i] == 'a') || (p[i] == 'A') || (p[i] == 'e') || (p[i] == 'E') || (p[i] == 'i') || (p[i] == 'I') || (p[i] == 'o') || (p[i] == 'O') || (p[i] == 'u') || (p[i] == 'U'))
        {
            for(j = i; j < n; j++)
            {
                p[j] = p[j + 1];
            }
            i--;
        }
    }
}

EX5:
#include <stdio.h>
#include <stdlib.h>

void mult(int * p, int n, int x);


int main()
{
    int N, *vet, X, i;

    printf("Insira o tamanho do seu vetor: \n");
    scanf("%i", &N);

    vet = (int *) calloc(N, sizeof(int));
    if(vet == NULL)
    {
        printf("Sem memória");
        exit(1);
    }

    for(i = 0; i < N; i++)
    {
        printf("Insira um valor para ser armazenado no vetor (valor %i de %i): ", i + 1, N);
        scanf("%i", &vet[i]);
    }

    printf("\n\nInsira um numero que voce deseja procurar os multiplos: ");
    scanf("%i", &X);

    mult(vet, N, X);
    return 0;
}

void mult(int * p, int n, int x)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if((p[i] % x) == 0)
        {
            printf("Multiplo: %i\n", p[i]);
        }
    }
}
EX 6:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *mem, i, n, esc, pos, num;

    printf("Insira o tamanho da memoria: \n");
    scanf("%i", &n);

    mem = (int *) calloc(n, sizeof(int));
    if(mem == NULL)
    {
        printf("Sem memoria");
        exit(1);
    }


    do
    {
        printf("Escolha uma opcao: \n");
        printf("(1) - Escrever um valor em uma posicao\n");
        printf("(2) - Ler um valor em uma posicao\n");
        printf("(3) - Sair\n");
        scanf("%i", &esc);

        if((esc < 1) || (esc > 3))
        {
            printf("Escolha invalida");
        }

        switch(esc)
        {
        case 1:
        es:
            printf("Escreva a posicao que deseja escrever o valor: ");
            scanf("%i", &pos);
            if((pos < 0) || (pos > n))
            {
                printf("Posicao invalida\n\n");
                goto es;
            }
            printf("Insira o valor: ");
            scanf("%i", (mem + pos));
            break;
        case 2:
            c2:
            printf("Escreva a posicao que deseja ler o valor: ");
            scanf("%i", &pos);
            if((pos < 0) || (pos > n))
            {
                printf("Posicao invalida\n\n");
                goto c2;
            }
            printf("Valor : %i\n", (*(mem + pos)));
            break;
        }

    }while(esc != 3);
    return 0;
}

EX 7:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bilhete(int *p, int n);

int main()
{
    int lot[6], cli[6], i, j, quant = 0, *p, k =0;
    srand(time(NULL));

    bilhete(lot, 6);
    bilhete(cli, 6);
    for(i = 0; i < 6; i++)
    {
        printf("%i ", cli[i]);
    }
    printf("\n\n");

    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 6; j++)
        {
            if((cli[i]) == (lot[j]))
            {
                quant++;
                break;
            }
        }
    }

    p = (int *) calloc(quant, sizeof(int));

    if(p != NULL)
    {
        for(i = 0; i < 6; i++)
        {
            for(j = 0; j < 6; j++)
            {
                if((cli[i]) == (lot[j]))
                {
                    (*(p + k)) = (*(cli + i));
                    k++;
                    break;
                }
            }
        }
    }

    printf("Numeros sorteados pela loteria: \n");
    for(i = 0; i < 6; i++)
    {
        printf("%i ", lot[i]);
    }
    printf("\nNumeros acertados:\n");
    if(p == NULL)
    {
        printf("Não houve acertos");
        exit(1);
    }

    for(i = 0; i < quant; i++)
    {
        printf("%i ", p[i]);
    }
    return 0;
}

void bilhete(int *p, int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        (*(p + i)) = (rand() % 100);
        for( j = 0; j < i; j++)
        {
            if((*(p + i)) == (*(p + j)))
            {
                srand(time(NULL));
                (*(p + i)) = (rand() % 100);
                j = 0;
            }
        }
    }
}

EX8:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int * vet, zer = 0, i;

    vet = (int *) calloc(1500, sizeof(int));
    if(vet == NULL)
    {
        printf("Sem memória");
        exit(1);
    }

    for(i = 0; i < 1500; i++)
    {
        if(vet[i] == 0)
        {
            zer++;
        }
    }

    printf("Ha %i zeros\n", zer);

    //b
    for(i = 0; i < 1500; i++)
    {
        vet[i] = i;
    }

    //c
    printf("Primeiros 10 numeros: ");
    for(i = 0; i < 10; i++)
    {
        printf("%i ", vet[i]);
    }

    printf("\nUltimos 10 numeros: ");
    for(i = 1489; i < 1500; i++)
    {
        printf("%i ", vet[i]);
    }
}


EX 9:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, * vet, n, quant = 0;
    printf("Insira  o tamanho do vetor que deseja gerar: \n");
    scanf("%i", &n);

    vet = (int *) calloc(n, sizeof(int));

    for(i = 0; i < n; i++)
    {
        printf("Insira um numero para ser armazenado no vetor(se for negativo ele parará de armazenar): ");
        scanf("%i", &vet[i]);

        if(vet[i] < 0)
        {
            break;
        }
        quant++;
    }

    vet = realloc(vet, quant * sizeof(int));

    printf("Vetor: ");

    for(i = 0; i < quant; i++)
    {
        printf("%i ", vet[i]);
    }
    return 0;
}

EX 10:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i;
    double *vet;
    srand(time(NULL));

    do
    {
        printf("Insira quantos numeros voce deseja armazenar (precisa ser maior ou igual a 10) \n");
        scanf("%i", &n);
        if(n < 10)
        {
            printf("Numero muito pequeno.\n\n");
        }
    }while(n < 10);

    vet = (double *) malloc(n * sizeof(double));

    for(i = 0; i < n; i++)
    {
        vet[i] = (rand() % 101);
    }

    printf("Valores do vetor: \n");
    for(i = 0; i < n; i++)
    {
        printf("%lf ", vet[i]);
    }
    return 0;
}

EX 11:
#include <stdio.h>

struct aluno
{
    int mat;
    char sobrenome[50];
    int ano;
};

typedef struct aluno aluno;

int main()
{
    int n, i;
    aluno *vet;

    do
    {
        printf("Insira quantos alunos voce deseja armazenar: ");
        scanf("%i", &n);

        if(n <= 0)
        {
            printf("Quantidade de alunos muito pequena\n\n");
        }
    }while(n <= 0);

    vet = (aluno *) calloc(n, sizeof(aluno));

    for(i = 0; i < n; i++)
    {
        printf("Insira o sobrenome do aluno: ");
        setbuf(stdin, NULL);
        fgets(vet[i].sobrenome, 50, stdin);

        printf("\nInsira a matricula do aluno: ");
        scanf("%i", &(vet[i].mat));

        printf("\nInsira o ano de nascimento do aluno: ");
        scanf("%i", &(vet[i].ano));
        printf("\n");
    }
    printf("\n\n\n");
    for(i = 0; i < n; i++)
    {
        printf("Aluno %i de %i:\n", i + 1, n);
        printf("Nome: %s\n", ((vet + i) -> sobrenome));

        printf("Matricula %d\n", ((vet + i) -> mat));

        printf("Ano de nascimento: %d\n", ((vet + i) -> ano));
        printf("\n\n");
    }
    return 0;
}

EX 12:
#include <stdio.h>

struct produto
{
    int id;
    char nome[50];
    int est;
    float preco;
};

int main()
{
    int i, n, pre_mai, est_mai;
    struct produto *vet;

    do
    {
        printf("Insira quantos produtos voce deseja registrar (maior que 0): ");
        scanf("%i", &n);
        if(n <= 0)
        {
            printf("numero muito pequeno.\n\n");
        }
    }while(n <= 0);

    vet = (struct produto *) calloc(n, sizeof(struct produto));

    for(i = 0; i < n; i++)
    {
        printf("Produto %i de %i\n", i+ 1, n);

        printf("Insira o id do produto: ");
        scanf("%i", &vet[i].id);

        printf("Insira o nome do produto: ");
        setbuf(stdin, NULL);
        fgets(vet[i].nome, 50, stdin);

        printf("Insira quantos desses produtos ha no estoque: ");
        scanf("%i", &vet[i].est);

        printf("Insira o preco do produto: ");
        scanf("%f", &vet[i].preco);

        if(i != (n - 1))
        {
            printf("\n\n");
        }
    }

    for(i = 0; i < n; i++)
    {
        if(i == 0)
        {
            est_mai = 0;
            pre_mai = 0;
        }

        if(vet[est_mai].est < vet[i].est)
        {
            est_mai = i;
        }

        if(vet[pre_mai].preco < vet[i].preco)
        {
            pre_mai = i;
        }
    }

    printf("\n\nProduto com maior estoque:\nId: %i\nNome: %s\nEstoque: %i\nPreco: %f\n\n", vet[est_mai].id,vet[est_mai].nome,vet[est_mai].est,vet[est_mai].preco);
    printf("Produto com maior preco:\nId: %i\nNome: %s\nEstoque: %i\nPreco: %f", vet[pre_mai].id,vet[pre_mai].nome,vet[pre_mai].est,vet[pre_mai].preco);
    return 0;
    }

EX 13:
#include <stdio.h>

int existe(int **p, int l, int c, int n);

int main()
{
    int **p, n, m, i ,j, num, verif;

    printf("Insira a quantidade de linhas da matriz: ");
    scanf("%i", &n);

    printf("Insira a quantida de colunas da matriz: ");
    scanf("%i", &m);

    p =(int **) calloc(n, sizeof(int *));

    for(i = 0; i < n; i++)
    {
        p[i] = (int *) calloc(m, sizeof(int));
        for(j = 0; j < m; j++)
        {
            printf("Insira um elemnto da matriz (elemento %i de %i): ", (m * i) + j + 1, n * m);
            scanf("%i", &p[i][j]);
        }
    }

    printf("Insira o numero que voce quer busca na matriz: ");
    scanf("%i", &num);

    verif = existe(p, n, m, num);

    if(verif == 0)
    {
        printf("Esse numero %i nao esta na matriz", num);
    }
    else
    {
        printf("O numero %i esta na matriz", num);
    }
}

int existe(int **p, int l, int c, int n)
{
    int flag = 0, sim = 0, i, j;

    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(p[i][j] == n)
            {
                flag++;
                sim++;
                break;
            }
        }
        if(flag != 0)
        {
            break;
        }
    }

    if(sim != 0)
    {
        return 1;
    }

    return 0;
}

EX 14:
#include <stdio.h>


int main()
{
    float **p;
    int i, j, l, c;

    printf("Insira o numero de linhas da matriz: ");
    scanf("%i", &l);

    printf("Insira o numero de colunas da matriz: ");
    scanf("%i", &c);

    p = (float **) calloc(l, sizeof(float *));

    for(i = 0; i < l; i++)
    {
        p[i] = (float *) calloc(c, sizeof(float ));
        for(j = 0; j < c; j++)
        {
            printf("Insira um elemnto da matriz (elemento %i de %i): ", (c * i) + j + 1, l * c);
            scanf("%f", &p[i][j]);
        }
    }

    printf("A matriz eh:\n");
    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%0.2f ", p[i][j]);
        }
        printf("\n");
    }
}

EX 15:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **p, i, j, m, n, li[3],co[3];

    printf("Insira o numero de linhas: ");
    scanf("%i", &n);

    printf("Insira o numero de colunas: ");
    scanf("%i", &m);

    p = (int **) calloc(n, sizeof(int *));
    for(i = 0; i < n; i ++)
    {
        p[i] = (int *) calloc(m,sizeof(int));
        for(j = 0; j < m; j++)
        {
            printf("Insira um numero para ser armazenado no vetor: ");
            scanf("%i", &p[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j <m; j++)
        {
            if(i == 0 && j ==0)
            {
                li[2] = i;
                co[2] = j;
            }
            else if(i == 0 && j == 1)
            {
                if(p[i][j] < p[li[2]][co[2]])
                {
                    li[1] = i;
                    co[1] = j;
                }
                else
                {
                    li[1] = li[2];
                    co[1] = co[2];

                    li[2] = i;
                    co[2] = j;
                }
            }
            else if(i == 0 && j == 2)
            {
                if(p[i][j] < p[li[1]][co[1]])
                {
                    li[0] = i;
                    co[0] = j;
                }
                else if(p[i][j] > p[li[1]][co[1]] && p[i][j] < p[li[2]][co[2]])
                {
                    li[0] = li[1];
                    co[0] = co[1];

                    li[1]= i;
                    co[1] = j;
                }
                else if(p[i][j] > p[li[2]][co[2]])
                {
                    li[0] = li[1];
                    co[0] = li[1];

                    li[1] = li[2];
                    co[1] = co[2];

                    li[2] = i;
                    co[2] = j;
                }
            }
            else
            {
                if(p[i][j] > p[li[0]][co[0]] && p[i][j] < p[li[1]][co[1]])
                {
                    li[0] = i;
                    co[0] = j;
                }
                else if(p[i][j] > p[li[1]][co[1]] && p[i][j] < p[li[2]][co[2]])
                {
                    li[0] = li[1];
                    co[0] = co[1];

                    li[1]= i;
                    co[1] = j;
                }
                else if(p[i][j] > p[li[2]][co[2]])
                {
                    li[0] = li[1];
                    co[0] = li[1];

                    li[1] = li[2];
                    co[1] = co[2];

                    li[2] = i;
                    co[2] = j;
                }
            }
        }
    }

    printf("\nPrimeiro Maior: %i linha: %i coluna: %i",p[li[2]][co[2]], li[2], co[2]);
    printf("\nSegundo Maior: %i linha: %i coluna: %i",p[li[1]][co[1]], li[1], co[1]);
    printf("\nTerceiroMaior: %i linha: %i coluna: %i",p[li[0]][co[0]], li[0], co[0]);
}

EX 16:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j, **v1, **v2;

    printf("Insira a quantidade de linhas da matriz: ");
    scanf("%i", &n);

    printf("Insira a quatidade de colunas da matriz: ");
    scanf("%i", &m);

    if(n != m)
    {
        printf("A matriz nao possui transposta");
        exit(1);
    }

    v1 = (int **) calloc(n, sizeof(int *));

    if((v1 == NULL) || (v2 == NULL))
    {
        printf("Impossivel alocar a memoria");
        exit(1);
    }

    for(i = 0; i < n; i++)
    {
        v1[i] = (int *) calloc(m, sizeof(int));

        if((v1[i] == NULL) || (v2[i] == NULL))
        {
            printf("Impossivel alocar memoria");
            exit(1);
        }
        for(j = 0; j <m; j++)
        {
            printf("Insira um numero para ser armazenado na matriz (numero %i de %i): ", m * i + j + 1, m * n);
            scanf("%i", &v1[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        v2[i] = (int *) calloc(m, sizeof(int));
        for(j = 0; j < m; j++)
        {
            v2[i][j] = v1[j][i];
        }
    }

    printf("Matriz: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("%i ", v1[i][j]);
        }
        printf("\n");
    }
    printf("Transposta: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("%i ", v2[i][j]);
        }
        printf("\n");
    }

}

EX 17:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, volta = 0, cont = 0, verif = 0, pos = 0;
    int *vet, *aux, *temp;

    vet = (int *) calloc(10, sizeof(int));
    aux = (int *) calloc(10, sizeof(int));


    do
    {
        printf("Insira um numero para ser armazenado na string (numero %i): ", cont + 1);
        scanf("%i", &vet[pos]);
        if(vet[pos] == 0)
        {
            j = 0;
            if(volta == 0)
            {

                for(i = (10 * volta); i < (cont - (10 * volta)); i++)
                {
                    aux[i] = vet[j];
                    j++;
                }
            }
            else
            {
                for(i = (10 * volta); i < cont; i++)
                {
                    aux[i] = vet[j];
                    j++;
                }
            }
            verif++;
        }
        else
        {
            cont++;
            pos++;
            if(pos == 10)
            {
                pos = 0;
                j = 0;
                volta++;
                if(volta == 1)
                {
                    aux = (int *) calloc((10 * (volta + 1)), sizeof(int));
                    for(i = 0; i < 10; i++)
                    {
                        aux[i] = vet[i];
                    }
                }
                else
                {
                    temp = (int *) calloc((10 * (volta - 1)), sizeof(int));
                    for(i = 0; i < (10 * (volta - 1)); i++)
                    {
                        temp[i] = aux[i];
                    }
                    free(aux);

                    aux = (int *) calloc((10 * (volta + 1)), sizeof(int));

                    for(i = 0; i < (10 * (volta - 1)); i++)
                    {
                        aux[i] = temp[i];
                    }
                    for(i = (10 * (volta - 1)); i < (10 * volta); i++)
                    {
                        aux[i] = vet[j];
                        j++;
                    }
                    free(temp);
                    for(i = 0; i < 10; i++)
                    {
                        vet[i] = 0;
                    }
                }
            }
        }
    }
    while(verif == 0);

    for(i = 0; i < cont; i++)
    {
        printf("%i ", aux[i]);
    }
}

EX 18:
#include <stdio.h>
#include <stdlib.h>

struct mercado
{
    char nome[30];
    int cod;
    float preco;
};

typedef struct mercado mer;

int main()
{
    double mil, *v_mil;
    int i, j, **mat;
    mer *vet_s;
    char **texto;

    //alocacao matriz de 1024 bytes
    v_mil = (double *) calloc(128, sizeof(double));
    if(v_mil == NULL)
    {
        printf("Sem memoria");
        exit(1);
    }

    //alocacao matriz 10x10
    if((mat = (int **) calloc(10, sizeof(int *))) == NULL)
    {
        printf("Sem memoria");
        exit(1);
    }

    for(i = 0; i < 10; i++)
    {
        if((mat[i] = (int *) calloc(10, sizeof(int))) == NULL)
        {
            printf("Sem memoria");
            exit(1);
        }
    }

    //alocacao de struct
    if((vet_s = (mer *) calloc(50, sizeof(mer))) == NULL)
    {
        printf("Sem memoria");
        exit(1);
    }
    //alocacao texto
    if((texto = (char **) calloc(100, sizeof(char *))) == NULL)
    {
        printf("Sem memoria");
        exit(1);
    }

    for(i = 0; i < 100; i++)
    {
        if((texto[i] = (char *) calloc(80, sizeof(char))) == NULL)
        {
            printf("Sem memoria");
            exit(1);
        }
    }
    return 0;
}

EX 19:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, verif = 0, esc, flag = 1;
    int li;
    char **v, str[30];

    printf("Insira quantos nomes voce deseja armazenar: ");
    scanf("%i", &n);

    if((v = (char**) calloc(n, sizeof(char *))) == NULL)
    {
        printf("Sem memoria");
        exit(1);
    }
    for(i = 0; i < n; i++)
    {
        if((v[i] = (char *) calloc(30, sizeof(char))) == NULL)
        {
            printf("Sem memoria");
            return 1;
        }
    }

    do
    {
        printf("\nEscolha uma opcao: \n(1)-Gravar nome em uma linha\n(2)-Apagar nome em uma linha\n(3)-Procurar um nome e substituir ele\n(4)-Encontrar o nome e apagar\n(5)-Encontrar um nome pela linha\n(6)-Sair\n");
        scanf("%i", &esc);

        switch(esc)
        {
        case 1:
            printf("Deseja escrever em qual linha?\n");
            scanf("%i", &li);

            printf("Escreva o nome: ");
            setbuf(stdin, NULL);
            fgets(v[li], 30, stdin);
            break;
        case 2:
            printf("Deseja apagar qual linha?\n");
            scanf("%i", &li);

            for(i = 0; i < 30; i++)
            {
                v[li][i] = ' ';
            }
            break;
        case 3:
            flag = 1;
            printf("Qual nome voce deseja buscar?\n");
            setbuf(stdin, NULL);
            fgets(str, 30, stdin);

            for(i = 0; i < n; i++)
            {
                flag = strcmp(v[i], str);
                if(flag == 0)
                {
                    li = i;
                    break;
                }
            }
            if(flag == 0)
            {
                printf("Deseja substituir por qual nome?\n");
                setbuf(stdin,NULL);
                fgets(str, 30, stdin);

                strcpy(v[li], str);
            }
            else
            {
                printf("Nome nao encontrado");
            }
            break;
        case 4:
            flag = 0;
            printf("Qual nome deseja encontrar?\n");
            setbuf(stdin,NULL);
            fgets(str, 30, stdin);

            for(i = 0; i < n; i++)
            {
                flag = strcmp(str, v[i]);

                if(flag == 0)
                {
                    li = i;
                    break;
                }
            }
            if(flag == 0)
            {
                for(i = 0; i < 30; i++)
                {
                    v[li][i] = ' ';
                }
                printf("Apagado.\n");
            }
            else
            {
                printf("Nome nao encontrado\n");
            }
            break;
        case 5:
            printf("Insira qual linha deseja retomar o nome: ");
            scanf("%i", &li);
            printf("Nome: %s \n", v[li]);
            break;
        case 6:
            verif++;
            break;
        }
        if(esc < 1 || esc > 6)
        {
            printf("Escolha invalida\n\n");
        }
    }
    while(verif == 0);
}

EX 20:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct coord
{
    float x, y;
};

typedef struct coord co;

int main()
{
    int n, i, j;
    float **distancia;
    co *cidade;

    printf("Insira quantas cidades voce deseja armazenar: ");
    scanf("%i", &n);

    if((cidade = (co *) calloc(n, sizeof(co)))== NULL)
    {
        printf("Sem memoria");
        exit(1);
    }

    if((distancia = (float **) calloc(n, sizeof(float *))) == NULL)
    {
        printf("Sem memoria");
        exit(1);
    }
    for(i = 0; i < n; i++)
    {
        if((distancia[i] = (float *) calloc(n, sizeof(float))) == NULL)
        {
            printf("Sem memoria");
            exit(1);
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("Insira as coordenadas x e y da cidade (cidade %i de %i): ", i + 1, n);
        scanf("%f", &(cidade[i].x));
        scanf("%f", &(cidade[i].y));
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            distancia[i][j] = sqrt(((cidade[j].x - cidade[i].x) * (cidade[j].x - cidade[i].x)) + ((cidade[j].y - cidade[i].y) * (cidade[j].y - cidade[i].y)));
        }
    }

    do
    {
        printf("Insira duas cidades: \n");
        scanf("%i", &i);
        scanf("%i", &j);
    }while(i < 0 || j < 0 || i > n || j > n);

    printf("%f", distancia[i][j]);
    return 0;
}

EX 21:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, i, j, l, mlt;
    int **mat1, **mat2, **mat3;

    printf("Insira a quantidade de linhas da primeira matriz: ");
    scanf("%i", &a);
    printf("\nInsira a quantidade de colunas da primeira matriz: ");
    scanf("%i", &b);
    printf("\nInsira a quantidade de linhas da primeira matriz: ");
    scanf("%i", &c);
    printf("\nInsira a quantidade de colunas da primeira matriz: ");
    scanf("%i", &d);

    if(b != c)
    {
        printf("\nNao eh possivel realizar a multiplicacao");
    }
    else
    {
        if((mat1 = (int **) calloc(a, sizeof(int *))) == NULL)
        {
            printf("Sem memoria");
            exit(1);
        }
        for(i = 0; i < a; i++)
        {
            if((mat1[i] = (int *) calloc(b, sizeof(int))) == NULL)
            {
                printf("Sem memoria");
                exit(1);
            }
            for(j = 0; j < b; j++)
            {
                printf("Insira um elemento na matriz (elemento %i de %i): ", b * i + j + 1, a * b);
                scanf("%i", &mat1[i][j]);
            }
        }


        if((mat2 = (int **) calloc(c, sizeof(int *))) == NULL)
        {
            printf("Sem memoria");
            exit(1);
        }
        for(i = 0; i < c; i++)
        {
            if((mat2[i] = (int *) calloc(d, sizeof(int))) == NULL)
            {
                printf("Sem memoria");
                exit(1);
            }
            for(j = 0; j < d; j++)
            {
                printf("Insira um elemento na matriz (elemento %i de %i): ", d * i + j + 1, c * d);
                scanf("%i", &mat2[i][j]);
            }
        }

        if((mat3 = (int **) calloc(b, sizeof(int *))) == NULL)
        {
            printf("Sem memoria");
            exit(1);
        }
        for(i = 0; i < b; i++)
        {
            if((mat3[i] = (int *) calloc(c, sizeof(int))) == NULL)
            {
                printf("Sem memoria");
                exit(1);
            }
        }

        for(i = 0; i < b; i++)
        {
            for(j = 0; j < c; j++)
            {
                mlt = 0;
                for(l = 0; l < c; l++)
                {
                    mlt = mat1[i][c] * mat2[c][j];
                }
                mat3[i][j] = mat3[i][j] + mlt;
            }
        }
        printf("\nMat1:\n");
        for(i = 0; i < a; i++)
        {
            for(j = 0; j < b; j++)
            {
                printf("%i ", mat1[i][j]);
            }
            printf("\n");
        }
        printf("\nMat2:\n");
        for(i = 0; i < c; i++)
        {
            for(j = 0; j < d; j++)
            {
                printf("%i ", mat2[i][j]);
            }
            printf("\n");
        }
        printf("\nMat3:\n");

        for(i = 0; i < b; i++)
        {
            for(j = 0; j < c; j++)
            {
                printf("%i ", mat1[i][j]);
            }
            printf("\n");
        }
    }

}


