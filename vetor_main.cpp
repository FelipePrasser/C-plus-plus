#include <iostream>
#include "vetor3.h"
using namespace std;

int main(int argc, char *argv[])
{
	double vetor3A[3];
	double vetor3B[3];
	informeVetor(vetor3A, vetor3B);
	somaVetor(vetor3A, vetor3B);
	diferencaVetor(vetor3A, vetor3B);
	//produtoVetorial(vetor3A, vetor3B);
	produtoEscalar(vetor3A, vetor3B);
	//divisaoVetor(vetor3A, vetor3B);

	return 0;
}
