#include "TitleScreen.h"

void TitleScreen::DrawTitle()
{
	Text title(1280/2,720/4, 128, "fonts/Karate.ttf", "ParryPoke!");
	isDrawn = true;

	agk::Render();
}

void TitleScreen::CheckInput()
{
	if (agk::GetRawKeyPressed(13))
	{
		hasStarted = true;
	}
}