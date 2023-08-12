#include "Map.h"
#include"time.h"
#include<iostream>
long long time::update_ms = 0;
using namespace std;

Map::Map()
{
	int num = 1;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			data[j][i].init(j,i,num);
			num++;
		}
	}
	draw();
}

void Map::draw()
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			data[j][i].draw();
			cout<<data[j][i].get_value()<<' ';
		}
		cout << endl;
	}

}



void Map::move(int x, int y)
{
	//cout << "value:" << data[y][x].get_value() << endl;
	//cout << x << ' ' << y << endl;
	
	//©у
	if (data[x][y].get_value() == empty)
	{
		return;
	}
	//ио
	else if (y-1>=0&&data[x][y - 1].is_empty())
	{
		data[x][y - 1].set_value(data[x][y].get_value());
		data[x][y].set_value(empty);
	}
	//об
	else if (y+1<SIZE&&data[x][y + 1].is_empty())
	{
		data[x][y + 1].set_value(data[x][y].get_value());
		data[x][y].set_value(empty);
	}
	//вС
	else if (x-1>=0&&data[x - 1][y].is_empty())
	{
		data[x - 1][y].set_value(data[x][y].get_value());
		data[x][y].set_value(empty);
	}
	//ср
	else if (x+1<SIZE&&data[x + 1][y].is_empty())
	{
		data[x + 1][y].set_value(data[x][y].get_value());
		data[x][y].set_value(empty);
	}
}

bool Map::is_empty(int x, int y)
{
	
	return false;
}

void Map::disorganize()
{
	for (int i = 0; i < 90; i++)
	{
	
		int x = rand() % 3;
		int y = rand() % 3;
		
		move(x, y);
		draw();
	}

	
}