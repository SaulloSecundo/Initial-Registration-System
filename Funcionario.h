#ifndef FUNCIONARIO_H_INCLUDED
#define FUNCIONARIO_H_INCLUDED

#include <string>

class Funcionario
{
protected:
    std::string nome;
    float salarioBase;

private:
    int id;

public:
    std::string tipo;
    
    void setNome(std::string nome);
    void setSalarioBase(float salario_base);
    void setId(int id);
    std::string getNome();
    float getSalarioBase();
    int getId();

    //método virtual
    virtual void exibirInformacoes();
    //método virtual puro
    virtual float calcularSalarioFinal() = 0;
};

#endif // FUNCIONARIO_H_INCLUDED