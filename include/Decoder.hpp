#ifndef DECODER_HPP
#define DECODER_HPP

#include <iostream>
#include <vector>

using namespace std;

class Decoder {
private:
    vector<string> listaCodons = {"TCG", "AGA"}; //CODONS sao grupos de 3 letras
public:
    Decoder() {}
    string decodificaCadeia(string cadeiaDNA);
    vector<string> getListaCodons();
};

#endif