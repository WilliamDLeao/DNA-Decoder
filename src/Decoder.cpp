#include <iostream>
#include <algorithm>
#include "Decoder.hpp"

string Decoder::decodificaCadeia(string cadeiaDNA){
    string maiorCadeia, cadeiaAtual;
    int inicioMaior = 0, inicioAtual = 0;

    for (int i = 0; i <= cadeiaDNA.size() - 3; i += 3) {
        string codon = cadeiaDNA.substr(i, 3);
        if (find(getListaCodons().begin(), getListaCodons().end(), codon) != getListaCodons().end()) {
            if (cadeiaAtual.empty()) {
                inicioAtual = i;
            }
            cadeiaAtual += codon;
        } else {
            if (cadeiaAtual.size() > maiorCadeia.size()) {
                maiorCadeia = cadeiaAtual;
                inicioMaior = inicioAtual;
            }
            cadeiaAtual.clear();
        }
    }

    if (cadeiaAtual.size() > maiorCadeia.size()) {
        maiorCadeia = cadeiaAtual;
        inicioMaior = inicioAtual;
    }

    if (!maiorCadeia.empty()) {
        cout << "\nPosição: " << inicioMaior << endl;
    } else {
        cout << "Sem cadeias válidas" << endl;
    }

    return maiorCadeia;
}
vector<string> Decoder::getListaCodons(){
    return listaCodons;
}