1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_inteiro;
    printf("por favor, insira um numero inteiro. Lembre de apertar enter apos colocar ele!!!\n");
    scanf("%d", &numero_inteiro);
    printf("o inteiro eh: %d\n", numero_inteiro);

    return 0;
}


2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero_real;
    printf("por favor, insira um numero real. Lembre de apertar enter apos colocar ele!!!\n");
    scanf("%f", &numero_real);
    printf("o numero inserido eh: %f", numero_real);

    return 0;
}


3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_1, numero_2, numero_3, Soma;
    printf("por favor, insira 3 numeros inteiros. Lembre de apertar enter apos cada um deles!!!\n");

    scanf("%i\n %i\n %i", &numero_1, &numero_2, &numero_3);
    Soma = numero_1 + numero_2 + numero_3;

    printf("a soma eh: %i\n", Soma);

    return 0;

}

4
#include <stdio.h>
#include <stdint.h>

int main()
{
    float numero_real, quadrado_do_numero;
    printf("por favor, coloque um numero real. lembre de apertar enter apos inserir o numero!!!\n");
    scanf("%f", &numero_real);

    quadrado_do_numero = numero_real * numero_real;

    printf("O quadrado do numero eh: %f\n", quadrado_do_numero);

    return 0;
}



5
#include <stdio.h>
#include <stdint.h>

int main()
{
    float numero_real, quinta_parte;
    printf("por favor, coloque um numero real. lembre de apertar enter apos inserir o numero!!!\n");125
    scanf("%f", &numero_real);

    quinta_parte = numero_real / 5;
    printf("A quinta parte do numero eh: %f", quinta_parte);

    return 0;
}


6
#include <stdio.h>
#include <stdint.h>

int main()
{
    float F, C;
    //sendo F farenheint e C Celcius
    printf("Por favor, coloque uma temperatura em celcius. Lembre-se de apertar ENTER apos inserir a temperatura!!!\n");
    scanf("%f", &C);

    F = (C * 9.0 / 5.0) + 32;

    printf("A temperatura de %f graus celcius eh, em Fahrenheint: %f\n", C, F);

    return 0;
}


7
#include <stdio.h>
#include <stdint.h>

int main()
{
    float F, C;
    //sendo F farenheint e C Celcius
    printf("Por favor, coloque uma temperatura em Farenheint. Lembre-se de apertar ENTER apos inserir a temperatura!!!\n");
    scanf("%f", &F);

    C = (F -32) * 5.0 / 9.0;
    printf("A temperatura de %f Fareheint eh, em graus Celcius: %f", F, C);

    return 0;
}

8
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K, C;
    printf("Por favor, coloque uma temperatura em Kelvin. Lembre-se de apertar ENTER apos inserir a temperatura!!!\n");
    scanf("%f", &K);

    C = K - 273.15;
    printf("o resultado de %0.4f K em graus celcius eh:%0.4f \n", K, C);
    //o print foi limitado em 4 casas decimais para evitar erros de truncamento

    return 0;
}

9
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K, C;
    printf("Por favor, coloque uma temperatura em Celcius. Lembre-se de apertar ENTER apos inserir a temperatura!!!\n");
    scanf("%f", &C);

    K = C + 273.15;
    printf("o resultado de %0.4f graus celcius em Kelvin eh:%0.4f \n", C, K);
    //o print foi limitado em 4 casas decimais para evitar erros

    return 0;
}

10

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K, M;
    //sendo K km/h e M m/s
    printf("Por favor, coloque uma velocidade em Km/h. Lembre-se de apertar ENTER apos inserir a velocidade!!!\n");
    scanf("%f", &K);
    M = K / 3.6;

    printf("a velocidade %f em Km/h eh, em m/s: %f\n", K, M);
    return 0;
}

11

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K, M;
    //sendo K km/h e M m/s
    printf("Por favor, coloque uma velocidade em m/s. Lembre-se de apertar ENTER apos inserir a velocidade!!!\n");
    scanf("%f", &M);

    K = M * 3.6;
    printf("a velocidade %f em m/s eh, em km/h: %f\n", M, K);
    return 0;
}

12
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M, K;
    //sendo m milhas e K km
    printf("Por favor, coloque uma distancia em milhas. Lembre-se de apertar ENTER apos inserir a distancia!!!\n");
    scanf("%f", &M);

    K = 1.61 * M;
    printf("a distancia %0.4f em milhas eh, em km: %0.4f", M, K);
    return 0;
}

