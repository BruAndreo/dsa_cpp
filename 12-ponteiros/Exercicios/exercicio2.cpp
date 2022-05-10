/*
Escreva um programa que peça ao usuário para inserir números inteiros como entradas a  serem  armazenadas  nas  variáveis  'A'  e  'B'  respectivamente. 
Crie também  dois ponteiros inteiros chamados ptrA e ptrB. Atribua os valores de 'A' e 'B' a ptrA e ptrB respectivamente e exiba-os.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Digite o valor de A: ";
    int a;
    cin >> a;

    cout << "Digite o valor de B: ";
    int b;
    cin >> b;

    int *ptrA = &a;
    int *ptrB = &b;

    cout << "Valor de A: " << a << endl;
    cout << "Valor de ptrA: " << ptrA << endl;

    cout << "Valor de B: " << b << endl;
    cout << "Valor de ptrB: " << ptrB << endl;

    return 0;
}