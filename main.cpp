/******************************************************************************

Exercicio 1:
Fazer um programa que pegue a altura de 10 pessoas, 
em centimetros, e indique quantas sao menores do que 160cm.

*******************************************************************************/
#include <iostream>
#include <math.h> 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

//int main()
/*{
   int x, y;
   cout << "Digite um valor da sua variavel: " << endl;
   cin >> x;
   cin >> y;
   cout << "A variavel digitada foi: " << x << y << endl;

int nota[15];
cout << "Digite a nota de 15 alunos: " << endl;

for (int i = 0; i < 15; i++){
    cin >> vetor[i];
}

for (int i = 0; i < 15; i++){
    cout << vetor[i] << endl;
}
*/ 
    
 /*   int nump[10];
    int acumulador = 0.0;
    
    cout << "Digite o tamnho de 10 pessoas em centimetros: " << endl;
    
    for(int i = 0; i < 10; i++){
        cin >> nump[i];
    } 
    
    
    for(int i = 0; i < 10; i++){
        if(nump[i] < 160){
            acumulador ++;
        }
    }
    
    cout <<"A quantidade de pessoas que tem altura abaixo de 160cm eh: " << acumulador << endl;
    
    return 0;
}

*/

    
/*    int num;
    int qtd = 0;
    
    cout << "Digite um numero inteiro[-1000 break]: " << endl;
    
    while(1){
        cin >> num;
        
        if(num > 0)
        {
            cout << "Ele um garoto muito lindo" << endl;
            qtd++;
        }
        if(num == 0)
        {
            cout << "Ele um garoto timido" << endl;
        }
        if(num < 0)
        {
            cout << "Ele um garoto muito feio" << endl;
        }
        if(num == -1000)
        {
            break;
        }
    }
    cout<<endl;
    cout << "A quantidade de garotos bonitos eh: " << qtd << endl;
    
    return 0;
}
*/

/*#include <bits/stdc++.h>

using namespace std;

int main()
{
    //string str;
    //getline(cin, str);
    //cout << str << endl;
    //cout << str.size() << endl;
    //cout << str.at(4) << endl;
    //string str2;
    //getline(cin, str2);
    //cout << "str antes: " << str << endl;
    //str.append(str2);
    //cout << "str depois: " << str2 << endl;
    /*if(str == str2){
        cout << "São iguais" << endl; 
    }
    else{
        cout << "São diferentes" << endl; 
    }*/
    /*str.erase(2, 8);
    cout << str << endl;
    */
    
    //reverse(str.begin(), str.end());
    //cout << str << endl;
    
    //int qtd = count(str.begin(), str.end(), 'e');
    //cout << qtd << endl;
    
    
    

    
    
    
    