13
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M, K;
    //sendo m milhas e K km
    printf("Por favor, coloque uma distancia em kilometros. Lembre-se de apertar ENTER apos inserir a distancia!!!\n");
    scanf("%f", &K);

    M = K / 1.61;
    printf("a distancia %f em km eh, em milhas: %f", K, M);

    return 0;
}

14
#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main()
{
    float R, G;
    //sendo R o angulo em radianos e G o angulo em graus
    printf("Por favor, coloque um angulo em graus. Lembre-se de apertar ENTER apos inserir a angulo!!!\n");
    scanf("%f", &G);

    R = G * pi/180;
    printf("O angulo %f em graus eh, em radianos, %f", G, R);

    return 0;
}

15
#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main()
{
    float R, G;
    //sendo R o angulo em radianos e G o angulo em graus
    printf("Por favor, coloque um angulo em radianos. Lembre-se de apertar ENTER apos inserir a angulo!!!\n");
    scanf("%f", &R);

    G = R * 180 / pi;
    printf("O angulo %f em radianos eh, em graus, %f", R, G);

    return 0;
}

16
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, P;
    //sendo P o valor em polegadas e C em cm
    printf("Por favor, coloque um valor em polegadas. Lembre-se de apertar ENTER apos inserir o valor!!!\n");
    scanf("%f", &P);

    C = P * 2.54;
    printf("o valor %0.4f em polegadas eh, em cm, %0.4f\n", P, C);
    return 0;
}


17
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, P;
    //sendo P o valor em polegadas e C em cm
    printf("Por favor, coloque um valor em cm. Lembre-se de apertar ENTER apos inserir o valor!!!\n");
    scanf("%f", &C);

    P = C / 2.54;
    printf("o valor %0.4f em cm  eh, em polegadas, %0.4f\n", C, P);
    return 0;
}

18
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float L,M;
    //sendo L o volume em Litros e M o volume em metros cubicos
    printf("Por favor, coloque um volume em metros cubicos. Lembre-se de apertar ENTER apos inserir o volume!!!\n");
    scanf("%f", &M);

    L = M * 1000;
    printf("o volume %f em metros cubico eh, em litros, %f", M, L);

    return 0;
}

19
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float L,M;
    //sendo L o volume em Litros e M o volume em metros cubicos
    printf("Por favor, coloque um volume em litros. Lembre-se de apertar ENTER apos inserir o volume!!!\n");
    scanf("%f", &L);

    M = L / 1000;
    printf("o volume %f em litros eh, em metros cubicos, %f\n", L, M);

    return 0;
}

20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K, L;
    //Sendo K o valor de massa em kilogramas e L o valor de massa em Libras
    printf("Por favor, coloque um valor de massa em Kilogramas. Lembre-se de apertar ENTER apos inserir o valor de massa!!!\n");
    scanf("%f", &K);

    L = K / 0.45;
    printf("o valor de massa %f em kilogramas eh, em libras: %f", K, L);

    return 0;
}

21
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float L, K;
    //Sendo K o valor de massa em kilogramas e L o valor de massa em Libras
    printf("Por favor, coloque um valor de massa em Libras. Lembre-se de apertar ENTER apos inserir o valor de massa!!!\n");
    scanf("%f", &L);

    K = L * 0.45;
    printf("o valor de massa %f em libras eh, em kilogramas: %f", L, K);

    return 0;
}

22
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float J,M;
    //sendo j o comprimento em Jardas e M o comprimento em Metros
    printf("Por favor, coloque um comprimento em Jardas. Lembre-se de apertar ENTER apos inserir o comprimento!!!\n");
    scanf("%f", &J);

    M = 0.91 * J;
    printf("o comprimento %f em jardas eh, em metros: %f\n", J, M);
    return 0;
}

23
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float J,M;
    //sendo j o comprimento em Jardas e M o comprimento em Metros
    printf("Por favor, coloque um comprimento em Metros. Lembre-se de apertar ENTER apos inserir o comprimento!!!\n");
    scanf("%f", &M);

    J = M / 0.91;
    printf("o comprimento %f em metros eh, em jardas, %f\n",M,J);
    return 0;
}

24
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, M;
    //sendo A a area em Acres e M a area em metros quadrados
    printf("Por favor, coloque uma area em metros quadrados. Lembre-se de apertar ENTER apos inserir a area!!!\n");
    scanf("%f", &M);

    A = M * 0.000247;
    printf("a area %f em metros quadrados eh, em acres, %0.10f\n",M, A);
    return 0;
}

25
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, M;
    //sendo A a area em Acres e M a area em metros quadrados
    printf("Por favor, coloque uma area em Acres. Lembre-se de apertar ENTER apos inserir a area!!!\n");
    scanf("%f", &A);

    M = A * 4048.58;
    printf("a area %f em acres eh, em metros quadrados: %0.2f\n",A, M);
    return 0;
}

