#include "Pause.h"

Pause::Pause(sf::RenderWindow* hwnd, Input* in, GameState* gs)
{
	window = hwnd;
	input = in;
	gameState = gs;

	font.loadFromFile("font/arial.ttf");
	text.setPosition(window->getSize().x / 3, 10);
	text.setCharacterSize(40);
	text.setFont(font);
	text.setString("Paused");
}

void Pause::pauseGame()
{
	gameState->setCurrentState(State::PAUSE);
}

void Pause::resumeGame()
{
	gameState->setCurrentState(State::LEVEL);
}

void Pause::handleInput()
{
	if (input->isKeyDown(sf::Keyboard::Z))
	{
		resumeGame();
	}
}

void Pause::render()
{
	//beginDrawing();
	window->draw(text);
	//endDrawing();
}

void Pause::beginDrawing()
{
	window->clear(sf::Color(100, 149, 237));
}

void Pause::endDrawing()
{
	window->display();
}
