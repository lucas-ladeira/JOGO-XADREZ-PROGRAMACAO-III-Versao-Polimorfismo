#ifndef PECA_H
#define PECA_H

#include <iostream>
#include <string>

class Tabuleiro;

class Peca
{
public:
    virtual bool verifica_jogada( int pos_final_i, int pos_final_j, Tabuleiro *tabuleiro) = 0;
	void inicializa_posicao(int pos_i, int pos_j)
	{
		pos_atual_i = pos_i;
		pos_atual_j = pos_j;
		return;
	}
	void setNjogadas (){ nJogadas++; }
	int getNJogadas(void) { return nJogadas; }
	int get_linha_atual() { return pos_atual_i; }
	int get_coluna_atual() { return pos_atual_j; }
	void incremento_nJogadas() { nJogadas++; }
	void setCor( char c ) { cor = c; }
	char getCor() { return cor; }

	virtual std::string retornaString() = 0;

private:
	
	int nJogadas = 0;
	int pos_atual_i;
	int pos_atual_j; //posicao atual em i e j
	char cor;
};


#endif
