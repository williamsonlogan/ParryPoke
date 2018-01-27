#include "TitleScreen.h"

void TitleScreen::DrawTitle()
{
	isDrawn = true;
}

void TitleScreen::CheckInput()
{
	if (agk::GetRawKeyPressed(13))
	{
		hasStarted = true;
	}
}