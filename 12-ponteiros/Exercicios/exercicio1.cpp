/* 
Crie um programa que recebe a entrada em uma variavel e exibe o mesmo valor por ponteiro
*/

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Digite um numero: ";
    cin >> number;

    cout << "O endereço de memória com o numero é: " << &number << endl;
    cout << "O valor armazenado é: " << *(&number) << endl;

    return 0;
}