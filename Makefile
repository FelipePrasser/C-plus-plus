.PHONY: clean doxygen

CXX=g++ 
RM=rm

# receita para gerar o binário final 
vetor_main: vetor3.o vetor_main.o
	$(CXX) vetor_main.o vetor3.o -o vetor_main

# receita para gerar o (arquivo objeto) polinômio.o
vetor3.o: vetor3.cpp vetor3.h
	$(CXX) -o vetor3.o -c vetor3.cpp

# receita para gerar o (arquivo objeto) main.o
vetor_main.o: vetor_main.cpp vetor3.h
	$(CXX) -o vetor_main.o -c vetor_main.cpp

# receita para apagar arquivos (geralmente são arquivos gerados
# no processo de desenvolvimento)
clean:
	$(RM) -f vetor_main
	$(RM) -f vetor3.o
	$(RM) -f vetor_main.o

# receita para gerar a documentação, o arquivo Doxyfile está
# configurado para gerar um diretório chamado docs
doc:
	doxygen

# receita para apagar o conteúdo do diretório de documentação
cleandoc:
	$(RM) -fR docs