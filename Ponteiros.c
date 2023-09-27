/*
#include <stdio.h>

int main ()
{

    int number = 5;
    float number2 = 7;
    char letra = 'a';

   int *pontn =&number;
   float  *pontn2 =&number2;
   char *pont3= &letra;

    printf("print int %d",number);
    printf("printf float %f",number2);
    printf("print char %c",letra);
}

*/
/*#include<stdio.h>
int main()
{
    int end1,end2;
    printf("escreva o primeiro endereco ");
    scanf("%d",&end1);
    printf("escreva o segundo endereco ");
    scanf("%d",&end2);

   int *pont1 = &end1;
   int *pont2 = &end2;
    if (pont1>pont2)
    {
        printf("%d maior",*pont1);
    }
    if (pont1<pont2)
    {
        printf("%d maior",*pont2);
    }
}

*/

/*#include<stdio.h>

int main()
{
    int end1,end2;
    printf("escreva o primeiro endereco ");
    scanf("%d",&end1);
    printf("escreva o segundo endereco ");
    scanf("%d",&end2);

   int *pont1 = &end1;
   int *pont2 = &end2;
    if (pont1>pont2)
    {
        printf("%d maior",&pont1);
    }
    if (pont1<pont2)
    {
        printf("%d maior",&pont2);
    }
}
*/
/*
#include<stdio.h>
void calcular(int *numA, int numB)
{
    *numA = *numA + numB;
}
int main ()
{
    int a, b;

    printf("Escolha o primeiro numero ");
    scanf("%d",&a);
    printf("Escolha o segundo numero ");
    scanf("%d",&b);

    calcular(&a,b);

    printf("%d resultado de a armazenado\n",a);
    printf("%d resultado de b ",b);

    return 0;
}
*/
/*

#include <stdio.h>

// Função para verificar se um número é primo
int e_primo(int num) {
    if (num <= 1) {
        return 0;  // Números menores ou iguais a 1 não são primos
    }
    if (num <= 3) {
        return 1;  // Números 2 e 3 são primos
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0;  // Números divisíveis por 2 ou 3 não são primos
    }
    // Verifica divisibilidade por números maiores que 3 e menores que a raiz quadrada do número
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;  // Se for divisível, não é primo
        }
    }
    return 1;  // Se não for divisível, é primo
}

// Função para encontrar os primos próximo a um número dado
void primo(int m, int *p1, int *p2) {
    if (m <= 2) {
        *p1 = -1;  // Não há primos menores que 2
        *p2 = 2;   // O menor primo é 2
        return;
    }
    // Encontra o maior primo menor que m
    for (int i = m - 1; i > 1; i--) {
        if (e_primo(i)) {
            *p1 = i;
            break;  // Encontramos, podemos sair do loop
        }
    }
    *p2 = m + 1;  // Começa a busca do próximo primo a partir de m + 1
    while (!e_primo(*p2)) {
        (*p2)++;  // Incrementa até encontrar o próximo primo
    }
}

int main() {
    int m;
    printf("Declare um numero");
    scanf("%d",&m);
    int p1, p2;
    primo(m, &p1, &p2);  // Encontra os primos usando a função primo
    printf("Maior primo menor que %d: %d\n", m, p1);
    printf("Menor primo maior que %d: %d\n", m, p2);
    return 0;
}
*/
/*#include<stdio.h>
void frac (float numero, int*inteiro, float*frac)
{
    *inteiro = (int) numero;
    *frac = numero - *inteiro;

}
int main()
{
    float numeroReal;
    int parteInteira;
    float parteFrac;

    printf("Digite um numero real");
    scanf("%f",&numeroReal);

    frac(numeroReal, &parteInteira, &parteFrac);
     printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionária: %f\n", parteFrac);

    return 0;

}
*/
/*
#include<stdio.h>
void calc_esfera(float R, float *area, float *volume)
{
    *area = 4 * 3.14 * R* R;
    *volume = 4/3 * 3.14 * R*R*R;

}





int main()
{
    float RaioF;
    float areaP;
    float VolumeP;

    printf("Digite um valor para o Raio ");
    scanf("%f",&RaioF);

    calc_esfera(RaioF,&areaP,&VolumeP);

 printf("Area referente ao Raio: %f\n", areaP);
    printf("Volume referente ao raio: %f\n", VolumeP);

    return 0;

}
*/

