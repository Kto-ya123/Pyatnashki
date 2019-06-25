#include<iostream>
#include"Pyatnashki.h"

using namespace std;


int main()
{
	Pyatnashki p;
	p.randomer();
	while (!p.check())
	{
		p.out();
		int a = _getch();
		switch (a)
		{
		case '2':
			a = 1;
			break;
		case '4':
			a = 2;
			break;
		case '6':
			a = 3;
			break;
		case '8':
			a = 4;
			break;
		}
		p.func(a);
	}
	cout << "Вы выиграли";
	
	_getch();
	return 0;
}