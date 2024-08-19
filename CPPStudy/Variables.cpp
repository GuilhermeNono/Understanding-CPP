#include <iostream>
#include <tchar.h>

int main() {

    //Função que configura o console windows para mostrar acentos
    _tsetlocale(LC_ALL, _T("portuguese"));

    //Declaração de Variaveis
    int numVida = 3;
    int pontuacao = 2331;

    std::cout << "************INICIO DO JOGO***********";
    std::cout << "\nVidas Jogador: " << numVida << std::endl;
    std::cout << "Pontuação: " << pontuacao << std::endl;
    std::cout << "Tamanho da viaveis numVidas: " << sizeof(numVida) << " bytes\n";
    std::cout << "Tamanho da viaveis pontuacap: " << sizeof(numVida) << " bytes\n";
    std::cout << "Endereço que numVidas está locando na memoria: " << &numVida << std::endl;
    std::cout << "Endereço que score está locando na memoria: " << &pontuacao << std::endl;
    std::cout << "*************************************\n";

    std::cout << "\n****************DURANTE O JOGO*********************\n";

    pontuacao -= 150;
    numVida -= 1;

    std::cout << "Vidas do Jogador: " << numVida << std::endl;
    std::cout << "Pontuação do Jogador: " << pontuacao << std::endl;
    std::cout << "\n**************************************************\n";

    system("PAUSE");
    return 0;
}