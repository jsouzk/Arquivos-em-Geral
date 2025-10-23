#include <iostream>
#include <vector>
using namespace std;

// --- Função para calcular média ---
float calcularMedia(vector<int> notas) {
    int soma = 0;
    for (int n : notas)
        soma += n;
    return (float)soma / notas.size();
}

// --- Função principal ---
int main() {
    cout << "=== EXEMPLO DE ESTRUTURAS EM C++ ===\n";

    // --- Variáveis e entrada de dados ---
    string nome;
    int idade;

    cout << "Digite seu nome: ";
    cin.ignore(); // limpa o buffer antes de usar getline
    getline(cin, nome);

    cout << "Digite sua idade: ";
    cin >> idade;

    // --- Estrutura de condição (if / else if / else) ---
    if (idade < 12) {
        cout << "Você é uma criança.\n";
    } else if (idade < 18) {
        cout << "Você é um adolescente.\n";
    } else {
        cout << "Você é um adulto.\n";
    }

    // --- Vetor e estrutura de repetição FOR ---
    vector<int> notas;
    int qtd;

    cout << "\nQuantas notas você quer inserir? ";
    cin >> qtd;

    for (int i = 0; i < qtd; i++) {
        int nota;
        cout << "Nota " << i + 1 << ": ";
        cin >> nota;
        notas.push_back(nota);
    }

    // --- Estrutura de repetição DO-WHILE com SWITCH ---
    char opcao;
    do {
        cout << "\n=== MENU ===\n";
        cout << "1 - Ver média das notas\n";
        cout << "2 - Mostrar todas as notas\n";
        cout << "0 - Sair\n";
        cout << "Opção: ";
        cin >> opcao;

        switch (opcao) {
            case '1':
                cout << "Média das notas: " << calcularMedia(notas) << endl;
                break;

            case '2':
                cout << "Notas: ";
                for (int n : notas)
                    cout << n << " ";
                cout << endl;
                break;

            case '0':
                cout << "Saindo...\n";
                break;

            default:
                cout << "Opção inválida!\n";
        }

    } while (opcao != '0');

    cout << "\nPrograma encerrado. Obrigado, " << nome << "!\