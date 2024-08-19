#include <iostream>
//A diretiva de pré-processador #include
//indica para incluir o arquivo de cabeçalho
//iostream

//Função principal
int main(){
    //cout comando de saida de dados
    //neste caso está solicitando para
    //colocar na saida padrão(tela)
    //a frase especificada
    std::cout << "Ola mundo!" << std::endl;
    //endl indica para inserir um caracter de quebra de linha na frase
    system("PAUSE");
    //chama o shel do windows (DOS)
    //e coloca esse comando PAUSE
    return 0;
    //retorna para o sistema operacional zero
    //zero é o padrão para informar que tudo deu certo!
    //assim se a funcçõa main der certo ela retorna 0
}