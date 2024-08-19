#include <iostream>

int main(){

    const int NUM_VIDAS = 10;
    int TotalDeVidas;
    TotalDeVidas = NUM_VIDAS - 1;
    std::cout << "Total de vidas: " << TotalDeVidas << "\n";
    std::cout << "Valor constante NUM_VIDAS: " << NUM_VIDAS << "\n";
    std::cout << "Endereço de memoria de : " << &NUM_VIDAS << "\n";

    system("PAUSE");

    return 0;
}