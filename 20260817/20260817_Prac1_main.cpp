#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260817_Prac1_header.h"

using namespace std;

//定数
const int PITING_MIN = 0;
const int PITING_MAX = 3;
const int PROBABILITY = 4;
const int STRIKE_COUNT = 3;
const int BALL_COUNT = 4;
const int OUT_COUNT = 3;
const int HIT_COUNT = 4;

int main(void)
{
    //変数
    int ply, emy;
    int prod;
    int Strike = 0;
    int Ball = 0;
    int Out = 0;
    int Hit = 0;
    //乱数初期化
    srand((unsigned int)time(NULL));

    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;
    //ゲームスタート
    while (Out < OUT_COUNT && Hit < HIT_COUNT)
    {
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート "
            << "1:カーブ "
            << "2:スライダー "
            << "3:シンカー"
            << endl;
        //入力処理
        while (true)
        {
            cin >> ply;
            //プレイヤーの入力ターン
            if (PITING_MIN > ply || PITING_MAX < ply)
            {
                cout << "入力に誤りがあります。"
                    << "再度入力してください。"
                    << endl;
            }
            else
            {
                break;
            }
        }

        //プレイヤーの投げる球
        PitingType(ply);

        //CPUが打った時にランダム
        emy = rand() % PROBABILITY;

        //ランダムでボールかストライク
        prod = rand() % PROBABILITY;
        //プレイヤーが投げた球とCPUが違う場合、ボールを２５％ストライクを７５％で判定
        if (ply != emy)
        {
            if (prod == 0)
            {
                cout << "ボール！" << endl;
                Ball++;
            }
            else
            {
                cout << "ストライク！！" << endl;
                Strike++;
            }
        }
        //プレイヤーとCPUの球種が同じ場合２５％でアウト７５％でヒットの判定
        else
        {
            Strike = 0;
            Ball = 0;
            //ランダムでアウトかヒット
            if (prod == 1)
            {
                cout << "OUT!!!" << endl;
                Out++;
            }
            else
            {
                cout << "HIT!!" << endl;
                Hit++;
            }
        }
        //ストライクとボールがその数になったらアウトかヒット
        if (Strike >= STRIKE_COUNT || Ball >= BALL_COUNT)
        {
            //ストライクが３になったらアウト
            if (Strike >= STRIKE_COUNT)
            {
                Out++;
            }
            //ボールが４ならヒット
            else
            {
                Hit++;
            }

            Strike = 0;
            Ball = 0;
        }

        cout << "B:" << Ball << endl;
        cout << "S:" << Strike << endl;
        cout << "O:" << Out << endl;
        cout << "Runner:" << Hit << endl;

    }

    //結果
    Result(Out);

    return 0;
}