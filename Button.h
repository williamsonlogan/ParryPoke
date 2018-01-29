#pragma once

#include "agk.h"
#include "Text.h"
#include <iostream>

using namespace std;

class Button
{
public:
	Button(int xpos, int ypos, int xsize, int ysize, string text);
	~Button();

	void draw();
	bool ifClick();
private:
	int _xpos;
	int _ypos;
	int _width;
	int _height;
	string _text;
};

