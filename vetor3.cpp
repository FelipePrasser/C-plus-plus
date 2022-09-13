#include "vetor3.h"
#include <iostream>
using namespace std;

void informeVetor (double vetor3A[3], double vetor3B[3]){
	cout<<"Informe o x, y e o z do vetor A. Respectivamente.\n";
	cin>>vetor3A[0];cin>>vetor3A[1];cin>>vetor3A[2];
	cout<<"Informe o x, y e o z do vetor B. Respectivamente.\n";
	cin>>vetor3B[0];cin>>vetor3B[1];cin>>vetor3B[2];
}
void somaVetor (double vetor3A[3], double vetor3B[3]){
	double x, y, z;
	x=vetor3A[0]+vetor3B[0];
	y=vetor3A[1]+vetor3B[1];
	z=vetor3A[2]+vetor3B[2];
	cout<<"O Resultado da Soma do Vetor A com o vetor B é: ("<<x<<","<<y<<","<<z<<").\n";
}
void diferencaVetor (double vetor3A[3], double vetor3B[3]){
	double x, y, z;
	x=vetor3A[0]-vetor3B[0];
	y=vetor3A[1]-vetor3B[1];
	z=vetor3A[2]-vetor3B[2];
	cout<<"O Resultado da Diferença do Vetor A com o vetor B é: ("<<x<<","<<y<<","<<z<<").\n";
}
void produtoEscalar (double vetor3A[3], double vetor3B[3]){
	int num;
	cout<<"O produto escalar será uma multiplicação com um número real (1) ou com outro vetor(2)?\n";
	cin>>num;
	if (num==1){
		double x, y, z, k;
		char escolhaVetor;
		cout<<"Informe o qual vetor será utilizado. A para o vetor A. B para o vetor B.\n";
		cin>>escolhaVetor;
		if (escolhaVetor=='A'){
			cout<<"Qual será o valor?\n";
			cin>>k;
			x=vetor3A[0]*k;
			y=vetor3A[1]*k;
			z=vetor3A[2]*k;
			cout<<"O Resultado do Produto Escalar do Vetor A com o valor "<<k<< " é: ("<<x<<","<<y<<","<<z<<").\n";
		}else{
			cout<<"Qual será o valor?\n";
			cin>>k;
			x=vetor3B[0]*k;
			y=vetor3B[1]*k;
			z=vetor3B[2]*k;
			cout<<"O Resultado do Produto Escalar do Vetor B com o valor "<<k<< " é: ("<<x<<","<<y<<","<<z<<").\n";
		}
	}else{
		double x, y, z;
		x=vetor3A[0]*vetor3B[0];
		y=vetor3A[1]*vetor3B[1];
		z=vetor3A[2]*vetor3B[2];
		cout<<"O Resultado do Produto Escalar do Vetor A com o vetor B é: "<<x+y+z<<".\n";
	}
}
// void produtoVetorial (vetor3A, vetor3B){
// 	double x, y, z;
// 	x=vetor3A[0]+vetor3B[0];
// 	y=vetor3A[1]+vetor3B[1];
// 	z=vetor3A[2]+vetor3B[2];
// 	cout<<"O Resultado da Soma do Vetor A com o vetor B é: ("<<x<<","<<y<<","<<z<<").";
// }