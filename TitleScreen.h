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
private:
	bool hasStarted = false;
};
