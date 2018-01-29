#include "Text.h"



Text::Text(int x, int y, int fontSize, string fontPath, string text, int color)
{
	_posX = x;
	_posY = y;
	_fontSize = fontSize;
	_fontPath = fontPath;
	_text = text;
	_color = color;

	_index = agk::CreateText(_text.c_str());

	draw();
}


Text::~Text()
{
	agk::DeleteText(_index); // Properly unloads text from agk
	agk::DeleteFont(_index);
}

void Text::draw()
{
	agk::SetTextString(_index, _text.c_str());
	_fontID = agk::LoadFont(_fontPath.c_str());
	agk::SetTextFont(_index, _fontID);
	agk::SetTextSize(_index, _fontSize);
	agk::SetTextPosition(_index, _posX - agk::GetTextTotalWidth(_index)/2, _posY - agk::GetTextTotalHeight(_index) / 2);
	agk::SetTextColor(_index, agk::GetColorRed(_color), agk::GetColorGreen(_color), agk::GetColorBlue(_color), 255);

	agk::Render();
}