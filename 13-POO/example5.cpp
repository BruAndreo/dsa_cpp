#include <iostream>
using namespace std;

class Calculadora {
    private:
        int total;

    public:
        Calculadora(int i = 0) {
            total = 0;
        }

        void addNum(int number) {
            total += number;
        }

        int getTotal() {
            return total;
        }
};

int main() {
    Calculadora calc;

    calc.addNum(10);
    calc.addNum(20);
    calc.addNum(30);

    cout << calc.getTotal() << endl;

    return 0;
}
