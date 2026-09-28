#include"Trun.h"
#include<iostream>
#include"Config.h"

using namespace std;

bool Turn::PlayPlayerTurn(Player* player, CardManager* CardManager)
{
	while (true)
	{
		cout << "\n==================================\n";
		cout << "Player Turn\n";
		cout << "===================================\n";

		player->ShowStatus();
		if (player->GetTotal() == TAGET_SCORE )
		{
			cout << "\nPlayer's Total : 21\n";

			return true;
		}
		cout << "\nカードを引きますか？？\n";
		cout << INPUT_YES << ":Yes\n";
		cout << INPUT_NO << ":No\n";

		int input;

		cin >> input;

		//カードを引かない
		if (input == INPUT_YES)
		{
			//カードを取得
			int card = CardManager->DrawCard();

			cout << "\nPlayerがカードを引きました\n";
			cout << "引いたカード:" << card << endl;

			//Playerに引いたカードを追加
			player->AddCard(card);

			player->ShowStatus();
		}
		
		if(player->GetTotal() >= BURST_SCORE)
		{
			cout << "\nPlayerはバーストしました\n";
			return false;
		}
	}
}