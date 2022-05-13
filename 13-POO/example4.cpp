#include <iostream>
using namespace std;

class Formato {
    protected:
        int largura, altura;

    public:
        Formato(int a = 0, int b = 0) {
            largura = a;
            altura = b;
        }
};

class Retangulo: public Formato {
    public:
        Retangulo(int a = 0, int b = 0):Formato(a, b) {}

        int area() {
            cout << "Area do Retangulo: " << (largura * altura) << endl;
            return 0;
        }
};

class Triangulo: public Formato {
    public:
        Triangulo(int a = 0, int b = 0):Formato(a, b) {}

        int area() {
            cout << "Area do triangulo: " << (largura * altura / 2) << endl;
            return 0;
        }
};

int main() {
    Retangulo rec(12,5);
    Triangulo tri(14,6);

    rec.area();
    tri.area();

    return 0;
}