/*    string str;
    cin >> str;
    
    int qtde = count(str.begin(), str.end(), 'e');
    cout << qtde << endl;
    
    int qtde2;
    for(int i =0; i < str.size(); i++){
        if(str.at(i) == 'e'){
            qtde++;
        }
    }
    
    
    string copia;
    copia = str;
    
    reverse(copia.begin(), copia.end());
    if(copia == str){
        cout << "eh palindroma" << endl;
    }
    else{
        cout << "nao eh palindroma" << endl;
    }
    
    string str2;
    cin >> str2;
    str.append(str2);
    cout << str << endl;
    
    return 0;
}

*/

 /*   float soma1 = 0, soma2 = 0, somatotal = 0, valor_A = 0, valor_B = 0;  // Variaveis do meu programa
    
    
/*    cout << "Digite um numero de 0 a 100:" << endl;             //lendo variaveis
    cin >> valor_A;
    cout << "Digite outro numero de 0 a 100:" << endl; 
    cin >> valor_B;    
    cout << endl;
    soma1 = valor_A * valor_B;
    
    soma2 = valor_A / valor_B;                                              //
    {                                                                       //  Calculos    
        if(valor_B == 0){                                                   //    
        cout << "Valor impossivel de ser dividido\n" << endl;               //
        }
        
    }
  
    somatotal = soma1 + soma2;
    
    
    cout << "A multiplicacao desses dois numeros eh:" << soma1 << endl;                     //
    cout << "A divisao desses dois numeros eh:" << soma2 << endl;                           // Printando
    cout << "O resultado da soma da divisao com a multiplicacao eh:" << somatotal << endl;  // os resultados
                                                                                            //
    */
    
    /*3 – Dado o vetor com seguintes números [87, 31, 23, 58 , 11, 27, 29, 41, 13, 07, 01, 22,
99] construa/monte um sistema que ordene o vetor ordem crescente. Utilizando o mesmo
sistema construa/monte uma estrutura que ordene o vetor ordem decrescente.*/
/*    
    int vector[13] = {87, 31, 23, 58 , 11, 27, 29, 41, 13, 07, 01, 22, 99};
    int auxiliar;
    int x, y;
    
    printf("Ordenada crescente:\n");
    for(x = 0; x < 13; x++)
    {
       for(y = x; y < 13; y++){
           if(vector[x] > vector[y]){
               auxiliar = vector[x];
               vector[x] = vector[y];
               vector[y] = auxiliar;
           }
       } 
    }    
   
   for(int i = 0; i < 13; i++){
       printf(" %d\n", vector[i]);
   }
   
   cout << endl;
   cout << endl;
   
   printf("Ordenada decrescente:\n");
    for(x = 0; x < 13; x++)
    {
       for(y = x; y < 13; y++){
           if(vector[x] < vector[y]){
               auxiliar = vector[x];
               vector[x] = vector[y];
               vector[y] = auxiliar;
           }
       } 
    }    
   
   for(int i = 0; i < 13; i++){
       printf(" %d\n", vector[i]);
   }
   
 return 0;  
}   
/* 1 – Criar uma função que calcule as raízes de uma equação do segundo grau tipo:
AX2+BX+C. Condições: caso o valor do delta fique negativo deverá aparecer a
mensagem delta negativo não possui raízes reais; caso delta fique igual a zero calcular
as raízes e apresentá-las mencionado a condição de que delta igual a zero implica em 2
raízes reais e iguais. Valor 4,0 pontos.*/

/*
float delta(float AX = 0, float BX = 0, float C = 0)
{
    double delta = 0;
    double R1 = 0, r1 = 0, R2 = 0, r2 = 0;
    
    delta = (BX * BX) -4 * AX * C;
    
    if(delta == 0)
    {
        cout << "O delta tem o resultado igual 0, isso implica que as raizez sejam de valores iguais: " << endl;
        cout << endl;
        R1 = -(BX) + sqrt(delta);
        R1 = R2;
        r1 = R1 / (2 * AX);
        printf("x = %.2lf\n", r1);    
    }
    if(delta > 0)
    {
        cout << "O delta tem resultado diferente 0, isso implica que as raizez sejam de valores diferentes: " << endl;
        cout << endl;
        R1 = -(BX) + sqrt(delta);
        r1 = R1 / (2 * AX);
        R2 = -(BX) - sqrt(delta);
        r2 = R2 / (2 * AX);
        printf("x. = %.2lf\n", r1);
        printf("x.. = %.2lf\n", r2);
    }
    if(delta < 0)
    {
        cout << endl;
        cout << "Delta negativo nao possui raizes reais" << endl;
        cout << endl;
    }
    
  return delta;  
}


int main()
{
   float AX = 0, BX = 0, C = 0, resultado = 0;
    
    cout << "Digite os valores da equacao do segundo grau: " << endl;
    cin >> AX >> BX >> C;
    
    cout << endl;
    
    resultado = delta(AX, BX, C);


    return 0;
}
*/
/*4 - Escreva uma estrutura/código que leia um vetor de 10 números naturais e mostre: (Valor
4,0 pontos.)
a) Os números pares digitados;
b) A soma dos números pares digitados;
c) Os números ímpares digitados;
d) A quantidade de números ímpares digitados;*/


/*
int main()
{
    int vetor[10], npar = 0, nimpar = 0;

    cout << "Digite uma sequencia de 10 numeros naturais: " << endl;
    for(int i = 0; i < 10; i++)
    {
        cin >> vetor[i];
    }

    cout << "Numeros pares:" << endl;
    for(int i = 0; i < 10; i++)
    {
        if(vetor[i]%2 == 0)
        {
           cout << vetor[i] << endl;
            npar ++;
        }
    }
   
    cout << endl;
    cout << "A quantidade de numeros pares eh: " << npar << endl;
    cout << endl;
    
    cout << "Numeros impares:" << endl;
    for(int i = 0; i < 10; i++)
    {
        if(vetor[i]%2 != 0)
        {
           cout << vetor[i] << endl;
            nimpar++;
        }
    }
    
    cout << endl;
    cout << "A quantidade de numeros impares eh: " << nimpar << endl;
	cout << endl;
	
	
    return 0;
}
*/
/*Para esse codigo, será declarada 4 variaveis inteiras (utilizando um vetor), 
onde será imprimido: a posição,endereço, e valor de bytes de cadavariavel. 
O endereço vai ser executado por um ponteiro '*ptr'.
*/

