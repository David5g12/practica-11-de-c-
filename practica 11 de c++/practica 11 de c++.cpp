#include <iostream>
#include <sstream>

int main() {
    int NUM, I, RESUL;
    std::string linea;
    std::cout << "DIGITE NUMERO: ";
    std::getline(std::cin, linea);

    std::istringstream stream(linea);
    if (!(stream >> NUM)) {
        std::cout << "Número no válido." << std::endl;
        return 1;
    }

    I = 1;
    while (I <= 12) {
        RESUL = NUM * I;
        std::cout << NUM << " * " << I << " = " << RESUL << std::endl;
        I = I + 1;
    }

    std::cout << "Pulse una tecla: ";
    std::cin.get();
    return 0;
}