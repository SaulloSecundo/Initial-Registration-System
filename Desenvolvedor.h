#ifndef DESENVOLVEDOR_H_INCLUDED 
#define DESENVOLVEDOR_H_INCLUDED

#include "Funcionario.h"

class Desenvolvedor : public Funcionario{

    private:
        int quantidadeDeProjetos;

    public:
        Desenvolvedor(int id, std::string nome, float salario_base, int quantidade_projetos);
        float calcularSalarioFinal();
        void exibirInformacoes();
};

#endif //DESENVOLVEDOR_H_INCLUDED