/*#include<stdio.h>
void converteHora(int totalsegundos, int*hora, int*min, int*seg)
{
    *min = totalsegundos * 60;
    *hora = *min * 60;              //TEM ERRO NO CALCULO
    *seg = totalsegundos;
}


int main()
{
    int sec;
    int horas;
    int min;
    int Imp;

    printf("Digite a quantidade de segundos");
    scanf("%d",&sec);

    converteHora(sec,&horas,&min,&Imp);

     printf("as Horas sao %d2:%d2:%d2",horas,min,Imp);

    return 0;
}*/
/*
#include <stdio.h>

int main ()
{

    int number = 5;
    float number2 = 7;
    char letra = 'a';

   int *pontn =&number;
   float  *pontn2 =&number2;
   char *pont3= &letra;

    printf("print int %d",number);
    printf("printf float %f",number2);
    printf("print char %c",letra);
}

*/
/*#include<stdio.h>
int main()
{
    int end1,end2;
    printf("escreva o primeiro endereco ");
    scanf("%d",&end1);
    printf("escreva o segundo endereco ");
    scanf("%d",&end2);

   int *pont1 = &end1;
   int *pont2 = &end2;
    if (pont1>pont2)
    {
        printf("%d maior",*pont1);
    }
    if (pont1<pont2)
    {
        printf("%d maior",*pont2);
    }
}

*/

/*#include<stdio.h>

int main()
{
    int end1,end2;
    printf("escreva o primeiro endereco ");
    scanf("%d",&end1);
    printf("escreva o segundo endereco ");
    scanf("%d",&end2);

   int *pont1 = &end1;
   int *pont2 = &end2;
    if (pont1>pont2)
    {
        printf("%d maior",&pont1);
    }
    if (pont1<pont2)
    {
        printf("%d maior",&pont2);
    }
}
*/
/*
#include<stdio.h>
void calcular(int *numA, int numB)
{
    *numA = *numA + numB;
}
int main ()
{
    int a, b;

    printf("Escolha o primeiro numero ");
    scanf("%d",&a);
    printf("Escolha o segundo numero ");
    scanf("%d",&b);

    calcular(&a,b);

    printf("%d resultado de a armazenado\n",a);
    printf("%d resultado de b ",b);

    return 0;
}
*/
/*

#include <stdio.h>

// Função para verificar se um número é primo
int e_primo(int num) {
    if (num <= 1) {
        return 0;  // Números menores ou iguais a 1 não são primos
    }
    if (num <= 3) {
        return 1;  // Números 2 e 3 são primos
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0;  // Números divisíveis por 2 ou 3 não são primos
    }
    // Verifica divisibilidade por números maiores que 3 e menores que a raiz quadrada do número
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;  // Se for divisível, não é primo
        }
    }
    return 1;  // Se não for divisível, é primo
}

// Função para encontrar os primos próximo a um número dado
void primo(int m, int *p1, int *p2) {
    if (m <= 2) {
        *p1 = -1;  // Não há primos menores que 2
        *p2 = 2;   // O menor primo é 2
        return;
    }
    // Encontra o maior primo menor que m
    for (int i = m - 1; i > 1; i--) {
        if (e_primo(i)) {
            *p1 = i;
            break;  // Encontramos, podemos sair do loop
        }
    }
    *p2 = m + 1;  // Começa a busca do próximo primo a partir de m + 1
    while (!e_primo(*p2)) {
        (*p2)++;  // Incrementa até encontrar o próximo primo
    }
}

int main() {
    int m;
    printf("Declare um numero");
    scanf("%d",&m);
    int p1, p2;
    primo(m, &p1, &p2);  // Encontra os primos usando a função primo
    printf("Maior primo menor que %d: %d\n", m, p1);
    printf("Menor primo maior que %d: %d\n", m, p2);
    return 0;
}
*/
/*#include<stdio.h>
void frac (float numero, int*inteiro, float*frac)
{
    *inteiro = (int) numero;
    *frac = numero - *inteiro;

}
int main()
{
    float numeroReal;
    int parteInteira;
    float parteFrac;

    printf("Digite um numero real");
    scanf("%f",&numeroReal);

    frac(numeroReal, &parteInteira, &parteFrac);
     printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionária: %f\n", parteFrac);

    return 0;

}
*/
#include<stdio.h>
void calc_esfera(float R, float *area, float *volume)
{
    *area = 4 * 3.14 * R* R;
    *volume = 4/3 * 3.14 * R*R*R;

}





int main()
{
    float RaioF;
    float areaP;
    float VolumeP;

    printf("Digite um valor para o Raio ");
    scanf("%f",&RaioF);

    calc_esfera(RaioF,&areaP,&VolumeP);

 printf("Area referente ao Raio: %f\n", areaP);
    printf("Volume referente ao raio: %f\n", VolumeP);

    return 0;

}