//int main()
//{
 
    /*
    int x;
    x = 10;
    
    printf("%i\n", &x);
    
    getchar();
    */
    
    
    //int count = 1;
    /*
    cin >> count;
    cout << "Valor da variavel: " << count << endl;
    printf("teste \n");
    cout << "Tamanho de kb:" << sizeof(count) << endl;
    printf("Tamanho de kb %d\n", sizeof(count));
    cout << "Endereço de memoria: " << &count << endl;
    printf("Endereço de memoria: %d\n", &count);
    printf("Endereço de memoria: %x\n", &count);
    */
    
 /*   int *ptr;               //Declaração das variaveis
    int vetor[4];
    
    cout << "Digite 4 numeros inteiros: " << endl;
    for(int i = 0; i < 4; i++)
    {
        cin >> vetor[i];                           //Execução de um laço de repetiçãofor 
                                                  //para ler o valor das posições do vetor
    }
    cout << endl;
    
    for(int i = 0; i < 4; i++)
    {
        cout << "NUMERO: " << vetor[i] << endl; //Imprime o valor da variavel
        cout << "POSICAO: " << i << endl;       //Imprime a posição da variavel
        cout << "ENDERECO: " << ptr << endl;    //Imprime o endereço em hexadecimal da variavel
        cout << "VALOR[bytes]: " << sizeof(i) << endl; //Imprime o valor em bytes da variavel
        cout << endl;
        ptr = &vetor[i];                          
    }
   
  
    /*int i; int *p;
    i = 1234; p = &i;
    printf ("*p = %d\n", *p);
    printf (" p = %ld\n", (long int) p);
    printf (" p = %p\n", (void *) p);
    printf ("&p = %p\n", (void *) &p);
    return EXIT_SUCCESS;*/




/*

    system("pause");
    return 0;
}

*/
/*
Criamos um codigo que consegue trocar o valor das variaveis através de um proceedimento 
com ponteiros. Utilizando uma variavel auxiliar para executar a troca.
*/
/*
void troca_valor (int *e, int *f)
{
    int auxiliar;
    auxiliar = *e;                 // Procedimento utilizado para trocar os valores 
    *e = *f;                       // das variaveis, com os ponteiros 'int*e' e int*f. 
    *f = auxiliar;
    
}

int main(){
    
    int g, h;   //Declaração das variaveis
    
    // Inicialização dos valores das variaveis declaradas.
    cout << "Digite dois valores inteiros: " << endl;      
    cin >> g >> h; cout << "\n";    
    
    //Impressão das variaveis antes da troca.
    cout << "Valor de g: " << g << endl;
    cout << "Valor de h: " << h << endl;
    
    cout << "\n";
    troca_valor (&g, &h);   // Procedimento
    cout << "\n";
    cout << " -------- Troca --------" << endl;
    cout << "\n";
    
    // Impressão das variaveis depois da troca.
    cout << "Valor de g: " << g << endl;     
    cout << "Valor de h: " << h << endl;           
    
    
    system("pause");
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;          //definindo a variável
    i = 23;
    
    printf("Seu valor eh: %d\n", i);

    int *PTR_i;     /*Atribuindo o valor da variavel ao ponteiro */
  /*
    PTR_i = &i;

    *PTR_i = 25;     // Substituindo o valor da variavel pelo ponteiro
    
    printf("Seu valor eh: %d\n", i);
    printf("Seu valor eh: %i\n", &i);

    system("pause");
    return 0;
}
*/


/*int main(){
    
    double nota1 = 0, nota2 = 0, media = 0;
    cin >> nota1 >> nota2;
    
    media = (nota1 + nota2) / 2;
    
    printf("MEDIA = %5.lf\n", media);
    
    return 0;
    
}
*/

/*Esse codigo vai ciar um ponteiro V */

