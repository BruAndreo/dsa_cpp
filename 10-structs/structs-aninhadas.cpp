#include <cstdint>
#include <iostream>
using namespace std;

struct Funcionario {
    int16_t id;
    int32_t idade;
    double salario;
};

struct Empresa {
    Funcionario CEO;
    int numFum;
};

void imprimeEmpresa(Empresa empresa) {
    cout << "ID do CEO: " << empresa.CEO.id << "\n";
    cout << "Idade do CEO: " << empresa.CEO.idade << "\n";
    cout << "Salário do CEO: " << empresa.CEO.salario << "\n";
    cout << "Número de Funcionários: " << empresa.numFum << "\n";
}

int main() {
    Empresa X;

    X.CEO.id = 1;
    X.CEO.idade = 55;
    X.CEO.salario = 15000.00;
    X.numFum = 100;

    cout << "\nEmpresa X:\n";
    imprimeEmpresa(X);

    Empresa XPTO = {{2, 38, 10000.00}, 400};

    cout << "\nEmpresa XPTO:\n";
    imprimeEmpresa(XPTO);
}
