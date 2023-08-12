#pragma once
#include<graphics.h>
#include<conio.h>
#include"block.h"

class Map
{
public:
	int empty_x;
	int empty_y;
	static const int empty = 9;
	static const int BLOCKSIZE = 300;
	static const int SIZE = 3;
	block data[SIZE][SIZE];
	Map();
	void draw();

	void move(int x, int y);
	bool is_empty(int x, int y);
	void disorganize();
};