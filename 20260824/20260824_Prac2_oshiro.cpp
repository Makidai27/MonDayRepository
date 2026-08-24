/*問題：
次の配列が用意されています。
int numbers[5] = { 35, 82, 17, 96, 54 };
この配列の中から最大値を探し、表示するプログラムを作成してください。

【条件】
・配列の要素を取得するときに numbers[i] を使用してはいけません。
・配列の先頭アドレスをポインタに保存してください。
・ポインタを使って配列の各要素を取得してください。
・for文を使用してください。
・最大値を保存するための変数を用意してください。

【実行結果】
最大値：96
ポインタを使って配列の値を取得しながら、最大値を探してみましょう。
*/
#include<iostream>
using namespace std;

int main(void)
{
	int numbers[5] = {35,82,17,96,54};
	int MaxNum = 0;
	int* pNum;
	pNum = numbers;

	for (int i = 0; i < 5; i++)
	{
		cout << *(pNum + i) << endl;
		if (*(pNum+i)>MaxNum)
		{
			MaxNum = *(pNum+i);
		}
	}
	cout << "最大値 : " << MaxNum << endl;
	return 0;
}