26
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float H, M;
    //sendo H a area em hectares e M a area em metros quadrados
    printf("Por favor, coloque uma area em metros quadrados. Lembre-se de apertar ENTER apos inserir a area!!!\n");
    scanf("%f", &M);

    H = M * 0.0001;
    printf("a area %f em metros quadrados eh, em hectares, %0.10f\n",M, H);
    return 0;
}

27
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float H, M;
    //sendo H a area em hectares e M a area em metros quadrados
    printf("Por favor, coloque uma area em hectares. Lembre-se de apertar ENTER apos inserir a area!!!\n");
    scanf("%f", &H);

    M = H * 10000;
    printf("a area %f em hectares eh, em metros quadrados, %f\n",H, M);
    return 0;
}

28
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1, v2, v3;
    //sendo vi valores com i sendo um numero inteiro
    float S;
    //sendo S a soma dos quadrados dos valores
    printf("Por favor, inserir 3 valores. Lembre-se de apertar ENTER apos inserir cada um deles.\n");
    scanf("%f %f %f", &v1, &v2, &v3);

    S = (v1 * v1) + (v2 * v2) + (v3 * v3);
    printf("a soma dos quadrados dos numeros eh %f\n", S);

    return 0;
}

29
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4;
    //sendo ni as notas, com i = numero inteiro positivo
    float M;
    //sendo M a média das notas
    printf("Por favor, inserir 4 notas. Lembre-se de apertar ENTER apos inserir cada uma delas.\n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    M = (n1 + n2 + n3 + n4) / 4;
    printf("a media das notas eh: %f\n", M);
    return 0;
}

30
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float R, cD;
    //sendo R o valor em reais e cD a cotação do dólar
    printf("Por favor, insira o valor em reais e a cotação do doólar nessa ordem. Aperte ENTER apos inserir cada um deles.\n");
    scanf("%f %f", &R, &cD);

    float D;
    //sendo D o valor em dólar
    D = R / cD;

    printf("a conversao de %f R$ para dolares eh: %f $", R, D);

    return 0;

}

31
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nm, n, nM;
    //sendo n o numero inteiro, nm o antecessor e nM o sucessor
    printf("por favor, insira um numero inteiro. Aperte ENTER apos inseri-lo\n");
    scanf("%d", &n);

    nm = -1 + n;
    nM = 1 + n;

    printf("antecessor de %d: %d\nsucessor de %d: %d\n", n, nm, n, nM);
    return 0;
}

32
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, R;
    //sendo n o numero inteiro e R o resultado
    printf("Por favor, insira um numero inteiro. Aperte ENTER apos inseri-lo\n");
    scanf("%i", &n);

    R = ((3 * n) + 1) + ((2*n) -1);
    printf("a soma do sucessor do triplo de %i com o antecessor de seu dobro eh: %i", n ,R);

    return 0;

}

33
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado, area;
    printf("Por favor, insira um lado. Aperte ENTER apos inseri-lo\n");
    scanf("%f", &lado);

    area = lado * lado;
    printf("a area do quadrado de lado %f eh: %f\n", lado, area);

    return 0;
}

34
#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main()
{
    float raio, area;
    printf("Por favor, insira o raio. Apos inseri-lo aperte ENTER.\n");
    scanf("%f", &raio);

    area = pi * (raio * raio);
    printf("a area eh: %f\n", area);

    return 0;

}

35
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Insira o lado dos catetos. Aperte ENTER apos inserir um deles.\n");
    scanf("%f %f", &a, &b);

    c =sqrt(a * a + b * b);
    printf("o tamanho da hipotenusa eh: %f", c);

    return 0;
}

36	

#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main()
{
    float raio, altura, volume;
    printf("Por favor, insira o altura e a raio do cilindro nessa ordem. Apos inserir um aperte ENTER.\n");
    scanf("%f %f", &altura, &raio);

    volume = pi * (raio * raio) * altura;

    printf("o volume eh: %f u (sendo u uma unidade de volume qualquer, dependente da unidade do raio e da altura) \n", volume);

    return 0;
}

37
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,p_d;
    //sendo p o preco do produto produto e p_d p o produto com desconto
    printf("Coloque o preco do produto sem desconto. Aperte ENTER logo apos.\n");
    scanf("%f", &p);

    p_d = p - p*12/100;
    printf("o preco do produto com desconto eh: %f\n", p_d);

    return 0;
}

