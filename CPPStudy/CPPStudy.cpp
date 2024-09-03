#include <iostream>
#include <vector>

int main()
{

    setlocale(LC_ALL, "portuguese");
    int numero = 234;
    int *ptr = &numero;

    *ptr = 1456;

    std::cout << "\nO valor de numero é: " << *ptr;
    std::cout << "\nO Endereço de numero é: " << &numero;
    std::cout << "\nO Endereço do ponteiro é: " << &ptr;

    int *outroPtr = ptr;

    *outroPtr = *ptr + 200;

    std::cout << "\n O valor de numero é: " << *outroPtr;
    
    return 0;
}

