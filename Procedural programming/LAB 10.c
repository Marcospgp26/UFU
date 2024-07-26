EX 1:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, verif;
    char c;
    FILE *fp;

    fp = fopen("arq.txt", "w");
    if(fp == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
    do
    {
        printf("Insira um char para ser armazenado no file (se for 0, ele parara): ");
        scanf(" %c", &c);
        if(c == '0')
        {
            verif++;
        }
        else
        {
            fputc(c, fp);
        }
    }while(verif == 0);

    fclose(fp);
    return 0;
}

EX 2:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cont = 1, i, verif = 0, tam;
    char c, nome[100];
    FILE *fp;

    printf("Insira o nome de um arquivo txt: ");
    scanf("%s", nome);


    fp = fopen(nome, "r");

    if(fp == NULL)
    {
        printf("Erro");
        exit(1);
    }

    while((c = fgetc(fp)) != EOF)
    {
        if(c == '\n')
        {
            cont++;
        }
    }
    printf("Ha %i linhas", cont);
    
    fclose(fp);

    return 0;
}

EX 3:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    int cont = 0, tam;
    char c, nome[100];

    printf("Insira o nome do arquivo txt (maximo 100 caracteres): ");
    setbuf(stdin, NULL);
    fgets(nome, 100, stdin);
    tam = strlen(nome);
    nome[tam - 1] = nome[tam];

    fp = fopen(nome, "r");
    if(fp == NULL)
    {
        printf("ERRO");
        exit(1);
    }

    while((c = fgetc(fp)) != EOF)
    {
        if((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u') || (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U'))
        {
            cont++;
        }
    }
    fclose(fp);
    printf("Ha %i vogais", cont);
    return 0;
}

EX 4:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    int vog = 0, con = 0, tam;
    char c, nome[100];

    printf("Insira o nome do arquivo txt (maximo 100 caracteres): ");
    setbuf(stdin, NULL);
    fgets(nome, 100, stdin);
    tam = strlen(nome);
    nome[tam - 1] = nome[tam];

    fp = fopen(nome, "r");
    if(fp == NULL)
    {
        printf("ERRO");
        exit(1);
    }

    while((c = fgetc(fp)) != EOF)
    {
        if((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u') || (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U'))
        {
            vog++;
        }
        else
        if(((c > 64) && (c < 91)) || ((c > 96) && (c < 123)))
        {
            con++;
        }
    }
    fclose(fp);
    printf("Ha %i vogais e %i consoantes", vog, con);
    return 0;
}

EX 5:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    int i, j, tam, cont = 0;
    char nome[100], c, busc;

    printf("Insira o nome do arquivo . txt (maximo 100 caracteres): ");
    setbuf(stdin, NULL);
    fgets(nome, 100, stdin);
    tam = strlen(nome);
    nome[tam - 1] = nome[tam];

    fp = fopen(nome, "r");
    if(fp == NULL)
    {
        printf("Erro");
        exit(1);
    }

    printf("Insira o caratere que deseja procurar: ");
    scanf(" %c", &busc);

    while((c = getc(fp)) != EOF)
    {
        if(c == busc)
        {
            cont++;
        }
    }

    printf("O caractere %c apareceu %i vezes.", busc, cont);
    fclose(fp);

    return 0;
}

EX 6:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    int i, j, quant[26], tam;
    char nome[100],c;

    printf("Insira o nome do arquivo (maximo 100 caracteres): ");
    setbuf(stdin, NULL);
    fgets(nome, 100, stdin);
    tam = strlen(nome);
    nome[tam -1] = nome[tam];

    for(i = 0; i < 26; i++)
    {
        quant[i] = 0;
    }

    fp = fopen(nome, "r");
    if(fp == NULL)
    {
        printf("Erro");
        exit(1);
    }

    while((c = fgetc(fp)) != EOF)
    {
        for(i = 0; i < 26; i++)
        {
            if((c == (i + 65)) || (c == (i + 97)))
            {
                quant[i]++;
            }
        }
    }

    for(i = 0; i < 26; i++)
    {
        printf("%i - Quantidade de %c : %i\n", i + 1, (char)(i + 65), quant[i]);
    }

    fclose(fp);

    return 0;
}

