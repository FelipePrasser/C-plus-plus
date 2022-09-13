/**
 * \author Felipe Emanuel de Mello Alves Vianna Prasser
 * \date 2022, September 05
 * \version 2022, September 05
 **/
#ifndef VETOR3_H
#define VETOR3_H

class Vetor3
{
    public:
        Vetor3();
        ~Vetor3();
    
};

void informeVetor (double vetor3A[3], double vetor3B[3]);
void somaVetor (double vetor3A[3], double vetor3B[3]);
void diferencaVetor (double vetor3A[3], double vetor3B[3]);
void produtoEscalar (double vetor3A[3], double vetor3B[3]);
#endif