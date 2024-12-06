//trabalho final algoritmos 1.
//versão: v0.1

#include<bits/stdc++.h>
#define nl std::cout<<"\n";

typedef struct{
    std::string nome;
    std::string principaisEstrelas;
    char hemisferio; //N para norte e S para sul
    std::string descricao;
} constelacao;

void adicionarConstelacao();
void listarConstelacoes();
void removerConstelacoes();

void merge(std::vector<int> &array, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> leftarray(n1), rightarray(n2);

    // Copia dados para os arrays temporários
    for (int i = 0; i < n1; i++)
        leftarray[i] = array[left + i];
    for (int j = 0; j < n2; j++)
        rightarray[j] = array[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftarray[i] <= rightarray[j]) {
            array[k] = leftarray[i];
            i++;
        } else {
            array[k] = rightarray[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        array[k] = leftarray[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = rightarray[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<int> &array, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Ordena a primeira e a segunda metade
        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);

        // Mescla as duas metades ordenadas
        merge(array, left, mid, right);
    }
}

int buscaBinaria();

int main(){
    std::cout << "Bem vido ao Sistema de Gerenciamento de Constelacoes.";nl
    int input;
    do{
        std::cout << "1. Adicionar Constelacao\n 2. Listar Constelacoes \n 3. Buscar constelacao por nome";nl
        std::cout << "4. Remover constelacao\n 5. Sair";
        std::cin >> input;
        
        switch(input){
        case 1:
            adicionarConstelacao();
            break;
        
        case 2:
            listarConstelacoes();
            break;
        
        case 3:
        {
            std::cout << "Digite o nome da constelacao para buscar: ";
            std::string nomeBusca;
            std::cin >> nomeBusca;
            buscaBinaria();
            break;
        }
        case 4:
            removerConstelacoes();
            break;
        
        case 5:
            adicionarConstelacao();
            break;

        default:
            std::cout << "entrada invalida!";
            break;
        }

    }while(input != 5);


}