#include <iostream>

double Soma(double firstValue, double secondValue){
    return firstValue + secondValue;
}

double Divisao(double firstValue, double secondValue){
    return firstValue / secondValue;
}

double Multiplicao(double firstValue, double secondValue){
    return firstValue * secondValue;
}

double Subtracao(double firstValue, double secondValue){
    return firstValue - secondValue;
}

double Calculo(char operation, double firstValue, double secondValue){
    switch (operation) {
    case '-' : return Subtracao(firstValue, secondValue);
    case '+' : return Soma(firstValue, secondValue);
    case '/' : return Divisao(firstValue, secondValue);
    case '*' : return Multiplicao(firstValue, secondValue);
    default: return 0;
    }
}

int main(){

    char operation;
    float firstValue;
    float lastValue;

    std::cout << "Digite o Operador(+, -, *, /): \n";
    std::cin >> operation;

    std::cout << "Digite o primeiro valor numerico: \n";
    std::cin >> firstValue;

    std::cout << "Digite o segundo valor numerico: \n";
    std::cin >> lastValue;

    std::cout << "\n*****************\n";
    std::cout << "O resultado do calculo de " << firstValue << " " << operation << " " << lastValue << " é igual a " << Calculo(operation, firstValue, lastValue) << "\n";
    std::cout << "*****************";

    return 0;
}