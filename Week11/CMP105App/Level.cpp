#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud)
{
	window = hwnd;
	input = in;
	gameState = gs;
	audio = aud;

	player.setInput(input);
	// initialise game objects
	audio->addMusic("sfx/cantina.ogg", "cantina");
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		gameState->setCurrentState(State::MENU);
		player.setPosition(0, 0);
		player.setVelocity(0, 0);
	}
	else if (input->isKeyDown(sf::Keyboard::P))
	{
		gameState->setCurrentState(State::PAUSE);
	}
}

// Update game objects
void Level::update(float dt)
{
	player.update(dt, window);
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(player);
	endDraw();
}

// Begins rendering to the back buffer. Background colour set to light blue.
void Level::beginDraw()
{
	switch (gameState->getCurrentState())
	{
	case(State::LEVEL):
		window->clear(sf::Color(100, 149, 237));
		break;
	}
	
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}