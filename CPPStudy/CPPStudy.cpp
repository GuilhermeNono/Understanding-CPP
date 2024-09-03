#include <iostream>
#include <vector>

int main()
{

    setlocale(LC_ALL, "portuguese");
    int numero = 234;
    int &Ref = numero;

    std::cout << "\nO valor de Ref é: " << Ref;
    std::cout << "\nO valor de Numero é: " << numero;
    std::cout << "\nO Endereço de Ref é: " << &Ref;
    std::cout << "\nO Endereço de numero é: " << &numero;

    return 0;
}

