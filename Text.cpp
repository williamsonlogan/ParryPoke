#include "Text.h"



Text::Text(int x, int y, int fontSize, string fontPath, string text)
{
	_posX = x;
	_posY = y;
	_fontSize = fontSize;
	_fontPath = fontPath;
	_text = text;

	_index = agk::CreateText(_text.c_str());

	draw();
}


Text::~Text()
{
	agk::DeleteText(_index);
}

void Text::draw()
{
	agk::SetTextString(_index, _text.c_str());
	agk::SetTextPosition(_index, _posX, _posY);
	agk::SetTextFont(_index, agk::LoadFont(_fontPath.c_str()));
	agk::SetTextSize(_index, _fontSize);
}