/*
int main()
{
int i; int *V;
V= (int*)malloc(sizeof(int)*10);
// 'v' é um vetor
V[0] = 10; V[1] = 11; V[2] = 12; V[3] = 13; V[4] = 14;
V[5] = 15; V[6] = 16; V[7] = 17; V[8] = 18; V[9] = 19;
for (i = 0; i < 10; i++)
printf("V[%d]: %d \n", i,V[i]);
printf("Endereco de 'v': %p",V);
free(V);
system("pause");
return 0;
}
*/

/*
int main(){
    
    int *V;
    int v[10];
    V = v;
    
    V[0] = 10; V[1] = 11; V[2] = 12; V[3] = 13; V[4] = 14;
    V[5] = 15; V[6] = 16; V[7] = 17; V[8] = 18; V[9] = 19;
    
    for(int i = 0; i < 10; i++)

    printf("V[%d]: %d \n", i, V[i]);
    printf("Endereco de 'v': %p", V);
    
    
    return 0;
}
*/
/*
int main()
{
    int x, y;
    int eq_1, eq_2, soma;
    printf("2x + y = 10\n");
    scanf("%d %d", &x, &y);
    

    eq_1 = 2*x + y;
    printf("resultado = %d\n", eq_1);
    if(eq_1 != 10){
        printf("equacao impossivel\n\n");
    }
    else{
        printf("equacao possivel\n\n");
    }

    
    
    
    return 0;    
}

*/

/*O uso de ponteiro no Programador declara uma variável, armazena um valor. depois,
imprime o valor da variável, o tento de memória que foi reservada (através da função
sizeof, que retorna o número de Bytes usados) e por fim, mostra seu endereço, usando o
operador & */
/*
int main()
{
    int count=1;
    
    cout <<"Valor da variavel : "<< count << endl;
    printf("teste \n");
    
    cout<<"Tamanho em kb :"<< sizeof(count) << endl;
    printf("Tamanho de kb %d \n", sizeof(count));
    cout<<"Endereco de memoria: "<< &count << endl;
    printf("Endereco de memoria %d \n", &count);
    
    return 0;

}
*/


/*8)
Neste exercício estamos trabalhando com os ponteiros para imprimir o ponteiro e isso
funciona em printf("Endereço de memória do ponteiro = %x", &ptr); Então,
recapitulando, dentro de um printf() se utilizarmos: ptr estaremos acessando o endereço
de memória associado ao ponteiro. Ou seja, o endereço de memória de uma variável. /*
Imprime o valor armazenado no ponteiro (um endereço), usando-se a função printf com
o formatador %p na string de formato. */
/*
int main()
{
int x;
int *ptr;
ptr = &x;
printf ("O endereco de x e: %p \n", ptr);
cout << "O endereco de X e: " << ptr << endl;
system ("pause");
return 0;
}
*/

/*
int main(void) {
int * ptr;
int valor = 10;
ptr = &valor;
printf("Endereco = %x\n", &valor);
printf("Endereco = %x\n", ptr);
printf("Valor = %d\n", *ptr);
return 0;
}
*/

/*
1) Dado um vetor de 100 elementos, construa um sistema que busque a posição de um elemento qualquer deste vetor.(2 pontos).

2) Dado um vetor de 100 elementos, construa um sistema que calcule e apresente a média dos valores e aqueles que são
maiores e menores que a média.

(2 pontos).

3) Faça um programa que leia 10 números inteiros, armazene-os em um vetor, solicite um valor de referência inteiro e:

(9 pontos).
a) imprima os números do vetor que são maiores que o valor referência;
b) retorne quantos números armazenados no vetor são menores que o valor de referência;
c) retorne quantas vezes o valor de referência aparece no vetor.
*/

/*
int main(){
    int vector[100];
    int i = 0;
    
    while(i < 100){
        i++;
        scanf("%d", &vector[i]);
    }
    
    for(int i = 0; i < 101; i++){
        printf("%d\n", i);
    }
}
*/

/*
int main()
{
    int vetor[100];
    int *ptr;
    int count = 0;
   
   for(int i = 0; i < 100; i++){
        cout << " " << i << endl;
        count = i;
    }
    
    count = vetor[100];    
    ptr = vetor;
    
    for (int i = 0; i < 1; i++){
        cout << endl;
        cout << "Qual posicao sera acessada ?" << endl;
        cin >> vetor[i];
        cout << endl;
    }
    
    printf("A posicao eh: %x\n", &vetor);
 
 return 0;
}
*/

