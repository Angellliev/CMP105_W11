#include "Player.h"

Player::Player()
{
	setSize(sf::Vector2f(40, 40));
	setFillColor(sf::Color::Red);
}

void Player::update(float dt, sf::RenderWindow* wind)
{
	if (input->isKeyDown(sf::Keyboard::A))
	{
		velocity.x = -100;
	}
	else if (input->isKeyDown(sf::Keyboard::D))
	{
		velocity.x = 100;
	}
	else
	{
		velocity.x = 0;
	}

	if (input->isKeyDown(sf::Keyboard::Space))
	{
		velocity.y = -300;
	}
	else
	{
		velocity.y += 10000 * dt;
	}

	move(velocity * dt);
	if (getPosition().y + getSize().y > wind->getSize().y)
	{
		setPosition(getPosition().x, wind->getSize().y - getSize().y);
	}
}
