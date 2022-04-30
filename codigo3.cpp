#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main (){

   //ler 3 valores e valide se são todos diferentes. Se forem diferentes, 
   //escreva os mesmos em ordem crescente; se não forem, escreva a mensagem: "Alguns ou todos os valores sao iguais"

   //Variaveis
  int A,B,C, Maior, Menor, Meio;

 cout << "Digite o primeiro valor: ";
 cin >> (A);

 cout << "Digite o segundo valor: ";
 cin >> (B);

 cout << "Digite o terceiro valor: ";
 cin >> (C); 
  
cout << "\n\n ------------ RESULTADO ------------ ";

    //Maior
 if ( A > B )
 {
     Maior = A;
 }
 else 
 {
   Maior = B;
 }
 if ( C > Maior)
 {
     Maior = C;
 }
    // Menor 
 if ( A < B )
 {
   Menor = A;
 }
 else 
 {
     Menor = B;
 }
  
if ( C < Menor)
{
    Menor = C;
}

//Meio 
if (A != Maior && A != Menor)
    {
        Meio = A;
    }
    else if (B != Maior && B != Menor)
    {
        Meio = B;
    }
    else
    {
        Meio = C;
    }

    if (A == B || B == C || A == C)
    {
        cout << "\nDois ou todos os valores sao iguais ";
    }

    else
    {
        cout << "\nNumeros em ordem crescente: " << Menor << ", " << Meio << ", " << Maior;
    }
}   