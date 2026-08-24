#include <iostream>
using namespace std;

int main(void)
{
    //変数
    int a = 0;
    //ポインター
    int* p = &a;
    //一回目の表示
    cout << "aの初期値: " << a << endl;
    //変更した後の値
    *p = 10;
    //変更した後の値の表示
    cout << "aの変更後の値: " << a << endl;

    return 0;
}