#include <iostream>
using namespace std;

class ImprimeDados {
    public:
        void print(int i) {
            cout << "Imprimindo Int: " << i << endl;
        }

        void print(double f) {
            cout << "Imprimindo double: " << f << endl;
        }

        void print(char* c) {
            cout << "Imprimindo Char: " << c << endl;
        }
};

int main(void) {
    ImprimeDados func1;

    func1.print(1);
    func1.print(12.3);
    func1.print((char*) "Hello C++");

    return 0;
}
