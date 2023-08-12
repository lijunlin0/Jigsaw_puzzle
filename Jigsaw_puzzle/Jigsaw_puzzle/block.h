#pragma once
#include<graphics.h>
class block
{
private:
	//图片
	IMAGE img;
	//图片值
	int value;
	int x;
	int y;
	bool empty=false;
public:
	void init(int x, int y, int num);
	void draw();
	//图片值对应图片路径
	LPCTSTR value_to_img(int num);
	//是否为空
	bool is_empty() { return empty; }
	int get_value() { return value; }
	void set_value(int num);
};