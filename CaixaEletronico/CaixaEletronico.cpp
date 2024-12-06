// CaixaEletronico.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.

#include <iostream>
#include <iomanip> // Para formatar valores decimais
#include <locale>

using namespace std;

// Função para exibir o menu
void mostrarMenu() {
    cout << "\n=== CAIXA ELETRONICO ===\n";
    cout << "1. Consultar saldo\n";
    cout << "2. Sacar dinheiro\n";
    cout << "3. Depositar dinheiro\n";
    cout << "4. Sair\n";
    cout << "Escolha uma opcao: ";
}

int main() {
	setlocale(LC_ALL, "Portuguese"); // Permite usar acentos

    double saldo = 1000.00; // Saldo inicial
    int opcao;
    bool continuar = true;

    do {
        system("cls"); // Limpa a tela (use "clear" no Linux/Mac)
        mostrarMenu();
        cin >> opcao;

        switch (opcao) {
        case 1: {
            cout << fixed << setprecision(2); // Formatação de duas casas decimais
            cout << "\nSeu saldo atual é: R$ " << saldo << "\n";
            break;
        }
        case 2: {
            double saque;
            cout << "\nDigite o valor para saque: R$ ";
            cin >> saque;
            if (saque > saldo) {
                cout << "Saldo insuficiente! Seu saldo é de R$ " << saldo << "\n";
            }
            else if (saque <= 0) {
                cout << "Valor invalido para saque!\n";
            }
            else {
                saldo -= saque;
                cout << "Saque realizado com sucesso! Novo saldo: R$ " << saldo << "\n";
            }
            break;
        }
        case 3: {
            double deposito;
            cout << "\nDigite o valor para deposito: R$ ";
            cin >> deposito;
            if (deposito <= 0) {
                cout << "Valor invalido para deposito!\n";
            }
            else {
                saldo += deposito;
                cout << "Deposito realizado com sucesso! Novo saldo: R$ " << saldo << "\n";
            }
            break;
        }
        case 4:
            cout << "\nObrigado por usar o caixa eletronico. Ate logo!\n";
            continuar = false;
            break;
        default:
            cout << "\nOpcao invalida! Tente novamente.\n";
        }

        if (continuar) {
            cout << "\nPressione Enter para continuar...";
            cin.ignore(); // Ignora o enter do input anterior
            cin.get();    // Aguarda um novo enter
        }

    } while (continuar);

    return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