/*
int main(){
    int vector[100], i, count = 0; 
    float media = 0;
    
    for(i = 0; i < 100; i++){
        vector[i] = rand()%100;
        
    }
    
    cout << endl;
    cout << endl;
    
    for(i = 0; i < 100; i++){
        cout << " " << vector[i] << endl;
        
    }
    
    
    printf("%d\n", count);

    
    return 0;
}
*/

/*
3) Faça um programa que leia 10 números inteiros, armazene-os em um vetor, solicite um valor de referência inteiro e:

(9 pontos).
a) imprima os números do vetor que são maiores que o valor referência;
b) retorne quantos números armazenados no vetor são menores que o valor de referência;
c) retorne quantas vezes o valor de referência aparece no vetor.
*/

/*
void codigo_completo ()
{
    cout << "Codigo completed my friend Silone  (^-^) " << endl;
}

void IOT_23MAU ()
{
    cout << "IOT 23 MAU  [Simplismente cabuloso] " << endl; 
}

int main(){
    
    int vector[10];
    int v_ref, qtd = 0;
    cout << "Solicitando um valor de referencia[int]: " << endl; 
    cin >> v_ref;
    cout << endl;
    cout << "------------DIGITE 10 VALORES INTEIROS--------------" << endl << endl;
    
    for(int i = 0; i < 10; i++)
    {
        cout << "Insira aqui: "; cin >> vector[i];
    }
    
    cout << endl;
    cout <<"-------------- LETRA 'A' ------------" << endl << endl;
    cout << "Valores maiores do que o valor de referência 'v_ref': " << endl;
    
    for(int i = 0; i < 10; i++)
    {
        if(v_ref < vector[i])
        {
            cout << " " << vector[i] << endl;
        }
    }

    cout << endl;
    cout <<"-------------- LETRA 'B' ------------" << endl << endl;
    cout << "Quantidade de números armazenados no vetor menores que o valor de referência 'v_ref': ";
    
    for(int i = 0; i < 10; i++)
    {
        if(v_ref > vector[i])
        {
            qtd++;
            
        }
    }
    cout << " " << qtd;
    cout << endl;
    
    cout << endl;
    cout <<"-------------- LETRA 'C' ------------" << endl << endl;
    cout << "Valores menores do que o valor de referencia 'v_ref': " << endl;
    
    for(int i = 0; i < 10; i++)
    {
        if(v_ref > vector[i])
        {
            cout << " " << vector[i] << endl;
        }
    }
    cout << endl;
    codigo_completo ();
    cout << " ------------------ // -------------------- " << endl;
    IOT_23MAU ();
    
    system("pause");
    return 0;
}
*/

/*
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct DADO
{
		char sNome[40];
		int iIdade;
};
int main()
{
	struct DADO sDados[5];
	int iIndice;

// A estrutura é dividida em duas partes por um ponto (.)>
// Tem-se o nome da estrutura à esquerda e o nome do campo à direita.
// Neste exemplo, como está sendo
// manipulado um vetor de estruturas, também tem ìndice para cada linha do vetor.

	
	for (iIndice = 0; iIndice < 5; iIndice++)
	{
		printf("\n Entre com o Nome: ");
		scanf("%s", &sDados[iIndice].sNome);
		printf("\n Entre com a Idade: ");
		scanf("%d", &sDados[iIndice].iIdade);
	}
	for (iIndice = 0; iIndice < 5; iIndice++)
	{
		printf("\n %s tem %d anos", sDados[iIndice].sNome, sDados[iIndice].iIdade);
	}
	return 0;
}

*/