38
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Sa, Sn;
    //sendo Sa o salário sem aumento e Sn o salário com aumento
    printf("Por favor, insira o salario sem o aumento. Logo apos aperte ENTER.\n");
    scanf("%f", &Sa);

    Sn = Sa + Sa * 25/100;
    printf("o salario novo eh: %f reais \n", Sn);

    return 0;
}

39
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float q1, q2, q3;
    //sendo q a quantia que cada ganhador ganhará
    q1 = 780.00 * 46 / 100;
    q2 = 780.00 * 32 /100;
    q3 = 780.00 - (q1 + q2);

    printf("o primeiro ganhador ganharah %0.4f o segundo %0.4f e o terceiro %0.4f\n", q1, q2, q3);

    return 0;
}

40
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias;
    float Qp;
    printf("Por favor, coloque o numero de dias trabalhados. Aperte ENTER apos isso.\n");
    scanf("%i", &dias);
    //sendo Qp a quantia paga

    Qp = 30.0 * dias - 8 * 30.0 * dias / 100;
    printf("a quantia paga total eh: %0.4f reais \n", Qp);

    return 0;
}

41
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Hm, Vh, Vp;
    //sendo Hm as horas por mes, Vh o valor por hora e Vp o valor pago
    printf("Insira na seguinte ordem as horas trabalhadas por mes e o valor pago por hora. Apos inserir cada um dele aperte ENTER.\n ");
    scanf("%f %f", &Hm, &Vh);

    Vp = (Hm * Vh) + 0.1 * Hm * Vh;

    printf("o valor pago eh: %f reais", Vp);

    return 0;
}

42
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Sb, Sf;
    //sendo Sb o salário base e Sf o salário final
    printf("Insira o saalario base. Apos isso aperte ENTER.\n");
    scanf("%f", &Sb);

    Sf = Sb + 5 * Sb / 100 - 7 * Sb /100;
    printf("O salario final eh de %f reais \n", Sf);

    return 0;

}

43
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Vb;
    printf("Por favor, insira o valor do produto sem desconto. Lembre-se de apertar ENTER apos inseri-lo.\n");
    scanf("%f", &Vb);
    //sendo Vb o valor sem desconto
    float Vd;
    //sendo vd o valor com descontos

    Vd = Vb - 0.1 * Vb;

    printf("O valor pago com descontos eh: %f reais \n", Vd);


    //daqui para frente valor de cada parcela
    float Vp;
    //sendo Vp o Valor por parcela sem juros

    Vp = Vb/3;

    printf("O valor de cada parcela caso o produto seja parcelado em 3x eh: %f reais \n", Vp);

    //daqui para frente calculo da comissão do vendedor sobre o preço do desconto
    float Cd;

    Cd = 5 * Vd / 100;

    printf("A comissao do vendedor sobre o desconto eh de %f reais \n", Cd);

    //daqui para frente a comissão do vendedor sobre a parcela

    float Cp;

    Cp = 5 * Vb / 100;

    printf("A comissao do vendedor sobre o total das parcelas eh de  %f reais \n", Cp);

    return 0;
}

44

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h, H;
    //sendo h altura do degrau e H altura total;
    printf("Insira a altura do degrau e a altura total que se deseja encontrar nessa ordem.\n");
    scanf("%f %f", &h, &H);

    int n;
    //sendo n o numero de degraus

    n = H / h;

    printf("o total de degraus eh: %i", n);

    return 0;
}


45
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char X, x;
    printf("Por favor, insira qualquer letra MAIUSCULA do alfabeto.\n");
    scanf("%c", &X);

   x = X + 32;

    printf("a letra minuscula de %c eh: %c\n", X, x);

    return 0;
}

46
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, d , u;
    printf("Insira 3 valores. Eles serao, na ordem de insercao, as centenas , dezenas e unidades do numero que sera invertido.\n ");
    scanf("%1i %1i %1i", &c, &d ,&u);
    //sendo c centena, d dezena e u unidade
    int N, I;
    //sendo N normal e I invertido

    N = c * 100 + d *10 + u;
    I = u * 100 + d *10 + c;

    printf("o numero %3i eh invetido: %3i", N, I);

    return 0;
}

47
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Por favor, insira um numero de 4 digitos.\n");
    scanf("%4i", &n);
    int m, c, d, u;

    m = n / 1000;
    c = n /100 - m * 10;
    d = n/10 - (m * 100 + c * 10);
    u = n - (m * 1000 + c * 100 + d * 10);


    printf(" %i\n %i\n %i\n %i\n", m, c, d, u);
    return 0;
}

