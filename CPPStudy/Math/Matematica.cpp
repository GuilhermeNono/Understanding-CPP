#include "Matematica.h"

#include <valarray>

int soma(int firstNum, int secondNum)
{
    return firstNum + secondNum;
}
int subtracao(int firstNum, int secondNum)
{
    return firstNum - secondNum;
}
int multiplicacao(int firstNum, int secondNum)
{
    return firstNum * secondNum;
}
double divisao(int firstNum, int secondNum)
{
    return firstNum / secondNum;
}
int potencia(int firstNum, int powerBy)
{
    return std::pow(firstNum, powerBy);
}
int sqrt(int num)
{
    return std::sqrt(num);
}
