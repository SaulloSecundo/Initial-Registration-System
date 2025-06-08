#include <iostream>
#include "Funcionario.h"

using namespace std;

//altera o atributo "nome" dos objetos intanciados das classes derivadas da classe Funcionario
void Funcionario::setNome(string nome){
    this->nome = nome;
}
//altera o atributo "SalarioBase" dos objetos intanciados das classes derivadas da classe Funcionario
void Funcionario::setSalarioBase(float salario_base){
    //Corrige o salário base informado pelo o usuário caso seja um valor negativo.
    if(salario_base < 0){
        this->salarioBase = salario_base*(-1);
    }else{
        this->salarioBase = salario_base;
    }
}
//altera o atributo "id" dos objetos intanciados das classes derivadas da classe Funcionario
void Funcionario::setId(int id){
    //Corrige o id informado pelo o usuário caso seja um valor negativo.
    if(id < 0){
        this->id = id*(-1);
    }else{
        this->id;
    }
}
//retorna o atributo "nome" dos objetos intanciados das classes derivadas da classe Funcionario
string Funcionario::getNome(){
    return this->nome;
}
//retorna o atributo "SalarioBase" dos objetos intanciados das classes derivadas da classe Funcionario
float Funcionario::getSalarioBase(){
    return this->salarioBase;
}
//retorna o atributo "id" dos objetos intanciados das classes derivadas da classe Funcionario
int Funcionario::getId(){
    return this->id;
}

//exibe algumas informações referentes aos objetos instaciados da classe Funcionario
void Funcionario::exibirInformacoes(){
    
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Salariobase" << getSalarioBase() << endl;
}