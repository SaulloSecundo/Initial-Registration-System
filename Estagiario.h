#ifndef ESTAGIARIO_H_INCLUDED
#define ESTAGIARIO_H_INCLUDED
#include "Funcionario.h"

class Estagiario : public Funcionario{

    private:
        int horasTrabalhadas;

    public:
        Estagiario(int id, std::string nome, float salario_base, int horas_trabalhadas);
        float calcularSalarioFinal();
        void exibirInformacoes();

};


#endif //ESTAGIARIO_H_INCLUED