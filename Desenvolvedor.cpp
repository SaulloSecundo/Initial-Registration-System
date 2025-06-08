#include <iostream>
#include "Desenvolvedor.h"

using namespace std;

//implementação do construtor parametrizado, inicializando os atributos da classe Desenvolvedor 
Desenvolvedor::Desenvolvedor(int id, string nome, float salario_base, int quantidade_projetos)
{

    this->tipo = "Desenvolvedor";
    setId(id);
    setNome(nome);
    setSalarioBase(salario_base);
    //Corrige a quantidade de projetos informados pelo o usuário caso seja um valor negativo.
    if(quantidade_projetos < 0){
        this->quantidadeDeProjetos = quantidade_projetos*(-1);
    }else{
        this->quantidadeDeProjetos = quantidade_projetos;
    }
}
//Implementação do cálculo padrão para o salário de desenvolvedor
float Desenvolvedor::calcularSalarioFinal()
{

    return getSalarioBase() + (500 * this->quantidadeDeProjetos);
}

//imprime imformações relacionadas aos desenvolvedores instanciados 
void Desenvolvedor::exibirInformacoes()
{
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo: " << this->tipo << endl;
    cout << "Projetos: " << this->quantidadeDeProjetos << endl;
    cout << "Salario base: " << getSalarioBase() << endl;
    cout << "Salario final: " << calcularSalarioFinal() << endl;
}