#include <iostream>
#define tamanho 5

using namespace std;

void preencherLista(int vetor[tamanho]){
    cout << "Digite os 5 numeros da lista: " << endl;
    for(int i = 0; i <tamanho ; i++){
        cin >> vetor[i];
    }
    cout << endl;
}

void exibirLista(int vetor[tamanho]){
    if (vetor[0] == -1){
        cout << "\n---> Preencha a lista antes de exibir! <---\n\n";
    }else{
        cout << "\n---> ";
        for(int i = 0; i <tamanho; i++){
            cout << vetor[i];
            cout << " ";
        }
        cout << " <---\n" << endl;
    }
}

void limparLista(int vetor[tamanho]){
    int ordem = 0;
    for(int posicao = 0; posicao <tamanho; posicao++){
        vetor[posicao] = vetor[posicao + 1];
        vetor[tamanho-(posicao+1)] = '\0';
            cout << "----------------------------------" << endl;

           exibirLista(vetor);
    }
}

int main()
{
    int opcao = -1;

    int lista[tamanho] = {-1,0,0,0,0};
    while(opcao != 0){
        cout << "Menu : " << endl;
        cout << "1-Preencher Lista " << endl;
        cout << "2-Mostrar Lista " << endl;
        cout << "3-Limpar Lista " << endl;
        cout << "0-Sair " << endl;
        cin >> opcao;

          switch(opcao){
            case 1:
            preencherLista(lista);
            break;
            case 2:
            exibirLista(lista);
            break;
            case 3:
            limparLista(lista);
            break;
        }
    }
    return 0;
}
