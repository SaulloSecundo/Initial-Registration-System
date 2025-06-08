#include <iostream>
#include "Funcionario.h"
#include "Desenvolvedor.h"
#include "Estagiario.h"
#include "Gerente.h"

using namespace std;

int main()
{
    //vetor de ponteiros para instanciar 10 objetos do tipo Funcionarios 
    Funcionario *funcionarios[10];
 
    //variável para receber o tipo de funcionário informado pelo usuário
    char tipoFuncionario;

    //variaveis para receber as dependências dos objetos instânciados das classes Gerente, Desenvolvedor e Estagiário
    int numFuncionarios;
    int id;
    float salariroBase;
    string nome;
    int horasTrabalhadas;
    float bonusMensal;
    int quantidadeProjetos;
    
    //Informações relevantes para a execução da operação de cadastro 
    cout << "Bem vindo ao sistema de cadastro de funcionarios!" << endl;
    cout << "OBS.: Nesta operacao, 6 funcionarios, , no minino, devem ser inseridos, com limite maximo de 10 servidores." << endl;
    cout << "Alem disso, cada funcionario deve ter um tipo associado: E - Estágiario, D - desnvolvedor, G - Gerente." << endl;
    cout << endl;
    cout << "Informe o numero de funcionarios que serao inseridos: " << endl;
    cin >> numFuncionarios;

    if(numFuncionarios < 6 || numFuncionarios > 10){
        cout << "Numero de funcionarios a serem cadastrados invalido. Verifique as exigencias de capacidade e tente novamente." << endl;
        return 0;
    }

    //loop para receber as entradas informadas sobre os funcionários a serem cadastrados 
    for (int i = 0; i < numFuncionarios; i++)
    {

        cout << "Funcionario " << i + 1 << ":" << endl;
        cout << "Tipo: (E/D/G)" << endl;
        cin >> tipoFuncionario;

        //verifica se o tipo de funcionário informado é válido para as opções disponíveis. 
        //Caso não, informa a invalidês e tenta novamente capturar um tipo válido a partir de um loop

        while(tipoFuncionario != 'D' & tipoFuncionario != 'G' & tipoFuncionario != 'E'){
            cout << "Tipo invalido. Informe novamente: " << endl;
            cin >> tipoFuncionario;
        }

        cout << "id: " << endl;
        cin >> id;
        cout << "Nome: " << endl;
        cin >> nome;
        cout << "salario base: " << endl;
        cin >> salariroBase;

        /*verifica o tipo de funcionário a ser cadastrado pelo o usuário. Dependendo da categoria informada (E, D, G), são instanciados
        objetos do tipo Estagiario, Desenvolvedor ou Gerente no vetor de ponteiros para Funcionario*/
        if (tipoFuncionario == 'E')
        {
            cout << "Horas trabalhadas: " << endl;
            cin >> horasTrabalhadas;
            funcionarios[i] = new Estagiario(id, nome, salariroBase, horasTrabalhadas);
        }
        else if (tipoFuncionario == 'D')
        {
            cout << "Quantidade de projetos: " << endl;
            cin >> quantidadeProjetos;
            funcionarios[i] = new Desenvolvedor(id, nome, salariroBase, quantidadeProjetos);
        }
        else
        {
            cout << "Bonus mensal: " << endl;
            cin >> bonusMensal;
            funcionarios[i] = new Gerente(id, nome, salariroBase, bonusMensal);
        }
    }

    //para cada funcionário cadastrado, são exibidas as informações de cada um neste loop
    for (int i = 0; i < numFuncionarios; i++)
    {   
        cout << "-----------------------------------------------------------------------------------------" << endl;
        cout << "Funcionario " << i+1 << ": " << endl;
        funcionarios[i]->exibirInformacoes();
    }

    return 0;
}