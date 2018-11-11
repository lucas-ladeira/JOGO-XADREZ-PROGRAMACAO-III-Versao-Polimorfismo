#ifndef BISPO_H
#define BISPO_H

#include <iostream>
#include <string>
#include "peca.h"

class Tabuleiro;

class Bispo:public Peca
{

public:	
	//funcao responsavel por verificar se a jogada eh valida
	bool verifica_jogada( int pos_final_i, int pos_final_j, Tabuleiro *tabuleiro);
	

private:
	int peca_no_caminho(int pos_atual_i, int pos_atual_j, int pos_final_i, int pos_final_j, Tabuleiro *tabuleiro);	
};

#endif
