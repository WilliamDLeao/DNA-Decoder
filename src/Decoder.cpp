#include <iostream>
#include <algorithm>
#include "Decoder.hpp"

string Decoder::decodificaCadeia(string cadeiaDNA){
    string maiorCadeia;
    string cadeiaAtual;

    for (size_t i = 0; i <= cadeiaDNA.size() - 3; i += 3) {
        string codon = cadeiaDNA.substr(i, 3);
        if (find(getListaCodons().begin(), getListaCodons().end(), codon) != getListaCodons().end()) {
            cadeiaAtual += codon;
        } else {
            if (cadeiaAtual.size() > maiorCadeia.size()) {
                maiorCadeia = cadeiaAtual;
            }
            cadeiaAtual.clear();
        }
    }

    // Verifica a última cadeia atual
    if (cadeiaAtual.size() > maiorCadeia.size()) {
        maiorCadeia = cadeiaAtual;
    }

    return maiorCadeia;
    
}
vector<string> Decoder::getListaCodons(){
    return listaCodons;
}