48

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Vi;
    int h, mh, m, s;
    //sendo h as horas, mh as horas e os minuots, m os minutos e s os segundos
    printf("Por favor, insira um valor inteiro em segundos.\n");
    scanf("%i", &Vi);

    if (Vi >= 3600)
    {
        mh = Vi / 60;
        s = Vi % 60;

        if (mh >= 60)
        {
            h = mh /60;
            m = mh % 60;
        }

        else
        {
            m = mh;
        }
    }


    else
    {
        m = Vi /60;
        s = Vi % 60;
    }

    printf("%i horas, %i minutos e %i segundos", h, m, s);

    return 0;
}

49
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora_inicial, minuto_inicial, segundo_inicial,inicio_em_segundos;
    int duracao;
    int tempofinal_em_segundos;

    printf("inserir hora inicial, minuto inicial, segundo incial e a duracao do experimento em segundos nessa ordem\n");
    scanf("%i\n %i\n %i\n %i", &hora_inicial, &minuto_inicial, &segundo_inicial, &duracao);

    inicio_em_segundos = hora_inicial * 3600 + minuto_inicial * 60 + segundo_inicial;
    tempofinal_em_segundos = inicio_em_segundos + duracao;

    int hora_final, minutos_e_segundos, minuto_final, segundo_final;

    if (tempofinal_em_segundos >= 3600)
    {
        hora_final = tempofinal_em_segundos / 3600;
        minutos_e_segundos = tempofinal_em_segundos % 3600;

        if (minutos_e_segundos >= 60);
        {
            minuto_final = minutos_e_segundos / 60;
            segundo_final = minutos_e_segundos % 60;
        }
    }
    else
    minuto_final = tempofinal_em_segundos / 60;
    segundo_final = tempofinal_em_segundos % 60;

    if(hora_final >= 24);
    int numero_de_dias;

    numero_de_dias = hora_final / 24;

    hora_final = hora_final - 24 * numero_de_dias;

    printf("A hora, minuto e segundo do fim do experimento eh: %i %i %i", hora_final, minuto_final, segundo_final);
    return 0;
}

50
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano_atual, idade, ano_de_nascimento;
    char resposta;

    printf("voce ja fez aniversario esse ano?\n Caso sim digite S\\s Caso nao digite N\\n \n");
    scanf("%c", &resposta);

    printf("favor informar o ano atual e sua idade de nascimento nessa ordem, lembre de apertar enter apos cada resposta\n");
    scanf("%i %i", &ano_atual, &idade);


    if((resposta == 'S') || (resposta == 's'))
    {
        ano_de_nascimento = ano_atual - idade;
        printf("voce nasceu em %i !", ano_de_nascimento);
    }

    else if ((resposta == 'N') || (resposta == 'n'))
    {
        ano_de_nascimento =  (ano_atual - idade) - 1;
        printf("voce nasceu em %i !", ano_de_nascimento);
    }

    else
    {
        printf("responda se sim ou nao!!!");
    }

    return 0;
}

51
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y, distancia_da_origem;
    printf("escreva os valores de x e y nessa ordem, lembre-se de aprtar enter apos cada resposta\n");
    scanf("%i\n %i", &x, &y);

    distancia_da_origem = sqrt(( x * x) + (y * y));

    printf("a distancia dos pontos \(%i , %i)\ da origem  eh: %i", x, y, distancia_da_origem);
    return 0;
}

52
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float investimento_1, investimento_2, investimento_3, investimento_total, valor_do_premio;
    float ganho_1, ganho_2, ganho_3;
    printf("digite o valor dos investimentos e do premio, nessa ordem, lembre-se de apertar enter apos cada um deles\n");
    scanf("%f %f %f %f", &investimento_1, &investimento_2, &investimento_3, &valor_do_premio);

    investimento_total = investimento_1 + investimento_2 + investimento_3;
    ganho_1 = valor_do_premio * (investimento_1  / investimento_total);
    ganho_2 = valor_do_premio * (investimento_2  / investimento_total);
    ganho_3 = valor_do_premio * (investimento_3  / investimento_total);

    printf(" O primeiro investidor ganhara %f reais\n o segundo ganhara %f reais\n e o terceiro ganhara  %f reais \n", ganho_1, ganho_2, ganho_3);
    return 0;
}

53
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float c, l, p, preco_total;
    //sendo c, l e p comprimento, largura e preço de tela respectivamente;
    printf("digite o comprimento, a largura e o preço de tela nessa ordem, lembre-se de apertar enter apos cada dado inserido\n");
    scanf("%f\n %f\n %f", &c, &l, &p);

    preco_total = (2 * c + 2 * l) * p;

    printf("O preco total para cercar o terreno eh: %f", preco_total);
    return 0;

}






