#include<iostream>
#include<graphics.h>
#include<conio.h>
#include"Map.h"
#include"time.h"
using namespace std;
const int WIDTH = Map::SIZE * Map::BLOCKSIZE;
const int HEIGHT = Map::SIZE * Map::BLOCKSIZE;
using namespace std;

int main()
{
	srand((unsigned)time(NULL));//根据系统时间改变的随机种子
	initgraph(WIDTH, HEIGHT, SHOWCONSOLE);
	setlinecolor(LIGHTBLUE);
	Map m;
	ExMessage msg;
	m.disorganize();
	while (true)
	{
		bool b = peekmessage(&msg, EX_MOUSE | EX_KEY);

		if (b&&msg.message == WM_LBUTTONDOWN)
		{
			

			int x = msg.x;
			int y = msg.y;
			
			m.move(x / Map::BLOCKSIZE, msg.y / Map::BLOCKSIZE);
			m.draw();
		}
	}
	system("pause");
	return 0;
}