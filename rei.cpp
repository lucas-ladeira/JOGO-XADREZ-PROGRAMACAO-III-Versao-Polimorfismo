#include "tabuleiro.h"
#include "rei.h"
#include "torre.h"

bool Rei::verifica_jogada( int pos_final_i, int pos_final_j, Tabuleiro *tabuleiro)
{
	if (tabuleiro->getMatriz(pos_final_i, pos_final_j) == "RP" || tabuleiro->getMatriz(pos_final_i, pos_final_j) == "RB" ) {return false;};//Condicao para o rei nao cpturar o outro rei
	

	if ((get_linha_atual() -1 == pos_final_i && get_coluna_atual() == pos_final_j )|| ( get_linha_atual() -1 == pos_final_i && get_coluna_atual()+1 == pos_final_j )|| (get_linha_atual() -1 == pos_final_i && get_coluna_atual()-1 == pos_final_j)){
			tabuleiro->setMatriz(pos_final_i, pos_final_j, tabuleiro->getMatriz(get_linha_atual(), get_coluna_atual()));
			tabuleiro->setMatriz(get_linha_atual(), get_coluna_atual(), "0");
			inicializa_posicao(pos_final_i, pos_final_j);
			incremento_nJogadas();
			return true;
	}

	if ((get_linha_atual() +1 == pos_final_i && get_coluna_atual()+1 == pos_final_j ) || (get_linha_atual() +1 == pos_final_i && get_coluna_atual() == pos_final_j) || (get_linha_atual() +1 == pos_final_i && get_coluna_atual()-1 == pos_final_j)){
			tabuleiro->setMatriz(pos_final_i, pos_final_j, tabuleiro->getMatriz(get_linha_atual(), get_coluna_atual()));
			tabuleiro->setMatriz(get_linha_atual(), get_coluna_atual(), "0");
			inicializa_posicao(pos_final_i, pos_final_j);
			incremento_nJogadas();
			return true;
	}

	if ((get_linha_atual() == pos_final_i && get_coluna_atual()+1 == pos_final_j ) || (get_linha_atual() == pos_final_i && get_coluna_atual()-1 == pos_final_j) ){
			tabuleiro->setMatriz(pos_final_i, pos_final_j, tabuleiro->getMatriz(get_linha_atual(), get_coluna_atual()));
			tabuleiro->setMatriz(get_linha_atual(), get_coluna_atual(), "0");
			inicializa_posicao(pos_final_i, pos_final_j);
			incremento_nJogadas();
	    	return true;
	}
	
	return false;
}



  	
