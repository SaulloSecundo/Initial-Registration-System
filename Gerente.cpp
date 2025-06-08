#include <iostream>
#include "Gerente.h"

using namespace std;

//implementação do construtor parametrizado, inicializando os atributos da classe Gerente  
Gerente::Gerente(int id, std::string nome, float salario_base, float bonus_mensal){
    this->tipo = "Gerente";
    setId(id);
    setNome(nome);
    setSalarioBase(salario_base);
    //Corrige o bonus mensal informado pelo o usuário caso seja um valor negativo.
    if(bonus_mensal < 0){
        this->bonusMensal = bonus_mensal*(-1);
    }else{
        this->bonusMensal = bonus_mensal;
    }
}
//Implementação do cálculo padrão para o salário de gerente
float Gerente::calcularSalarioFinal(){

    return getSalarioBase() + this->bonusMensal;
}
//imprime imformações relacionadas aos gerentes instanciados
void Gerente::exibirInformacoes(){
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo: " << this->tipo << endl;
    cout << "Bonus: " << this->bonusMensal << endl;
    cout << "Salario base: " << getSalarioBase() << endl;
    cout << "Salario final: " << calcularSalarioFinal() << endl;
}

