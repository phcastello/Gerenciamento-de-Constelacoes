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
void mergeSort();
void merge();
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