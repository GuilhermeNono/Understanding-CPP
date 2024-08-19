#include <iostream>
#include <iomanip>

int main() {

    int Numero;
    float Numero2;
    double Numero3;
    char Caractere = '3';
    char Caractere2 = 'K';
    bool bAchou;

    signed int n = 1;
    unsigned int n1 = 2;
    long int n3 = 1;
    unsigned long int n4 = 1;
    short int n5 = 4;

    bAchou = 1;

    Numero = 45;
    Numero2 = 55.56f;
    Numero3 = 55.56255458f;

    std::cout << "Valor numero: " << Numero << std::endl;
    std::cout << "Tamanho do numero: " << sizeof(Numero) << std::endl;
    std::cout << "Endereço carregado na memoria: " << &Numero << std::endl;

    std::cout << "Valor Numero2: " << Numero2 << std::endl;
    std::cout << "Tamanho do Numero2: " << sizeof(Numero2) << std::endl;
    std::cout << "Endereço carregado na memoria: " << &Numero2 << std::endl;

    std::cout << "Valor Numero3: " << std::setprecision(12) << Numero3 << std::endl;
    std::cout << "Tamanho do Numero3: " << sizeof(Numero3) << std::endl;
    std::cout << "Endereço carregado na memoria: " << &Numero3 << std::endl;

    std::cout << "Valor Caractere: " << Caractere << std::endl;
    std::cout << "Tamanho do Caractere: " << sizeof(Caractere) << std::endl;
    std::cout << "Endereço carregado na memoria: " << (void *) &Caractere << std::endl;

    std::cout << "Valor Caractere2: " << Caractere2 << std::endl;
    std::cout << "Tamanho do Caractere2: " << sizeof(Caractere2) << std::endl;
    std::cout << "Endereço carregado na memoria: " << (void *) &Caractere2 << std::endl;
    system("PAUSE");

    return 0;
}