#ifndef GERENTE_H_INCLUDED
#define GERENTE_H_INCLUDED
#include "Funcionario.h"

class Gerente : public Funcionario
{
private:
    float bonusMensal;

public:
    Gerente(int id, std::string nome, float salario_base, float bonus_mensal);
    float calcularSalarioFinal();
    void exibirInformacoes();
};

#endif // GERENTE_H_INCLUDED