#include <vector>
#include "LeitorArquivos.hpp"

LeitorArquivo::LeitorArquivo(){}
string LeitorArquivo::lerArquivo() {
    ifstream inFile(nomeArquivoEntrada.c_str());
    string sequencia;

    if (!inFile) {
        cerr << "Não foi possível abrir o arquivo de entrada(por erro ou porque ele não existe): " << nomeArquivoEntrada << "\n";
        exit(EXIT_FAILURE);
    } else {
        getline(inFile, sequencia);
        inFile.close();
    }
    return sequencia;
}
void LeitorArquivo::limpaArquivo() {
    ofstream outFile(nomeArquivoSaida.c_str(), ios::trunc); // modo trunc apaga o conteúdo
    if (!outFile) {
        cerr << "Não foi possível abrir o arquivo para limpeza: " << nomeArquivoSaida << "\n";
        exit(EXIT_FAILURE);
    }
}
void LeitorArquivo::escreveArquivo(const vector<vector<int>>& matriz, int passos, int iteracao, int contaAgua, bool cercado) {
    ofstream outFile(nomeArquivoSaida.c_str(), ios::app); 
    if (!outFile) {
        cerr << "Não foi possível abrir o arquivo de saída: " << nomeArquivoSaida << "\n";
        exit(EXIT_FAILURE);
    }

    outFile << "Iteração número " << iteracao << ":\n";

    for (const auto& linha : matriz) {
        for (int elemento : linha) {
            outFile << elemento << " ";
        }
        outFile << '\n';
    }

    if (cercado == true)
    {
        outFile << "Animal cercado." << "\n";
    }
    
    outFile << "Passos: " << passos << "\n";
    outFile << "Encontrou agua: " << contaAgua << "\n\n";

}

void LeitorArquivo::exibeMatriz(const vector<vector<int>>& matriz) {
    cout << "\nConteúdo armazenado na matriz:\n";
    for (const auto& linha : matriz) {
        for (int elemento : linha) {
            cout << elemento;
        }
        cout << '\n';
    }
}

int LeitorArquivo::leX(){
    ifstream inFile(nomeArquivoEntrada.c_str());
    int linhas;
    inFile >> linhas;
    return linhas;
}

int LeitorArquivo::leY(){
    ifstream inFile(nomeArquivoEntrada.c_str());
    int linhas, colunas;
    inFile >> linhas >> colunas;
    return colunas;
}
