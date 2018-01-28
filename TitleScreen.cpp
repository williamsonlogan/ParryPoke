#include "TitleScreen.h"

void TitleScreen::DrawTitle()
{
	Text title(1280/2,720/4, 128, "fonts/Karate.ttf", "ParryPoke!", agk::MakeColor(255, 255, 255));

	Text prompt(1280 / 2, .75f * 720, 72, "fonts/Karate.ttf", "Press Start", agk::MakeColor(255, 255, 255));

	agk::Render();
}

void TitleScreen::CheckInput()
{
	if (agk::GetRawKeyPressed(13)) // If enter is hit(TODO: Input manager to support multiple input devices)
	{
		hasStarted = true;
	}
}