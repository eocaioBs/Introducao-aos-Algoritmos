#include <iostream>
using namespace std;

int main() {
    int tamanho;
    cin >> tamanho;

    int* ptrA = new int[tamanho];
    int* ptrB = new int[tamanho];

    // Entrada dos vetores
    int i = 0;
    while (i < tamanho) {
        cin >> ptrA[i];
        i++;
    }

    i = 0;
    while (i < tamanho) {
        cin >> ptrB[i];
        i++;
    }

    // Verificação dos vetores
    int igual = 1; // Presume-se que os vetores sejam iguais
    i = 0;
    while (i < tamanho && igual) {
        int j = 0;
        while (j < tamanho) {
            if (ptrA[i] == ptrB[j]) {
                break; // Encontrou uma correspondência
            }
            j++;
        }
        if (j == tamanho) {
            igual = 0; // Elemento de ptrA[i] não foi encontrado em ptrB
        }
        i++;
    }

    if (igual) {
        cout << "IGUAIS";
    } else {
        cout << "DIFERENTES";
    }

    delete[] ptrA;
    delete[] ptrB;

    return 0;
}
