#include <iostream>
using namespace std;

int main() {
    int lista[5];

    lista[0] = 1;
    lista[1] = 2;
    lista[2] = 3;
    lista[3] = 4;
    lista[4] = 5;

    for (int i = 0; i <= 4; ++i) {
        cout << "Número: " << lista[i] << endl;
    }
}
