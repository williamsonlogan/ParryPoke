// Includes
#include "template.h"

#include "Game.h"

// Namespace
using namespace AGK;

app App;
Game theGame;

void app::Begin(void)
{
	theGame.CreateGame();
	theGame.BeginGame();
}

int app::Loop (void)
{
	theGame.GameLoop();

	return 0; // return 1 to close app
}


void app::End (void)
{
	theGame.CloseGame();
}
