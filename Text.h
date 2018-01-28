#pragma once

#include "agk.h"
#include <iostream>

using namespace std;

class Text
{
public:
	Text(int x, int y, int fontSize, string fontPath, string text);
	~Text();

	void draw(); //Actually draw text using AGK functions
	int GetIndex() { return _index; }
private:
	int _index;
	int _fontID;
	int _posX;
	int _posY;
	int _fontSize;
	string _fontPath;
	string _text;
};