EX 7:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp, *ast;
    int i, pos = 0, tam;
    char nome[100], c;

    printf("Insira o arquivo que voce deseja modificar as vogais por *: ");
    setbuf(stdin,NULL);
    fgets(nome, 100, stdin);
    tam = strlen(nome);
    nome[tam -1] = nome[tam];

    fp = fopen(nome, "r+");
    if(fp == NULL)
    {
        printf("ERRO");
        exit(1);
    }

    ast = fopen("ASTERISCO.txt", "w+");
    if(ast == NULL)
    {
        printf("ERRO");
        exit(1);
    }

    while((c = fgetc(fp)) != EOF)
    {
        if((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u') || (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U'))
        {
            fputc('*', ast);
        }
        else
        {
            fputc(c, ast);
        }
    }

    printf("Feito");
    return 0;
}

EX 8:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *MAIOR, *fp;
    int tam;
    char c, nome[100],nome2[100];

    printf("Insira o nome do arquivo originial: ");
    setbuf(stdin,NULL);
    fgets(nome, 100, stdin);
    tam = strlen(nome);
    nome[tam - 1] = nome[tam];

    fp = fopen(nome, "r");
    if(fp == NULL)
    {
        printf("Erro");
        exit(1);
    }

    printf("Insira o nome do arquivo secundario: ");
    setbuf(stdin,NULL);
    fgets(nome2, 100, stdin);
    tam = strlen(nome2);
    nome2[tam - 1] = nome2[tam];

    MAIOR = fopen(nome2, "w");
    if(fp == NULL)
    {
        printf("Erro");
        exit(1);
    }
    while((c = fgetc(fp)) != EOF)
    {
        if((c > 96) && (c < 123))
        {
            c = toupper(c);
        }
        fputc(c, MAIOR);
    }
    printf("FEITO");
    return 0;
}

EX 9:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file1, *file2, *file3;
    char c, nome[100], base[5];
    int tam;

    strcpy(base,".txt");

    printf("Insira o nome do primeiro arquivo: ");
    setbuf(stdin,NULL);
    fgets(nome, 100, stdin);
    tam = strlen(nome);
    nome[tam - 1] = nome[tam];
    strcat(nome, base);

    file1 = fopen(nome, "r");
    if(file1 == NULL)
    {
        printf("ERRO");
        exit(1);
    }

    printf("Insira o nome do primeiro arquivo: ");
    setbuf(stdin,NULL);
    fgets(nome, 100, stdin);
    tam = strlen(nome);
    nome[tam - 1] = nome[tam];
    strcat(nome, base);

    file2 = fopen(nome, "r");
    if(file2 == NULL)
    {
        printf("ERRO");
        exit(1);
    }

    printf("Insira o nome do terceiro arquivo: ");
    setbuf(stdin,NULL);
    fgets(nome, 100, stdin);
    tam = strlen(nome);
    nome[tam - 1] = nome[tam];
    strcat(nome, base);

    file3 = fopen(nome, "w");
    if(file3 == NULL)
    {
        printf("ERRO");
        exit(1);
    }

    while((c = fgetc(file1)) != EOF)
    {
        fputc(c, file3);
    }
    fputc('\n', file3);
    while((c = fgetc(file2)) != EOF)
    {
        fputc(c, file3);
    }

    printf("FEITO");
}


EX 10:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file1, *file2;
    int i, tam, esc, hab, verif = 0,n_maior, n_temp;
    char nome[100], cidade[40], txt[4]= ".txt", c, c_maior[40], c_temp[40];

    printf("Insira o nome do primeiro file: ");
    setbuf(stdin,NULL);
    fgets(nome, 100, stdin);
    tam = strlen(nome);
    nome[tam -1] = nome[tam];

    file1= fopen(nome,"r");
    if(file1 == NULL)
    {
        file1 = fopen(nome, "w+");
        if(file1 == NULL)
        {
            printf("FUDEU");
            exit(1);
        }
        do
        {
            printf("\nFaca uma escolha:\n(1)-Adicionar uma cidade\n(2)-SAIR\n");
            scanf("%i", &esc);

            if(esc == 1)
            {
                printf("Insira o nome da cidade: ");
                setbuf(stdin,NULL);
                fgets(cidade, 40, stdin);
                tam = strlen(cidade);
                cidade[tam -1] = cidade[tam];

                fputs(cidade, file1);
                putc(' ',file1);

                printf("Insira a quantidade de habitantes: ");
                scanf("%i", &hab);
                fprintf(file1,"%d\n",hab);
            }
        }while(esc != 2);
    }
    fclose(file1);
    file1 = fopen(nome, "r");

    printf("Insira o nome do segundo arquivo: ");
    setbuf(stdin,NULL);
    fgets(nome, 100, stdin);
    tam= strlen(nome);
    nome[tam - 1] = nome[tam];

    file2 = fopen(nome, "w");

    while((c = fgetc(file1)) != EOF)
    {
        fscanf(file1, "%s %d",c_temp,&n_temp);

        if(verif == 0)
        {
            n_maior = n_temp;
            strcpy(c_maior, c_temp);
        }
        else if(n_temp > n_maior)
        {
           n_maior = n_temp;
           strcpy(c_maior, c_temp);
        }
    }
    fclose(file1);
    fprintf(file2, "%s %d\n",c_maior,n_maior);
    fclose(file2);
    printf("FEITO");
}

