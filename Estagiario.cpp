#include <iostream>
#include "Estagiario.h"

using namespace std;

//implementação do construtor parametrizado, inicializando os atributos da classe Estagiário
Estagiario::Estagiario(int id, std::string nome, float salario_base, int horas_trabalhadas)
{
    this->tipo = "Estagiario";
    setId(id);
    setNome(nome);
    setSalarioBase(salario_base);
    //Corrige a quantidade de horas trabalhadas informada pelo o usuário caso seja um valor negativo.
    if(horas_trabalhadas < 0){
        this->horasTrabalhadas = horas_trabalhadas*(-1);
    }else{
        this->horasTrabalhadas = horas_trabalhadas;
    }
}
//implementação do cálculo padrão para o salario de estagiários
float Estagiario::calcularSalarioFinal()
{
    return getSalarioBase()* (((float)this->horasTrabalhadas) / 160);
}

//imprime imformações relacionadas aos estagiários instanciados 
void Estagiario::exibirInformacoes()
{
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo: " << this->tipo << endl;
    cout << "Horas trabalhadas: " << this->horasTrabalhadas << endl;
    cout << "Salario base: " << getSalarioBase() << endl;
    cout << "Salario final: " << calcularSalarioFinal() << endl;
}