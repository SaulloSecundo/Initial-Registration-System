# alvo padrão
all: Executavel

# objetos
funcionario.o: Funcionario.cpp Funcionario.h
	g++ -c Funcionario.cpp -o funcionario.o

desenvolvedor.o: Desenvolvedor.cpp Desenvolvedor.h Funcionario.h
	g++ -c Desenvolvedor.cpp -o desenvolvedor.o

gerente.o: Gerente.cpp Gerente.h Funcionario.h
	g++ -c Gerente.cpp -o gerente.o

estagiario.o: Estagiario.cpp Estagiario.h Funcionario.h
	g++ -c Estagiario.cpp -o estagiario.o

cadastro.o: cadastro.cpp Funcionario.h Desenvolvedor.h Gerente.h Estagiario.h
	g++ -c cadastro.cpp -o cadastro.o

# linkagem do executável
Executavel: cadastro.o funcionario.o estagiario.o gerente.o desenvolvedor.o
	g++ cadastro.o funcionario.o estagiario.o gerente.o desenvolvedor.o -o Executavel

clean:
	rm -f *.o Executavel