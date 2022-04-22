#include <iostream>
using namespace std;

int main() {
    cout << "Digite um número: ";
    int x;
    cin >> x;

    if (x > 10) {
        cout << x << " é maior que 10\n";
    }
    else {
        cout << x << " é menor que 10\n";
    }

    return 0;
}