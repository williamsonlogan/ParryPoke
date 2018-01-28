#include "Game.h"

void Game::CreateGame()
{
	//Program Settings
	agk::SetWindowTitle("ParryPoke");
	agk::SetVirtualResolution(1280, 720);
	agk::SetWindowSize(_resW, _resH, _fullscreen);
	agk::SetWindowAllowResize(false);
	agk::SetBorderColor(0, 0, 0);
	agk::SetClearColor(0,0,0);
	agk::SetFolder("media/");

	//Graphics Options -SHOULD BE A CONFIG LATER-
	agk::SetVSync(1);
	agk::SetAntialiasMode(1);

	//FPS print size, use normal text for UI stuff please
	agk::SetPrintSize(20);
}

void Game::BeginGame()
{
	//Load in placeholder theme
	agk::LoadMusicOGG(1, "music/GuileTheme.ogg");
}

TitleScreen title; //Globalize title screen, will need unloading

void Game::GameLoop()
{
	agk::ClearScreen();
	agk::Print((int)agk::ScreenFPS());

	if (agk::GetRawKeyPressed(13) && agk::GetRawKeyPressed(16))
	{
		if (_fullscreen)
			_fullscreen = false;
		else
			_fullscreen = true;

		agk::SetWindowSize(_resW, _resH, _fullscreen);
	}

	time = agk::Timer();

	//Gamestate Machine
	switch (GAMESTATE)
	{
	case SPLASH:
		if (time <= 5)
		{
			agk::CreateText(0, "TEAM K.O.");
			agk::SetTextSize(0, 72);
			agk::SetTextPosition(0, _resW/2 - agk::GetTextTotalWidth(0)/2, _resH / 2 - agk::GetTextTotalHeight(0)/2);
		}
		else
		{
			//agk::PlayMusicOGG(1, 1);
			agk::DeleteText(0);
			GAMESTATE = TITLE;
		}

		break;
	case TITLE:
		title.DrawTitle();
		title.CheckInput();

		if (title.GetStarted())
		{
			//TODO: Some kind of POW! sound effect
			GAMESTATE = MENU;
		}
		break;
	case MENU:
	{
		Button start(1280 / 2, 720 / 2, 120, 90, "Start");
		start.draw();
		break;
	}
	case CHARSELECT:
		break;
	case FIGHT:
		break;
	case PAUSE:
		break;
	default:
		break;
	}

	agk::Sync();
}

void Game::CloseGame()
{

}