EX 11:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file1;
    int tam, num = 0, cont = 0;
    char c, esc[100], nome[100], base[5];

    strcpy(base,".txt");
    printf("Insira o nome do primeiro arquivo: ");
    setbuf(stdin,NULL);
    fgets(nome, 100, stdin);
    tam = strlen(nome);
    nome[tam - 1] = '\0';
    strcat(nome, base);

    file1 = fopen(nome, "r");
    if(file1 == NULL)
    {
        printf("ERRO");
        exit(1);
    }

    printf("Insira a palavra que voce deseja procurar: ");
    fgets(esc,100,stdin);
    tam = strlen(esc);
    esc[tam - 1] = '\0';
    tam = strlen(esc);

    while((c = fgetc(file1)) != EOF)
    {
        if(c == esc[num])
        {
            num++;
        }
        else
        {
            num = 0;
        }
        if(num == (tam - 1) && ((c_ant == ' ') || (c_ant == '\n')) )
        {
            cont++;
        }

        c_ant = c;
    }

    printf("O nome %s aparece %i vezes.",esc,cont);
    fclose(file1);
    return 0;
}

EX 12:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file;
    int tam, carac = 0, pal = 0, linh = 1;
    char c, nome[100], palavra[100];

    printf("Insira o nome do arquivo: ");
    setbuf(stdin,NULL);
    fgets(nome, 100, stdin);
    tam = strlen(nome);
    nome[tam - 1] ='\0';

    file = fopen(nome,"r");

    while((c = fgetc(file)) != EOF)
    {
        if((c != '\t') && (c != '\n') && (c != ' '))
        {
            fseek(file,(-1) * sizeof(char),SEEK_CUR);
            fscanf(file,"%s",palavra);
            tam = strlen(palavra);
            carac += (tam);
            pal++;
        }
        else if(c == '\n')
        {
            linh++;
            carac++;
        }
        else
        {
            carac++;
        }
    }

    printf("Ha %i caracteres \n%i linhas\n%i palavras",carac,linh,pal);
    return 0;
}

EX 13:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file;
    char nome[100];
    int numero, tam, i = 0;

    file = fopen("NUMEROS.txt", "w");
    do
    {
        file = fopen("NUMEROS.txt", "a+");
        printf("Numero %i:\n\n ", i);
        printf("Insira um nome: ");
        setbuf(stdin,NULL);
        fgets(nome, 100, stdin);
        tam = strlen(nome);
        nome[tam - 1] ='\0';

        printf("Insira um numero (se ele for 0 o programa parara): ");
        scanf("%i", &numero);
        if(numero != 0)
        {
            fprintf(file,"%i - %s %i\n",i, nome,numero);
            fclose(file);
        }
        i++;
    }while(numero != 0);
    printf("programa termidado");
    fclose(file);
    
    return 0;
}

EX 14:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ver(int *dia, int *mes, int *ano);

int main()
{
    FILE *file, *sa;
    char c, nome[100], pes[100];
    int tam, dia_arq, mes_arq, ano_arq, verif = 0, data = 0;
    int dia_a, mes_a, ano_a, idade;

    printf("Insira o nome do arquivo: ");
    setbuf(stdin,NULL);
    fgets(nome, 100,stdin);
    tam = strlen(nome);
    nome[tam - 1] = '\0';

    file = fopen(nome, "r");
    if(file == NULL)
    {
        printf("ERRO");
        exit(1);
    }

    do
    {
        printf("Insira o dia, mes e ano atual");
        scanf("%i %i %i", &dia_a, &mes_a, &ano_a);
        data = ver(&dia_a, &mes_a, &ano_a);
    }
    while(data == 0);

    sa = fopen("SAIDA.txt","w");
    if(sa == NULL)
    {
        printf("ERRO");
        exit(1);
    }

    while((c = fgetc(file)) != EOF)
    {
        sa = fopen("SAIDA.txt","a+");
        fseek(file,(-1) * sizeof(char),SEEK_CUR);
        fscanf(file,"%s %i %i %i\n", nome, &dia_arq, &mes_arq, &ano_arq);

        if((mes_arq > mes_a) || ((mes_arq == mes_a) && (dia_a < dia_arq)))
        {
            idade = ano_a - ano_arq - 1;
        }
        else
        {
            idade = ano_a - ano_arq;
        }

        fprintf(sa,"%s %i\n", nome, idade);
        fclose(sa);
    }

    printf("FEITO");
    fclose(file);
    return 0;
}

