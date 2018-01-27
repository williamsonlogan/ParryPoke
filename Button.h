#pragma once

#include "agk.h"
#include <iostream>

using namespace std;

class Button
{
public:
	Button();
	~Button();
private:
	int _xpos;
	int _ypos;
	int _xsize;
	int _ysize;
	string _text;
};

