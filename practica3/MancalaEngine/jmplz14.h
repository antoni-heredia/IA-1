/*
 * jmplz14.h
 *
 *  Created on: 15 ene. 2018
 *      Author: manupc
 */

#include "Bot.h"

#ifndef MANUPCBOT_H_
#define MANUPCBOT_H_

class jmplz14:Bot {
public:
	jmplz14();
	~jmplz14();


	void initialize();
	string getName();
	Move nextMove(const vector<Move> &adversary, const GameState &state);
private:
	Move bucarConAlfaBeta(const GameState &state);
	int estadoMax(const GameState &state, int alfa, int beta, int profundidad);
	int estadoMin(const GameState &state, int alfa, int beta, int profundidad);
	int calcularValorEstado(const GameState &state);
};

#endif /* MANUPCBOT_H_ */
