#include <iostream>
#define tamanho 5

using namespace std;

void preencherLista(int vetor[tamanho]){
    cout << "Digite os 5 numeros da lista: " << endl;
    for(int i = 0; i <tamanho ; i++){
        cin >> vetor[i];
    }
}

void exibirVetor(int vetor[tamanho]){
    for(int i = 0; i <tamanho; i++){
            cout << vetor[i];
        }
        cout << endl;
}

void esvaziarLista(int vetor[tamanho]){
    int ordem = 0;
    for(int posicao = 0; posicao <tamanho; posicao++){
        vetor[posicao] = vetor[posicao + 1];
        vetor[tamanho-(posicao+1)] = '\0';
            cout << "----------------------------------" << endl;

           exibirVetor(vetor);
    }
}




int main()
{
    int opcao = -1;

    int lista[tamanho];
    while(opcao != 0){
        cout << "Menu : " << endl;
        cout << "1-Mostrar Lista " << endl;
        cout << "2-Preencher Lista " << endl;
        cout << "3-Limpar Lista " << endl;
        cout << "0-Sair " << endl;
        cin >> opcao;

          switch(opcao){
            case 1:
            exibirVetor(lista);
            break;
            case 2:
            preencherLista(lista);
            break;
            case 3:
            esvaziarLista(lista);
            break;
        }
    }










    return 0;
}
