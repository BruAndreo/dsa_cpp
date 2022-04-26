#include <iostream>
using namespace std;

struct Funcionario {
    int id;
    int idade;
    double salario;
};

void imprimeFuncionario(Funcionario func) {
    cout << "ID: " << func.id << "\n";
    cout << "Idade: " << func.idade << "\n";
    cout << "Salário: " << func.salario << "\n";
}

int main() {
    Funcionario bob = { 1001, 42, 3589.15 };
    Funcionario maria = { 2003, 28, 4561.27 };

    cout << "\nDados do Bob:" << "\n";
    imprimeFuncionario(bob);

    cout << "\nDados do Maria:" << "\n";
    imprimeFuncionario(maria);
}
