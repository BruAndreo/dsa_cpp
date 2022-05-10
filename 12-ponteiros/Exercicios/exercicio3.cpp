/*
Escreva um programa C++ para encontrar o valor máximo de um conjunto de dados. 
O programa  pedirá  ao  usuário  para  inserir  o  número  de  valores  de  dados  no  conjunto(tamanho do array)e cada valor. 
O programa imprime na tela um ponteiro que aponta para o valor máximo.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Digite o numero de itens que deseja no indice: ";
    int size;
    cin >> size;

    int array[size];
    int maiorNum = 0;
    int *ptrMaiorNum;

    for (int i = 0; i < size; i++) {
        cout << "Digite um valor: ";
        cin >> array[i];

        if (array[i] > maiorNum) {
            maiorNum = array[i];
            ptrMaiorNum = &array[i];
        }
    }

    cout << "O ponteiro do maior numero é: " << ptrMaiorNum << endl;
    cout << "O valor do maior numero é: " << *ptrMaiorNum << endl;

    return 0;
}