/*
float soma(double num = 0, double num2 = 0)
{
    double resultado = 0;
    resultado = num + num2;
    return resultado;
}

float subtracao(double num = 0, double num2 = 0)
{
    double resultado = 0;
    resultado = num - num2;
    return resultado;
}

float multiplicacao(double num = 0, double num2 = 0)
{
    double resultado = 0;
    resultado = num * num2;
    return resultado;
}

float divisao(double num = 0, double num2 = 0)
{
    double resultado = 0;
    resultado = num / num2;
    return resultado;
}

float raiz(double num = 0)
{
    double resultado = 0;
    resultado = sqrt(num);
    return resultado;
}


int main()
{
    double numero = 0, numero2 = 0, resultado = 0;
    string str;
    string parametro;
    
    cout << "Lista dos sinais de operadores disponiveis:\n 'x' - multiplicacao\n ':' - divisao\n '+' - soma\n '-' - subtracao\n 'sqrt' - raiz " << endl;
    cout << endl;
    cout << "-------------------- || ---------------------------" << endl;
    
while(1)
{    
    cout << endl;
    cout << "Digite o primeiro numero: ";
    cin >> numero;
    cout << endl;
    
    cout << "Digite o operador que deseja: ";
    cin >> str;
    cout << endl;
    
    if(str == "+")
    {
        cout << "Digite o segundo numero: ";
        cin >> numero2;
        cout << endl;
        resultado = soma(numero, numero2);
        cout << "Resultado: " << resultado << endl;
    }
    else if(str == "-")
    {
        cout << "Digite o segundo numero: ";
        cin >> numero2;
        cout << endl;
        resultado = subtracao(numero, numero2);
        cout << "Resultado: " << resultado << endl;
    }
    else if(str == "x")
    {
        cout << "Digite o segundo numero: ";
        cin >> numero2;
        cout << endl;
        resultado = multiplicacao(numero, numero2);
        cout << "Resultado: " << resultado << endl;
    }
    else if(str == ":")
    {
        cout << "Digite o segundo numero: ";
        cin >> numero2;
        cout << endl;
        resultado = divisao(numero, numero2);
        cout << "Resultado: " << resultado << endl;
    }
    else if(str == "sqrt")
    {
        resultado = raiz(numero);
        cout << "Resultado: " << resultado << endl;
    }
    else
    {
        cout << "Operador invalido !!!" << endl; 
    }
    
    cout << endl;
    cout << "--------------------------- || ---------------------------";
    cout << endl;
    
    cout << "Deseja continuar calculando?[S/N]" << endl;
    
    cout << endl;
    cin >> parametro;
    
    if(parametro == "S")
    {
        continue;
        cout << endl;
        cout << endl;
	}
	
	if(parametro == "N")
    {
        break;
        cout << endl;
        cout << endl;
    }
	
	else
	{
		cout << "Varialvel nao se encanha entre as duas opcoes disponiveis![1|2 AVISO!!!]" << endl;
		cout << endl;
		cout << "Deseja continuar calculando?[S/N]" << endl;    
	    cout << endl;
	    cin >> parametro;
	    
	    if(parametro == "S")
	    {
	        continue;
	        cout << endl;
	        cout << endl;
		}
		
		if(parametro == "N")
	    {
	        break;
	        cout << endl;
	        cout << endl;
	    }	
	    
	    else
	    {
	    	cout << "Varialvel nao se encanha entre as duas opcoes disponiveis![2|2 AVISO!!!]" << endl;
	    	break;
	    	cout << endl;
	        cout << endl;
		}
	}
}    
    
    return 0;
}
*/


//Exportação de um arquivo em txt
/*
#include <iostream>
#include <math.h> 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  FILE *pont_arq; // cria variável ponteiro para o arquivo
  char palavra[20]; // variável do tipo string
  
  //abrindo o arquivo com tipo de abertura w
  pont_arq = fopen("arquivo_palavra.txt", "w");
  
  //testando se o arquivo foi realmente criado
  if(pont_arq == NULL)
  {
  printf("Erro na abertura do arquivo!");
  return 1;
  }
  
  printf("Escreva uma palavra para testar gravacao de arquivo: ");
  scanf("%s", palavra);
  
  //usando fprintf para armazenar a string no arquivo
  fprintf(pont_arq, "%s", palavra);
  
  //usando fclose para fechar o arquivo
  fclose(pont_arq);
  
  printf("Dados gravados com sucesso!");
  
  getch();
  return(0);
}
*/

/*------------------------------------------------------------------------------------------- || ---------------------------------------------------------------------*/


/*
r - abre um arquivo no modo leitura
w - abre ou cria um arquivo de texto no modo de escrita
a - abre um arquivo no modo de inclusão (append)
r+ - abre um arquivo nos modos de leitura e escrita
a+ - abre um arquivo nos modos de leitura e escrita
w+ - abre um arquivo nos modos de leitura e escrita
*/

/*
fopen() - criar um arquivo ou abrir um arquivo existente
fclose() - fechar um arquivo
getc() - ler um caractere de um arquivo
putc() - escrever um caractere de um arquivo
fscanf() - ler um conjunto de dados de um arquivo
fprintf() - escrever um conjunto de dados em um arquivo
getw() - ler um número inteiro de um arquivo
putw() - escrever um número inteiro em um arquivo
fseek() - definir a posição em um ponto desejado
ftell() - dar a posição atual no arquivo
rewind() - definir a posição como o ponto inicial
*/

