#ifndef PEAO_H
#define PEAO_H

#include <iostream>
#include <string>

class Tabuleiro;

class Peao
{
public:

	void inicializa_posicao(int pos_i, int pos_j)
	{
		return;
	}	

	bool verifica_jogada( int pos_final_i, int pos_final_j, Tabuleiro *tabuleiro)
	{
		return false;
	}	

private:

	int pos_atual_i;
	int pos_atual_j; //posicao atual em i e j
};

#endif