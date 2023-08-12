#include"block.h"
#include"Map.h"
void block::init(int x, int y, int num)
{
	this->x = x;
	this->y = y;
	value = num;
}

void block::draw()
{
	IMAGE img;
	loadimage(&img, value_to_img(value));
	putimage(x*Map::BLOCKSIZE, y * Map::BLOCKSIZE, &img);
}

LPCTSTR block::value_to_img(int num)
{
	switch (num)
	{
	case 1:empty = false; return "./images/1.png";
	case 2:empty = false; return "./images/2.png";
	case 3:empty = false; return "./images/3.png";
	case 4:empty = false; return "./images/4.png";
	case 5:empty = false; return "./images/5.png";
	case 6:empty = false; return "./images/6.png";
	case 7:empty = false; return "./images/7.png";
	case 8:empty = false; return "./images/8.png";
	case 9:empty = true; return "./images/9.png";
	default:return "./images/9.png";
	}
}

void block::set_value(int num)
{
	value = num;
}

