#include <iostream>
using namespace std;

int main() {
    int num = 10;

    // Está variavel armazena um endereço de memoria (Ponteiro)
    int *ptr = &num;

    cout << num << "\n";

    cout << &num << "\n";

    cout << ptr << "\n";

    return 0;
}