#pragma once
#include"Player.h"
#include"CPU.h"
#include"CardManager.h"

class Turn
{
public:
	//Player'sTurn
	bool PlayPlayerTurn(Player* player,CardManager* CardManager);
	//Cpu'sTurn
	void PlayerCpuTurn(Player* Cpu, CardManager* CardManager);
};