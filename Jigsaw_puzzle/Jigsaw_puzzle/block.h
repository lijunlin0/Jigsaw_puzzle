#pragma once
#include<graphics.h>
class block
{
private:
	//ͼƬ
	IMAGE img;
	//ͼƬֵ
	int value;
	int x;
	int y;
	bool empty=false;
public:
	void init(int x, int y, int num);
	void draw();
	//ͼƬֵ��ӦͼƬ·��
	LPCTSTR value_to_img(int num);
	//�Ƿ�Ϊ��
	bool is_empty() { return empty; }
	int get_value() { return value; }
	void set_value(int num);
};