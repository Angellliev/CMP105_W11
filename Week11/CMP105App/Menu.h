#pragma once
#include "Framework/GameObject.h"
#include "Framework/GameState.h"
#include "Framework/AudioManager.h"

class Menu
{
	
public:
	Menu(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud);
	void startGame();
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
};	//AudioManager* audio;

