#include <iostream>

int main() {
    int contador = 1;

    while (contador <= 10) {
        std::cout << contador << " ";
        ++contador;
    }

    std::cout << "\nConcluído\n";

    return 0;
}
