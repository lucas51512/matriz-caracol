#include <iostream>
using namespace std;

int main() {
    int tamanhoColuna, tamanhoLinha;

    cout << "Digite o tamanho da coluna da matriz: ";
    cin >> tamanhoColuna;

    cout << "Digite o tamanho da linha da matriz: ";
    cin >> tamanhoLinha;

    int matriz[tamanhoLinha][tamanhoColuna];

    int valor = 1;
    int esquerda = 0, direita = tamanhoColuna - 1, topo = 0, base = tamanhoLinha - 1;

    while (valor <= tamanhoLinha * tamanhoColuna) {
        for (int i = esquerda; i <= direita; i++) {
            matriz[topo][i] = valor++;
        }
        topo++;

        for (int i = topo; i <= base; i++) {
            matriz[i][direita] = valor++;
        }
        direita--;

        if (topo <= base) {
            for (int i = direita; i >= esquerda; i--) {
                matriz[base][i] = valor++;
            }
            base--;
        }

        if (esquerda <= direita) {
            for (int i = base; i >= topo; i--) {
                matriz[i][esquerda] = valor++;
            }
            esquerda++;
        }
    }

    for (int i = 0; i < tamanhoLinha; i++) {
        for (int j = 0; j < tamanhoColuna; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
