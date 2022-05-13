#include <iostream>
using namespace std;

class Formato {
    protected:
        int largura;
        int altura;

    
    public:
        void setLargura(int l) {
            largura = l;
        }

        void setAltura(int a) {
            altura = a;
        }
};

class Retangulo: public Formato {
    public:
        int getArea() {
            return (largura * altura);
        }
};

int main(void) {
    Retangulo Ret1;

    Ret1.setLargura(4);
    Ret1.setAltura(7);

    cout << "Área do Retângulo: " << Ret1.getArea() << endl;

    return 0;
}