int ver(int *dia, int *mes, int *ano)
{
    if(((*dia) < 1) || ((*dia) > 31))
    {
        return 0;
    }

    if(((*mes) < 1) || ((*mes) > 12))
    {
        return 0;
    }

    if(((*mes) == 4) || ((*mes) == 6) || ( (*mes) == 9) || ((*mes) == 11))
    {
        if((*dia) > 30)
        {
            return 0;
        }
    }

    if((*mes) == 2)
    {
        if((((*ano) % 400) == 0) || ((((*ano) % 4) == 0) && (((*ano) % 100) != 0)))
        {
            if((*dia) > 29)
            {
                return 0;
            }
        }
        else
        {
            if((*dia) > 28)
            {
                return 0;
            }
        }
    }
    return 1;
}

EX 15:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *ent, *sa;
    char c, nome[100], pes[40], frase[40];
    int tam,ano, idade, esc = 0, verif = 0, linh = 0, c_linh = 0;

    printf("Insira o nome do arquivo de entrada: ");
    setbuf(stdin,NULL);
    fgets(nome, 100, stdin);
    tam = strlen(nome);
    nome[tam -1] = '\0';
    strcat(nome, ".txt");

    ent = fopen(nome, "r");
    if(ent == NULL)
    {
        ent = fopen(nome, "w+");
        do
        {
            printf("Escolha uma opcao:\n(1)-INSERIR INFORMACOES\n(2)-SAIR\n");
            scanf("%i", &esc);
            if(esc == 1)
            {
                printf("Insira um nome: ");
                setbuf(stdin,NULL);
                fgets(pes, 40, stdin);
                tam = strlen(pes);
                pes[tam - 1] = '\0';

                printf("Insira o ano de nascimento: ");
                scanf(" %i", &ano);
                if(verif == 0)
                {
                    fprintf(ent,"%s %d",pes,ano);
                    verif++;
                }
                else
                {
                    fprintf(ent,"\n%s %d",pes,ano);
                }
            }

        }
        while(esc != 2);
    }

    printf("Insira o nome do arquivo de saida: ");
    setbuf(stdin,NULL);
    fgets(nome, 100, stdin);
    tam = strlen(nome);
    nome[tam - 1] = '\0';
    strcat(nome,".txt");

    sa = fopen(nome, "w");
    if(sa == NULL)
    {
        printf("ERRO");
        exit(1);
    }
    verif = 0;

    while(1)
    {
        sa = fopen(nome, "a+");
        fscanf(ent,"%s %i",pes,&ano);
        if((2023 - ano) > 18)
        {
            strcpy(frase, "MAIOR DE IDADE");
        }
        else if((2023 - ano) == 18)
        {
            strcpy(frase,"ENTRANDO NA MAIOR IDADE");
        }
        else
        {
            strcpy(frase, "MENOR DE IDADE");
        }

        if(feof(ent))
        {
            break;
        }
        fprintf(sa,"%s %s\n",pes,frase);
        fclose(sa);
    }
    printf("FEITO");
    fclose(ent);
    fclose(sa);
    return 0;
}

EX 16:
#include <stdio.h>
#include <stdlib.h>

void zera(int *vet, int id)
{
    int i;
    for(i = 0; i < id; i++)
    {
        vet[i] = 0;
    }
}

void binario(int n, int *vet, int id){
    if(n == 0){
        vet[id] = n;
    }
    else{
        binario(n/2, vet, id - 1);
        vet[id] = n % 2;
    }
}

int main()
{
    FILE *file;
    int tam, i, j, bin[30], vet[10];

    file = fopen("BINARIO.txt", "w");
    if(file == NULL)
    {
        printf("ERRO");
        exit(1);
    }

    zera(bin, 30);

    for(i = 0; i < 10; i++)
    {
        printf("Insira um numero para ser armazenado no vetor: ");
        scanf(" %i", (vet + i));
    }
    for(i = 0; i < 10; i++)
    {
        binario(vet[i],bin,29);
        for(j = 0; j < 30; j++)
        {
            fprintf(file, "%i", bin[j]);
        }
        fprintf(file,"\n");
        zera(bin, 30);
    }
    printf("FEITO");
    return 0;
}

