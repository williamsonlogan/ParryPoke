#pragma once

#include "agk.h"
#include <iostream>

using namespace std;

class Text
{
public:
	Text(int x, int y, int fontSize, string fontPath, string text);
	~Text();

	void draw();
	int GetIndex() { return _index; }
private:
	int _index;
	int _posX;
	int _posY;
	int _fontSize;
	string _fontPath;
	string _text;
};

