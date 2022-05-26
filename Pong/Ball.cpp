#include "Ball.h"

//Constructor function
Ball::Ball (float startX, float startY) {
	
	m_Position.x = startX;
	m_Position.y = startY;

	m_Shape.setSize(sf::Vector2f(10, 10));
	m_Shape.setPosition(m_Position);
}

//Getter function
FloatRect Ball::getPosition() {
	return m_Shape.getGlobalBounds();
}

//Getter function
RectangleShape Ball::getShape() {
	return m_Shape;
}

//Getter function
float Ball::getXVelocity() {
	return m_DirectionX;
}