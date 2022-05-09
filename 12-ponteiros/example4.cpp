#include <iostream>
using namespace std;

void imprimeArray1(int *array, int size) {
    cout << "Os valores do array são: ";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    cout << "\n";
}

void imprimeArray2(int array[], int size) {
    cout << "Os valores do array são: ";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    cout << "\n";
}


void imprimeArray3(int array[5], int size) {
    cout << "Os valores do array são: ";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    cout << "\n";
}

int main() {
    int lista[] = {1, 2,3, 4, 5};
    int size = 5;

    cout << "\n";

    imprimeArray1(lista, size);
    imprimeArray2(lista, size);
    imprimeArray3(lista, size);

    return 0;
}