EX 17:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *ent, *sai;
    int **mat, tam, i, j = 0, n, m, zeros, **pos_zero, pos1, pos2;
    char nome[100],c;

    printf("Insira o nome do arquivo com as informacoes sobre a matriz: ");
    setbuf(stdin,NULL);
    fgets(nome, 100, stdin);
    tam = strlen(nome);
    nome[tam - 1] = '\0';

    ent = fopen(nome, "r");
    if(ent == NULL)
    {
        printf("ERRO");
        exit(1);
    }

    printf("Insira o nome do arquivo de saida: ");
    setbuf(stdin,NULL);
    fgets(nome, 100, stdin);
    tam = strlen(nome);
    nome[tam - 1] = '\0';

    sai = fopen(nome, "w");
    if(sai == NULL)
    {
        printf("ERRO");
        exit(1);
    }

    fscanf(ent,"%d %d %d",&n, &m, &zeros);
    printf("a");

    mat = (int **) calloc(n, sizeof(int *));
    for(i = 0; i < n; i++)
    {
        mat[i] = (int *) calloc(m, sizeof(int));
    }

    pos_zero = (int **) calloc(zeros, sizeof(int *));
    for(i = 0; i < n; i++)
    {
        pos_zero[i] = (int *) calloc(2, sizeof(int));
    }

    while((c = fgetc(ent)) != EOF)
    {
        fscanf(ent,"%d %d", &pos1, &pos2);
        pos_zero[j][1] = pos1;
        pos_zero[j][2] = pos2;
        j++;
    }

    printf("Insira os elementos da matriz:\n\n ");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("Elemento(%i de %i): ", (m * i) + j + 1, m * n);
            scanf("%i", &mat[i][j]);
        }
    }

    for(i = 0; i < zeros; i++)
    {
        mat[pos_zero[i][1]][pos_zero[i][2]] = 0;
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            fprintf(sai, "%i ",mat[i][j]);
        }
        fprintf(sai, "\n");
    }

    printf("FEITO");
    fclose(sai);
    fclose(ent);
    return 0;
}

EX 18:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file;
    int verif, tam;
    char c, nome[100], prod[100];
    float total =0, pre;

    printf("Insira o nome do arquivo: ");
    setbuf(stdin,NULL);
    fgets(nome, 100, stdin);
    tam = strlen(nome);
    nome[tam - 1] = '\0';
    strcat(nome, ".txt");

    file = fopen(nome, "r");
    if(file == NULL)
    {
        printf("ERRO");
        exit(1);
    }

    while((c = fgetc(file))!= EOF)
    {
        if(verif == 0)
        {
            rewind(file);
            verif++;
        }
        fscanf(file, "%s %f",prod,&pre);
        total += pre;
    }

    printf("O total da compra eh: %f", total);
    fclose(file);


    return 0;
}

EX 19:

EX 20:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char **aluno;
    int *nota, tam, n, i, j;

    fp = fopen("NOTAS.txt", "w");
    if(fp == NULL)
    {
        printf("ERRO");
        exit(1);
    }

    printf("Insira a quantidade de alunos da sala: ");
    scanf("%i", &n);

    aluno = (char **) calloc(n, sizeof(char *));
    if(aluno == NULL)
    {
        printf("SEM MEMORIA");
        exit(1);
    }
    for(i = 0; i < n;i++)
    {
        aluno[i] = (char *) calloc(40, sizeof(char));
        if(aluno[i] == NULL)
        {
            printf("SEM MEMORIA");
            exit(1);
        }
    }

    nota = (int *) calloc(n, sizeof(int));

    for(i = 0; i < n; i++)
    {
        printf("Insira o nome do aluno: ");
        setbuf(stdin,NULL);
        fgets(aluno[i], 40, stdin);
        tam = strlen(aluno[i]);
        aluno[i][40] = '\0';
        for(j = tam - 1; j < 40;j++)
        {
            aluno[i][j] = ' ';
        }

        printf("Insira a nota desse aluno: ");
        scanf("%i", &nota[i]);
    }

    for(i = 0; i < n; i++)
    {
        fprintf(fp,"%s %d\n",aluno[i],nota[i]);
    }

}

