#include "Button.h"



Button::Button(int xpos, int ypos, int width, int height, string text)
{
	_xpos = xpos - width/2;
	_ypos = ypos - height/2;
	_width = width;
	_height = height;
	_text = text;
}


Button::~Button()
{
}

void Button::draw()
{
	agk::DrawBox(_xpos, _ypos, _xpos + _width, _ypos + _height,
		agk::MakeColor(255, 255, 255), agk::MakeColor(255, 255, 255),
		agk::MakeColor(255, 255, 255), agk::MakeColor(255, 255, 255), 1);
	Text text(_xpos + _width / 2, _ypos + _height / 2, .5f*(_height), "fonts/Karate.ttf", _text, agk::MakeColor(0,0,0));
	agk::Render();
}

bool Button::ifClick()
{
	if (agk::GetRawMouseLeftPressed())
	{
		int mouseX = agk::GetRawMouseX();
		int mouseY = agk::GetRawMouseY();
		//THIS MATH IS BROKEN, IF YOU TUNE IN PLEASE EXPLAIN IN CHAT IF YOU 
		//SEE WHATS WRONG (pos is centered)
		if ((mouseX > _xpos - (_width / 2)) && (mouseX < _xpos + _width))
		{
			return true;
		}
		else
			return false;
	}
}