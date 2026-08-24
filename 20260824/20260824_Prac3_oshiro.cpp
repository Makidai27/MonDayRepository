#include<iostream>
using namespace std;

void multiplication(int ary[])
{
	int mult;
	int* pNum;
	pNum = ary;
	cin >> mult;
	cout << "‚©‚¯‚é”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << *(pNum + i) * mult << endl;
	}

};

int main()
{
	int ary[5]{ 10,20,30,40,50 };
	
	multiplication(ary);
	return 0;
}