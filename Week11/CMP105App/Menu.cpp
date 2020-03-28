#include "Menu.h"

Menu::Menu(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud)
{
	window = hwnd;
	input = in;
	gameState = gs;
	//audio = aud;
	font.loadFromFile("font/arial.ttf");
	text.setPosition(window->getSize().x / 3, 10);
	text.setCharacterSize(40);
	text.setFont(font);
	text.setString("Press 'P' to play");

}

void Menu::startGame()
{
	gameState->setCurrentState(State::LEVEL);
}

void Menu::handleInput()
{
	if (input->isKeyDown(sf::Keyboard::P))
	{
		startGame();
	}
}


void Menu::render()
{
	beginDrawing();
	window->draw(text); 
	endDrawing();
}

void Menu::beginDrawing()
{
	window->clear(sf::Color(100, 149, 237));
}

void Menu::endDrawing()
{
	window->display();
}


