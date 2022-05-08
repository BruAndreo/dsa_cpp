#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int array[5] = {9, 7, 5, 3, 1};

    cout << "\n";

    // Imprime o array
    cout << "Conteudo do array: " << array << "\n";

    cout << "\n";

    // Imprime cada elemento do Array
    cout << "Os valores do array são: ";
    for(int i = 0; i < 5; i++) {
        cout << array[i] << "";
    }

    cout << "\n";

    // Imprime o primeiro e terceiro elemento do array
    cout << "Primeiro elemento do array: " << array[0] << "\n";
    cout << "Terceiro elemento do array: " << array[2] << "\n";

    cout << "\n";

    // Imprime o endereço do array
    cout << "Endereço do array: " << &array << "\n";

    cout << "\n";

    // Imprime o endereço do primeiro e terceiro elemento do array
    cout << "Endereço do primeiro elemento do array: " << &array[0] << "\n";
    cout << "Endereço do terceiro elemento do array: " << &array[2] << "\n";

    cout << "\n";

    // Declara variavel do tipo ponteiro
    int *ptr = array;

    cout << "\n";

    // Imprime o valor da variavel ponteiro
    cout << "Valor do ponteiro: " << ptr << "\n";

    cout << "\n";

    // Imprime o valor para o qual o ponteiro aponta
    cout << "Valor para qual o ponteiro aponta: " << *ptr << "\n";

    cout << "\n";

    // Imprime cada valor do array para o qual o ponteiro aponta
    cout << "Os valores no array são: ";
    for (int i = 0; i < 5; i++) {
        cout << *ptr << " ";
        ptr++;
    }

    cout << "\n";
    cout << "\n";

    return 0;
}