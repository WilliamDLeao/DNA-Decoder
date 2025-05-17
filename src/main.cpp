#include <iostream>
#include "LeitorArquivos.hpp"
#include "Decoder.hpp"
using namespace std;

int main() {
    LeitorArquivo leitorArquivo;
    Decoder decoder;
    string sequenciaDNA = leitorArquivo.lerArquivo();
    
    string maiorCodon = decoder.decodificaCadeia(sequenciaDNA);
    
    cout << maiorCodon << endl;
    return 0;
}   