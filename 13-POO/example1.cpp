#include <iostream>
using namespace std;

class Caixa {
    public:
        double largura;
        double altura;
        double profundidade;
};

int main() {
    Caixa box1;
    Caixa box2;

    double volume = 0.0;

    box1.largura = 4.2;
    box1.altura = 5.3;
    box1.profundidade = 8.4;

    box2.largura = 11.5;
    box2.altura = 13.9;
    box2.profundidade = 12.3;

    double volumeBox1 = box1.largura * box1.altura * box1.profundidade;
    cout << "Volume da Box 1: " << volumeBox1 << endl;

    double volumeBox2 = box2.largura * box2.altura * box2.profundidade;
    cout << "Volume da Box 2: " << volumeBox2 << endl;

    return 0;
}