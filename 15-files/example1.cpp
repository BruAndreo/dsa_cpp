#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream meuArquivo("teste.txt");

    meuArquivo << "Teste de gravação em arquivos C++";

    meuArquivo.close();

    ifstream meuArquivoLeitura("teste.txt");

    string meuTexto;

    while(getline(meuArquivoLeitura, meuTexto)) {
        cout << meuTexto << endl;
    }

    meuArquivoLeitura.close();

    return 0;
}