EX 21:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[40];
    float nota;
} Aluno;

Aluno *cadastrar_aluno(int quantidade) {
    Aluno *alunos = (Aluno *) malloc(quantidade * sizeof(Aluno));

    for (int i = 0; i < quantidade; i++) {
        printf("Aluno %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]s", alunos[i].nome);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }

    return alunos;
}

void gravar_dados(Aluno *alunos, int quantidade) {
    FILE *arquivo = fopen("alunos.bin", "wb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fwrite(&quantidade, sizeof(int), 1, arquivo);

    for (int i = 0; i < quantidade; i++) {
        fwrite(alunos[i].nome, sizeof(char), MAX_NOME, arquivo);
        fwrite(&alunos[i].nota, sizeof(float), 1, arquivo);
    }

    fclose(arquivo);
}

void ler_dados() {
    FILE *arquivo = fopen("alunos.bin", "rb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int quantidade;
    fread(&quantidade, sizeof(int), 1, arquivo);

    Aluno aluno_maior_nota;
    float maior_nota = 0.0;

    for (int i = 0; i < quantidade; i++) {
        Aluno aluno;
        fread(aluno.nome, sizeof(char), MAX_NOME, arquivo);
        fread(&aluno.nota, sizeof(float), 1, arquivo);

        if (aluno.nota > maior_nota) {
            aluno_maior_nota = aluno;
            maior_nota = aluno.nota;
        }
    }

    fclose(arquivo);

    printf("Aluno com maior nota: %s\n", aluno_maior_nota.nome);
}

int main() {
    int quantidade;

    printf("Digite o numero de alunos: ");
    scanf("%d", &quantidade);

    Aluno *alunos = cadastrar_aluno(quantidade);

    gravar_dados(alunos, quantidade);

    ler_dados();

    free(alunos);

    return 0;
}

EX 22:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp, *sa;
    char c, nome[40];
    int n1, n2, n3, verif = 0;

    printf("Insira o nome do arquivo: ");
    setbuf(stdin,NULL);
    fgets(nome, 40, stdin);
    n1 = strlen(nome);
    nome[n1 - 1] = '\0';

    fp = fopen(nome, "r");

    sa = fopen("saida.txt", "w");

    while(( c = fgetc(fp)) != EOF)
    {
        if(verif == 0)
        {
            fseek(fp, (-1) * sizeof(char), SEEK_CUR);
            verif++;
        }
        fscanf("%s %d %d %d", nome, &n1, &n2, &n3);

        if(n1 > n2 && n3 < n1)
        {
            if(n2 > n3)
            {
                printf(sa, "%s %d %d %d", nome, n1, n2 ,n3);
            }
            else
            {
                printf(sa, "%s %d %d %d", nome, n1, n3 ,n2);
            }
        }
        else if(n2 > n1 && n3 < n2)
        {
            if(n1 > n3)
            {
                fprintf(sa,"%s %d %d %d", nome, n2, n1 ,n3);
            }
            else
            {
                fprintf(sa,"%s %d %d %d", nome, n2, n3 ,n1);
            }
        }
        else if((n3 > n2) && (n3 > n1))
        {
            if(n1 > n2)
            {
                fprintf(sa,"%s %d %d %d", nome, n3, n1 ,n2);
            }
            else
            {
                fprintf(sa,"%s %d %d %d", nome, n3, n2 ,n1);
            }
        }

    }

}

EX 23:
#include <stdio.h>

typedef struct {
    char profissao[50];
    int tempo_servico;
} Funcionario;

int main() {
    FILE *arquivo;
    Funcionario funcionarios[5];

    for (int i = 0; i < 5; i++) {
        printf("Funcionário %d\n", i + 1);

        printf("Profissão: ");
        scanf(" %[^\n]s", funcionarios[i].profissao);

        printf("Tempo de serviço (em anos): ");
        scanf("%d", &funcionarios[i].tempo_servico);
    }

    arquivo = fopen("emp.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        fprintf(arquivo, "%s %d\n", funcionarios[i].profissao, funcionarios[i].tempo_servico);
    }

    fclose(arquivo);

    arquivo = fopen("emp.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        fscanf(arquivo, "%s %d", funcionarios[i].profissao, &funcionarios[i].tempo_servico);
        printf("Funcionário %d\n", i + 1);
        printf("Profissão: %s\n", funcionarios[i].profissao);
        printf("Tempo de serviço: %d anos\n\n", funcionarios[i].tempo_servico);
    }

    return 0;
}

EX 24:


