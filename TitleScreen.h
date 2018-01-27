#pragma once

#include "agk.h"
#include "Game.h"
#include "UI.h"

class TitleScreen
{
public:
	void DrawTitle();
	void CheckInput();
	bool GetStarted() { return hasStarted; }
	void SetStarted(bool started) { hasStarted = started; }
	bool GetDrawn() { return isDrawn; }
private:
	bool hasStarted = false;
	bool isDrawn = false;
};
