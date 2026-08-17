#include <iostream>
using namespace std;

#include "20260817_Prac1_header.h"
//ピッチャーの投げるボールの種類
void PitingType(int piting)
{
	
	switch (piting)
	{
	case 0:
		cout << "ストレートを投げました" << endl;
		break;
	case 1:
		cout << "カーブを投げました" << endl;
		break;
	case 2:
		cout << "スライダーを投げました" << endl;
		break;
	case 3:
		cout << "シンカーを投げました" << endl;
		break;

	}
}

//プレイヤーかCPUの勝敗の結果
void Result(int out)
{
	//プレイヤーの勝利
	if (out >= 3)
	{
		cout << "PLAYER WINNER!!" << endl;
	}
	//CPUの勝利
	else
	{
		cout << "CPU WINNER!!" << endl;
	}
}