//Leitura de arquivo
/*
int main(void)
{
  FILE *pont_arq;
  char texto_str[20];
  
  //abrindo o arquivo_frase em modo "somente leitura"
  pont_arq = fopen("arquivo_palavra.txt", "r");
  
  //enquanto não for fim de arquivo o looping será executado
  //e será impresso o texto
  while(fgets(texto_str, 20, pont_arq) != NULL)
  printf("%s", texto_str);
  
  //fechando o arquivo
  fclose(pont_arq);
  
  getch();
  return(0);

}
*/


/*
int main()
{
	FILE *pt_1;
	char str[30];

	pt_1 = fopen("arquivo_escreve.txt", "r+");
	
	//if(pt_1 == NULL){
	//	cout << "ERROR NA ABERTURA DO ARQUIVO" << endl;
	//	return 1;
	//}
		
	cout << "Arquivo criado com sucesso !!!" << endl << endl;

	cout << "Escreva uma palvara: ";
	cin >> str;
	cout << endl;
	
	fprintf(pt_1, "%s", str);
	
	fclose(pt_1);
	
	cout << "Seus dados foram gravados com sucesso " << endl;
	cout << endl;
	
	
	    
    return 0;
}
*/
/*
struct FICHA
{
	char nome[40];
	int idade;
	int fone;
	
};

int main()
{
    struct FICHA f[3];

    cout << "Digite os dados exigidos abaixo: " << endl;   

	for (int i = 0; i < 2; i++)
    {
        printf("\nNome: ");
        scanf("%s", &f[i].nome);
        //gets(f[i].nome);
        printf("Idade: ");
        scanf("%d", &f[i].idade);
        printf("Fone: ");
        scanf("%d", &f[i].fone);
        cout << "\n----------- --------------" << endl;
     
    }
	
	cout << "Print dos arquivos:" << endl;
	
	for (int i = 0; i < 2; i++)
    {
        printf("\n Nome: %s\n Idade: %d\n Fone: %d\n ", f[i].nome, f[i].idade, f[i].fone);
        cout << "\n----------- --------------" << endl;
        
    }

    return 0;

}
*/


struct FICHA
{
	char nome[40];
	int idade;
	int fone;
	
};
/*
int main()
{
    struct FICHA f[3];

    cout << "Digite os dados exigidos abaixo: " << endl;   

	for (int i = 0; i < 2; i++)
    {
        printf("\nNome: ");
        scanf("%s", &f[i].nome);
        //gets(f[i].nome);
        printf("Idade: ");
        scanf("%d", &f[i].idade);
        printf("Fone: ");
        scanf("%d", &f[i].fone);
        cout << "\n----------- --------------" << endl;
     
    }
	
	cout << "Print dos arquivos:" << endl;
	
	for (int i = 0; i < 2; i++)
    {
        printf("\n Nome: %s\n Idade: %d\n Fone: %d\n ", f[i].nome, f[i].idade, f[i].fone);
        cout << "\n----------- --------------" << endl;
        
    }

    return 0;
    system("pause");
}
*/

struct FICHA
{
	char nome[40];
	int idade;
	int fone;
	
};

int main (void){
    
    FILE *file;
    file = fopen("ficha.txt", "w");
    
    struct FICHA f[3];
    
    cout << "Digite os dados exigidos abaixo: " << endl;   

	for (int i = 0; i < 2; i++)
    {
        printf("\nNome: ");
        scanf("%s", &f[i].nome);
        printf("Idade: ");
        scanf("%d", &f[i].idade);
        printf("Fone: ");
        scanf("%d", &f[i].fone);
        cout << "\n----------- --------------" << endl;
     
    }
	
	cout << "Print dos arquivos:" << endl;
	
	for (int i = 0; i < 2; i++)
    {
        printf("\n Nome: %s\n Idade: %d\n Fone: %d\n ", f[i].nome, f[i].idade, f[i].fone);
        fprintf(file, "\n Nome: %s\n Idade: %d\n Fone: %d\n ", f[i].nome, f[i].idade, f[i].fone);
        cout << "\n----------- --------------" << endl;
    }
    
    
    cout << "\nDados gravados" << endl;

    fclose(file);
    

    return 0;
   
}






