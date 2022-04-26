#include <iostream>
#include <string>
using namespace std;

enum Color {
    color_blue,
    color_yellow,
    color_green
};

string getColorName(Color color) {
    if (color == color_blue)
        return "Blue";
    if (color == color_yellow)
        return "Yellow";
    if (color == color_green)
        return "Green";

    return "?";
}

int main() {
    Color car_color = { color_blue };

    cout << "\nID da cor do carro: " << car_color << "\n\n";
    cout << "\nCor do seu carro: " << getColorName(car_color) << "\n\n";
}
