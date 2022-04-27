#include <iostream>

int main() {
    int x = 5;

    // Imprime valor da variavel
    std::cout << x << "\n";

    // Imprime o endereço de memoria do valor da variavel
    std::cout << &x << "\n";

    // Imprime valor do endereço de memoria da variavel
    // Os parenteses não são obrigatorios, apenas ajudam na compreensão
    std::cout << *(&x) << "\n";

    return 0;
}