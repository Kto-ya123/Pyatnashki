#pragma once
#include<vector>
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<random>
#include<time.h>



using namespace std;
class Pyatnashki
{
public:
	void randomer();
	void func(int a);
	int operator[](int);
	void out();
	void move(int);
	bool check();
private:
	int a[5][5];
	int set_i, set_j;
};
