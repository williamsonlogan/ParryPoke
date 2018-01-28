#pragma once

#include "agk.h"
#include "UI.h"
#include "TitleScreen.h"

enum GameState {SPLASH, TITLE, MENU, CHARSELECT, FIGHT, PAUSE};

class Game
{
public:
	void CreateGame();
	void BeginGame();
	void GameLoop();
	void CloseGame();

	float time = 0;
private:
	GameState GAMESTATE = SPLASH;

	int _resW = 1280;
	int _resH = 720;
	bool _fullscreen = 0;
};

