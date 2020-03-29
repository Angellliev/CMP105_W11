#pragma once
#include "Framework/GameObject.h"
#include "Framework/GameState.h"
#include "Framework/AudioManager.h"
class Pause
{
public:
	Pause(sf::RenderWindow* hwnd, Input* in, GameState* gs);
	void pauseGame();
	void resumeGame();
	void handleInput();
	void render();
private:
	void beginDrawing();
	void endDrawing();

	sf::Text text;
	sf::Font font;

	sf::RenderWindow* window;
	Input* input;
	GameState* gameState;
};

