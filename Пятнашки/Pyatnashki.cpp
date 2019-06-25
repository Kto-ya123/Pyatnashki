#include"pyatnashki.h"

void Pyatnashki::randomer(){
	vector<int> vec;
	for (int i(0); i <= 15; i++)
	{
		vec.push_back(i);
	}
	for (int i(1); i < 5; i++)
	{
		for (int j(1); j < 5; j++)
		{
			if (vec.size() == 1)
			{
				a[i][j] = *vec.begin();
				vec.pop_back();
				break;
			}
			int index = rand() % (vec.size() - 1);


			a[i][j] = vec[index];
			vector<int>::iterator it = vec.begin();

			vec.erase(it + index);
		}
	}
	for (int i(1); i < 5; i++)
	{
		for (int j(1); j < 5; j++)
		{
			if (!a[i][j])
			{
				set_i = i;
				set_j = j;
			}
		}
	}
}
void Pyatnashki::func(int a)
{
	setfill(' ');
	move(a);
}
void Pyatnashki::move(int choose)
{
	{
		switch (choose)
		{
		case 1://2
			if (set_i == 1)
				return;
			else
			{
				swap(a[set_i][set_j], a[set_i - 1][set_j]);
				set_i--;
			}
			break;
		case 2://4
			if (set_j == 4)
				return;
			else
			{
				swap(a[set_i][set_j], a[set_i][set_j + 1]);
				set_j++;
			}
			break;
		case 3://6
			if (set_j == 1)
				return;
			else
			{
				swap(a[set_i][set_j], a[set_i][set_j - 1]);
				set_j--;
			}
			break;
		case 4://8
			if (set_i == 4)
				return;
			else
			{
				swap(a[set_i][set_j], a[set_i + 1][set_j]);
				set_i++;
			}
			break;
		}
	}
}
int Pyatnashki::operator[](int index)
{
	return a[index / 4 + 1][index % 4 ? index % 4 : index % 4 - 1];
}
void Pyatnashki::out()
{
	system("cls");
	for (int i(1); i < 5; i++)
	{
		for (int j(1); j < 5; j++)
		{
			if (!a[i][j])
				cout << setw(3) << ' ';
			else
				cout << setw(2) << a[i][j] << ' ';
		}
		cout << endl;
	}
}
bool Pyatnashki::check()
{
	bool ch = true;
	for (int i(1); i < 16; i++)
	{
		if (a[i / 4 + 1][i % 4 ? i % 4 : i % 4 - 1] != i)
		{
			ch = false;
			break;
		}
	}
	return ch;
}