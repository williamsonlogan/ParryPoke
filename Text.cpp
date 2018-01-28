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
	_fontID = agk::LoadFont(_fontPath.c_str());
	agk::SetTextFont(_index, _fontID);
	agk::SetTextSize(_index, _fontSize);
	agk::SetTextPosition(_index, _posX - agk::GetTextTotalWidth(_index)/2, _posY - agk::GetTextTotalHeight(_index) / 2);
}