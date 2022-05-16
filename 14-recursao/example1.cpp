#include <iostream>
using namespace std;

int fatorial(int times) {
    int result = 0;
    
    if (times == 1) {
        result = 1;
    }
    else {
        result = times * fatorial(times - 1);
    }

    return result;
}

int main() {
    cout << "Digite um numero: ";
    int times;
    cin >> times;

    int result = fatorial(times);

    cout << "O fatorial de " << times << " é: " << result << endl;

    return 0;    
}